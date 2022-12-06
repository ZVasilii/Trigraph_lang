# Trigraph  Language
## LLVM-based frontend for my own trigraph language
Trigraphs are depricated in C++20 and will be removed in C++23, so i decided to make my own programming language in honour of them.
With a little bit of SFML graphics.

## To build:
```
mkdir build
cd build
cmake ..
make
```

## Usage
```
<in build directory>
./trigraph_lang *your_source_file.trigr*  > src.ll
clang++ src.ll ../graphics/graphics.cc -lsfml-graphics -lsfml-window -lsfml-system -o a.out
./a.out
rm -r src.ll
```

## Grammatic
Can be seen in [this file](./grammatic.txt)

## Examples
Can be seen in [this folder](./examples)
- Game of life (with aw$eome graphics)
- Fibonacci numbers
- Numeric progression

