# Bubbles: A simple and expandable C++ project template with [Googletest](https://github.com/google/googletest) and [Boost](https://www.boost.org/) included.

## Setup

```console
$ git clone https://willdoescode/bubbles
$ pwd
```

Copy pwd output to your [ctp](https://github.com/willdoescode/ctp) config.

```toml
[templates]
cpp = "<pwd output>"

[commands-before]
[commands-after]
cpp = "rm .git"
```

## Building && Testing

```console
$ cmake -S . -B build

$ cmake --build build
```
