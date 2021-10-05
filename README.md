# Bubbles: A simple and expandable C++ project template with [Googletest](https://github.com/google/googletest) and [Boost](https://www.boost.org/) included.

## Initializing Project

```bash
python3 initproject.py "project_name"
```

## Building && Testing

```bash
cmake -S . -B build

cmake --build build

./build/bubbles_test && ./build/bubbles
```
