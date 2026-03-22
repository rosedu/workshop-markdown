# My favorite food

## Can you guess it?

### No?

Well here it is:

![pizza](https://ptpimg.me/c4blk2.png)

## Here are my top 3 favorite pizza types

1. **Diavola** (I love me some spicy food)
1. **Quattro Formaggi** (Feels light to eat but still very filling)
1. **Hawaiian** (Please don't kill me for liking pineapple :pleading_face:)

## You like pizza too? Of course you do

you'd have to be a psychopath to not like it

### Here are some reasons why it's so enjoyed

- *It's convenient* (You can always order a pizza)
- *It can be anything you want* (What can't you put on pizza)
- *It always works* (Breakfast, lunch or dinner, when can't you have pizza?)

## Here's a cool table with ingredients

| Vegan | Anything else :shrug: |
|-------|-----------------------|
| Tomatoes | Pepperoni |
| Garlic | Sausage  |
| Oregano | Pork |
| Basil | Prosciutto |
| Parmesan | Bacon |

## All programmers love pizza

### So much that they even order it from the CLI

Here is some cool Go code to do just that: [Original repository](https://github.com/harrybrwn/apizza)

```go
package cmd

import (
 "errors"
 "fmt"
 "log"
 "os"
 fp "path/filepath"

 "github.com/harrybrwn/apizza/cmd/cli"
 "github.com/harrybrwn/apizza/cmd/commands"
 "github.com/harrybrwn/apizza/pkg/config"
 "github.com/spf13/cobra"
 "gopkg.in/natefinch/lumberjack.v2"
)

// Logger for the cmd package
var Logger = &lumberjack.Logger{
 Filename:   "",
 MaxSize:    25,  // megabytes
 MaxBackups: 10,  // number of spare files
 MaxAge:     365, //days
 Compress:   false,
}

var (
 // Version is the cli version id (will be set as an ldflag)
 version string

 // testing version change this with an ldflag
 enableLog = "yes"
)

// AllCommands returns a list of all the Commands.
func AllCommands(builder cli.Builder) []*cobra.Command {
 return []*cobra.Command{
  commands.NewCartCmd(builder).Cmd(),
  commands.NewConfigCmd(builder).Cmd(),
  NewMenuCmd(builder).Cmd(),
  commands.NewOrderCmd(builder).Cmd(),
  commands.NewAddAddressCmd(builder, os.Stdin).Cmd(),
  commands.NewCompletionCmd(builder),
 }
}

// Execute runs the root command
func Execute(args []string, dir string) (msg *ErrMsg) {
 app := NewApp(os.Stdout)
 err := app.Init(dir)
 if err != nil {
  return senderr(err, "Internal Error", 1)
 }

 if enableLog == "yes" {
  Logger.Filename = fp.Join(config.Folder(), "logs", "dev.log")
  log.SetOutput(Logger)
 }

 defer func() {
  errmsg := senderr(app.Cleanup(), "Internal Error", 1)
  if errmsg != nil {
   // if we always set it the the return value will always
   // be the same as errmsg
   msg = errmsg
  }
 }()

 cmd := app.Cmd()
 cmd.Version = version
 cmd.SetArgs(args)
 cmd.AddCommand(AllCommands(app)...)
 return senderr(cmd.Execute(), "Error", 1)
}

// ErrMsg is not actually an error but it is my way of
// containing an error with a message and an exit code.
type ErrMsg struct {
 Msg  string
 Code int
 Err  error
}

func senderr(e error, msg string, code int) *ErrMsg {
 if e == nil {
  return nil
 }
 return &ErrMsg{Msg: msg, Code: code, Err: e}
}

var test = false

func newTestCmd(b cli.Builder, valid bool) *cobra.Command {
 return &cobra.Command{
  Use:    "test",
  Hidden: true,
  RunE: func(cmd *cobra.Command, args []string) error {
   if !valid {
    return errors.New("no such command 'test'")
   }

   db := b.DB()
   fmt.Printf("%+v\n", db)

   m, _ := db.Map()
   for k := range m {
    fmt.Println(k)
   }
   return nil
  },
 }
}
```
