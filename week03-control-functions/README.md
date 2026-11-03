# 第 3 周：条件、循环与函数

本周建议用时：6–10 小时。让程序会做决定、会重复，并且能把一段逻辑收进函数里反复用。

## 本周目标

- 会写 `if` / `else if` / `else`，条件表达式的结果是 `bool`。
- 会写 `for` 和 `while`，知道循环什么时候停。
- 会写有返回值的函数，会给函数传参。
- 知道 `switch` 的每个分支末尾通常要 `break`。
- 输入失败时要处理，避免死循环。

## 先读这些

精读：

- [LearnCpp 4.10](https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/) 和 [第 8 章 8.1–8.11](https://www.learncpp.com/cpp-tutorial/control-flow-introduction/)：条件、`switch`、循环、`break` / `continue`。
- [LearnCpp 2.1–2.6](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)：函数、返回值、参数、局部作用域。2.8 以后的多文件内容留到第 16 周。
- 《C++ Primer》5.1–5.4（语句）、6.1–6.3（函数基础）。

选读：

- [LearnCpp 8.5–8.6](https://www.learncpp.com/cpp-tutorial/switch-statement-basics/)：做计算器练习前看一遍 `switch`。
- [LearnCpp 9.5](https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/)：输入不是数字时怎么处理。计算器练习里已经放了一份可用的写法。

## 概念笔记

`if` 只在条件为真时进入大括号：

```cpp
if (score >= 60)
{
    std::cout << "及格\n";
}
else
{
    std::cout << "不及格\n";
}
```

比较运算符有 `==`、`!=`、`<`、`>`、`<=`、`>=`。一个等号 `=` 是赋值，不是比较。

`for` 适合「次数清楚」的重复。`while` 适合「做到某个条件为止」：

```cpp
int sum = 0;
for (int i = 1; i <= 100; ++i)
{
    sum += i;
}
```

函数把一段有名字的逻辑装起来。参数是传进去的材料，返回值是送出来的结果。`void` 函数只做事，不送结果。

```cpp
int max_of(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
```

函数里的变量出了函数就不存在了，这叫局部作用域。第 6 周会再展开。

本周练习里如果参数暂时没用到，签名上会写 `[[maybe_unused]]`，这样编译器不会为「未使用的参数」发出警告。你写完函数体、真正用到参数之后，把这个标记删掉。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-conditions.cpp](ex01-conditions.cpp) | 按分数分段，并拒绝不合法分数 | - [ ] |
| [ex02-loops.cpp](ex02-loops.cpp) | 用循环打印数列、求累加和 | - [ ] |
| [ex03-functions.cpp](ex03-functions.cpp) | 完成三个小函数 | - [ ] |
| [ex04-calculator.cpp](ex04-calculator.cpp) | 做一个能反复运算的小计算器 | - [ ] |

`ex01` 和 `ex04` 会等待键盘输入。

## 自测

1. `if (n = 0)` 和 `if (n == 0)` 有什么区别？
2. 循环不停下来，首先检查哪一部分？
3. 为什么 `max_of` 这样的函数比把同一段 `if` 复制三遍更好？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我曾经写错过的一个循环条件：
