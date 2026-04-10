# CppPractice

C++ practice repo for learning data structures, algorithms, and LeetCode/NeetCode problems.

## Problems

- `helloworld.cpp` - Hello World
- `containsduplicate.cpp` - Contains Duplicate
- `validAnagram.cpp` - Valid Anagram
- `twoSums.cpp` - Two Sum

## Build

Requires CMake 3.20+ and a C++17 compiler.

```bash
# Configure (run once, or when you add new files)
cmake -B build

# Compile
cmake --build build

# Run a program
./build/twoSums
```

Adding a new `.cpp` file in `src/` is automatically picked up by CMake via `file(GLOB)`. Just re-run `cmake -B build` to configure, then `cmake --build build` to compile.

## Symlink compile_commands.json

clangd (used by Neovim for LSP) needs `compile_commands.json` in the project root. After configuring, create a symlink:

```bash
ln -sf build/compile_commands.json compile_commands.json
```

This is a one-time step.

## .gitignore

Only source code and config files are tracked. The `build/` directory and all generated files are ignored.
