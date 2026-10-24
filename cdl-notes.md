# My CDL Notes 📝

Notes from the CDL workshop on **Markdown** and **Makefiles**.
The workshop repository is [rosedu/workshop-markdown](https://github.com/rosedu/workshop-markdown).

![Hello, World!](helloworld.png)

## What I learned

- Markdown is a plain text format for headings, lists, links, tables and code.
- GitHub renders Markdown files into formatted pages.
- A Makefile describes how to build a program with `make`.
- Recipe lines in a Makefile must start with a **Tab**, not spaces.
- A *fork* is my own copy of a repository on GitHub.

## Pull request workflow

1. Fork the repository.
1. Clone the fork.
1. Create a branch.
1. Make changes and create commits.
1. Push the branch to the fork.
1. Open a pull request to the assigned branch.

## Commands I used

| Command | What it does |
| --- | --- |
| `cat README.md` | prints a file in the terminal |
| `git checkout -b <branch>` | creates a branch and switches to it |
| `git push origin <branch>` | uploads a branch to my fork |
| `make main` | builds `main.c` into `main` |
| `make clean` | removes the build output |

## A small Makefile

```make
hello: hello.c
	gcc hello.c -o hello

clean:
	rm -f hello
```

## Useful links

- [GitHub Flavored Markdown spec](https://github.github.com/gfm/)
- [GNU make manual](https://www.gnu.org/software/make/manual/make.html)
- [Markdown Guide](https://www.markdownguide.org/basic-syntax/)

Happy coding! 🚀
