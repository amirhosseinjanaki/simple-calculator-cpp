# 🧮 Simple Calculator — C++

A console-based calculator built in C++ that performs basic arithmetic operations with input validation and division-order selection.

## Features

- Addition, Subtraction, Multiplication
- Division with zero-division protection
- Modulo with zero-division protection
- For division and modulo: user chooses operand order (`num1 ÷ num2` or `num2 ÷ num1`)
- Invalid operator detection

## How to Run

### Requirements
- A C++ compiler (g++, MSVC, or Clang)

### Compile & Run

```bash
g++ -o calculator main.cpp
./calculator
```

### Example

```
Enter the first number: 10
Enter the operator (+, -, *, /, %): /
Enter the second number: 3
Do you want to calculate (1) num1 / num2 or (2) num2 / num1? Enter 1 or 2: 1
Result: 10 / 3 = 3
```

## Project Structure

```
📁 simple-calculator-cpp/
├── main.cpp       # Main source file
└── README.md      # Project documentation
```

## What I Learned

- Conditional logic with `if/else if` chains in C++
- User input handling with `cin`
- Division-by-zero error handling
- Designing interactive console programs

## Author

**Amir** — Electrical Engineering Student, Jundishapur University  
📅 June 2026 | First C++ project uploaded to GitHub

---

> *This is my first public C++ project. More projects coming as I progress through my EE coursework.*

