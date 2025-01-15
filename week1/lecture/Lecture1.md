# Course Introduction

# Features of C++

## Why C++?

### Why Learn C++?

### Why Use C++?

## Evolution of C++

1979) Birth of C++: Developed by Bjarne Stroustrup

1985) *The C++ Programming Language* by Stroustrup is published

1998) First standard (C++98) is developed

2003) Minor clarifications to C++98

2011) First major modernization (lambdas, auto, smart pointers)

2020) Next major modernization (concepts, ranges, consteval)

2023) Various standardizations and updates

## C++ vs. Other Languages

### Compiled vs. Interpreted

C++ is a compiled language.

*Compiled* languages get translated to machine code

    * Often means faster execution

    * Ex. C, C++, Rust, Zig, Go

*Interpreted* languages are executed line-by-line

    * Often gives a simpler development experience

    * Ex. Python, JavaScript, Ruby, Perl

### Strongly vs. Weakly Typed

C++ is strongly typed.

*Strongly typed* languages enforce strict type rules

    * Ex. C, C++, Java

*Weakly typed* allow more implicit conversions between types

    * JavaScript, Perl, PHP

### Multi-Paradigm

*Programming Paradigm*: a fundamental approach to programming

    - Principles and patterns for design and organization

    - Ex. object-oriented, functional, procedural

It's not technically correct to call C++ object-oriented.

- C++ is multi-paradigm, giving the programmer more freedom

# Environment Setup

To develop C++, you need a *text editor* and a *compiler*

## Text Editor

A text editor is a tool to edit text, nothing fancy.

* Text Editor vs. IDE:

    - A text editor is a basic tool for writing plain text

    - An IDE includes developer tools (debugger, autocomplete)

* Some popular options:

    - **Visual Studio Code**: Free, open source IDE

    - **CLion**: An IDE built specifically for C++

    - **Vim**: My personal choice, steep learning curve

## Compiler

The compiler converts your C++ code into machine-readable code

* Common C++ compilers:

    - **gcc**: GNU Compiler Collection, good for Windows & Linux

    - **clang**: My personal choice, best for Mac

    - **MSVC**: Increasingly irrelevant piece of garbage.

Thoughout the lecture series I will be using primarily clang.

    - Certain flags may not work for gcc, look up the equivalent

## Hello, World!

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

# Basic Syntax and Structure

# Datatypes and Variables
