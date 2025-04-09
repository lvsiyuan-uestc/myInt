# myInt

An implementation of a custom `Int` type in C++ with operator overloading. This custom class provides arithmetic operations, comparison operators, and stream input/output capabilities.

## Features
- Arithmetic Operations: `+`, `-`, `*`, `/`, `%`
- Unary Negation: `-`
- Increment/Decrement Operators: `++`, `--` (both prefix and postfix)
- Comparison Operators: `==`, `!=`, `<`, `<=`, `>`, `>=`
- Stream Operators: `<<` (output), `>>` (input)

## Usage
```cpp
#include "Int.cc"

int main() {
    Int a = 1, b = 2;
    std::cout << a + b << std::endl;  // 3
    std::cout << a - b << std::endl;  // -1
    std::cout << a * b << std::endl;  // 2
    std::cout << a / b << std::endl;  // 0
    std::cout << a++ << std::endl;    // 1
    std::cout << ++a << std::endl;    // 3
    return 0;
}
```

## Requirements
- A C++ compiler supporting the C++11 standard or later.

---

# myInt (中文)

一个使用 C++ 实现的自定义 `Int` 类型，支持运算符重载。该类提供了算术运算、比较操作符以及流输入/输出功能。

## 功能
- 算术运算：`+`、`-`、`*`、`/`、`%`
- 一元取负：`-`
- 自增/自减操作符：`++`、`--`（前缀与后缀）
- 比较操作符：`==`、`!=`、`<`、`<=`、`>`、`>=`
- 流操作符：`<<`（输出）、`>>`（输入）

## 使用示例
```cpp
#include "Int.cc"

int main() {
    Int a = 1, b = 2;
    std::cout << a + b << std::endl;  // 3
    std::cout << a - b << std::endl;  // -1
    std::cout << a * b << std::endl;  // 2
    std::cout << a / b << std::endl;  // 0
    std::cout << a++ << std::endl;    // 1
    std::cout << ++a << std::endl;    // 3
    return 0;
}
```

## 环境要求
- 支持 C++11 或更高版本的 C++ 编译器。

