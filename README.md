# CppLetterCounter


This is a program solving a toy problem proposed to me by a teacher. It counts the occurences of each letter in a given string.

## Build/Run

```console
$ gcc lettercounter.c -o lettercounter
$ ./lettercounter
```

## Example Output

### Commandline Argument
```console
$ ./lettercounter "here are many letters!"
  [0x20]: 3
! [0x21]: 1
a [0x61]: 2
e [0x65]: 5
h [0x68]: 1
l [0x6C]: 1
m [0x6D]: 1
n [0x6E]: 1
r [0x72]: 3
s [0x73]: 1
t [0x74]: 2
y [0x79]: 1
```

### From stdin

```console
$ cat /etc/hostname | ./lettercounter
a [0x61]: 1
l [0x6C]: 1
o [0x6F]: 1
p [0x70]: 2
t [0x74]: 1
```
