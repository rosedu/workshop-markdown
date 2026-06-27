# My Developer Setup :computer:

A quick overview of the tools and workflows I use day-to-day as a developer.

## Why This Matters

Having a consistent, well-configured setup saves hours every week.
The tools below are what I reach for on every project, regardless of language or platform.

---

## Essential Tools

| Tool | Purpose | Install |
| --- | --- | --- |
| [git](https://git-scm.com/) | Version control | `apt install git` |
| [tmux](https://github.com/tmux/tmux) | Terminal multiplexer | `apt install tmux` |
| [ripgrep](https://github.com/BurntSushi/ripgrep) | Fast code search | `apt install ripgrep` |
| [fzf](https://github.com/junegunn/fzf) | Fuzzy finder | `apt install fzf` |
| [htop](https://htop.dev/) | Process monitor | `apt install htop` |

---

## My Most-Used Git Aliases :rocket:

```bash
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.lg "log --oneline --graph --decorate"
```

After that, `git lg` gives a compact, readable history:

```
* 4a3f1c2 (HEAD -> main) Fix memory leak in parser
* 7b91de0 Add unit tests for tokenizer
* c3e2a11 Initial commit
```

---

## Things I Always Do on a New Machine

1. Install `git`, `tmux`, and `ripgrep`
2. Copy over my dotfiles from [my dotfiles repo](https://github.com/busuyoc)
3. Set up SSH keys for GitHub
4. Configure `git` with name and email
5. Install language toolchains (Go, Rust, Python)

---

## Things I Never Do

- Push directly to `main`
- Use `rm -rf` without double-checking the path :grimacing:
- Commit without a meaningful message
- Open a PR without testing it locally first

---

## Favourite Quote

> "Programs must be written for people to read, and only incidentally for machines to execute."
> — Harold Abelson

---

## A Note on Editors

I use [Neovim](https://neovim.io/) as my primary editor.
The learning curve is real, but the payoff is worth it.

![Neovim logo](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/Neovim-logo.svg/320px-Neovim-logo.svg.png)
