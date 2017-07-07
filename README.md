# exclaim

This is a simple demonstration for processing lines from stdin in C. It outputs each line with an exclamation point.

## Setup

On Linux, compile with gcc:
```
gcc exclaim.c -o exclaim
```

Move to a directory in $PATH:
```
sudo mv exclaim /usr/local/bin
```

## Usage

Interactive (CTRL+D to exit)
```
$ exclaim
hello world
hello world!
```

Pipes
```
$ echo "hello world" | exclaim
hello world!
$ head -n1 README.md | exclaim | exclaim
# exclaim!!
```
