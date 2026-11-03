# 第 2 周：变量、类型与输入输出

本周建议用时：6–10 小时。程序要能记住数据，也要能从键盘读数据。

## 本周目标

- 会声明并初始化 `int`、`double`、`char`、`bool`、`std::string`。
- 知道未初始化的变量不能读。
- 会用 `std::cin` 读取一个单词和一个整数。
- 分得清 `const` 和后面会见到的 `constexpr`：前者是「不要改」，后者是「编译期就能算出的常量」。
- 整数除法会丢掉小数；除数可能为 0。

## 先读这些

精读：

- [LearnCpp 1.3–1.7](https://www.learncpp.com/cpp-tutorial/introduction-to-objects-and-variables/)：变量、初始化、`cin` / `cout`、未初始化变量。
- [LearnCpp 4.1–4.5、4.8、4.9、4.11](https://www.learncpp.com/cpp-tutorial/introduction-to-fundamental-data-types/)：整数、浮点、布尔、字符。4.6 可以先跳过。
- [LearnCpp 5.1–5.2](https://www.learncpp.com/cpp-tutorial/constant-variables-named-constants/) 和 [5.6](https://www.learncpp.com/cpp-tutorial/constexpr-variables/)：常量和 `constexpr`。
- 《C++ Primer》2.1–2.4 中关于基本类型、`const` 的部分。字符串这一章先浏览 3.2.1，够用来声明 `std::string` 即可，第 5 周再细读。

选读：

- [LearnCpp 1.9–1.10](https://www.learncpp.com/cpp-tutorial/introduction-to-literals-and-operators/)：字面量和表达式。
- [LearnCpp 4.12](https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/)：看到类型对不上时再读。

## 概念笔记

变量是一块有名字的存储。声明时写出类型和名字，并尽量同时给初值：

```cpp
int age = 20;
double height_m = 1.75;
char grade = 'A';
bool is_beginner = true;
std::string language = "C++";
```

注意引号：字符用单引号 `'A'`，字符串用双引号 `"C++"`。

布尔值丢给 `std::cout` 时显示 `1` 或 `0`。先写 `std::cout << std::boolalpha;`，后面的布尔值会显示成 `true` / `false`。

从键盘读一个单词和一个整数：

```cpp
std::string name;
int year = 0;
std::cin >> name >> year;
```

`>>` 遇到空格就停。名字里如果有空格，这个写法会只读到第一个词。带空格的一行文字留到第 5 周用 `std::getline`。

`const int kMonths = 12;` 表示这份值不要再改，改了就编译失败。`constexpr` 更进一步：编译器在编译时就要能算出它。本周会在练习里写一个。

整数相除：`7 / 2` 的结果是 `3`，不是 `3.5`。只要结果需要小数，就让至少一个运算数是 `double`。任何时候都要先想：除数会不会是 0。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-types.cpp](ex01-types.cpp) | 修改基本类型的值，并新增一个变量 | - [ ] |
| [ex02-greeting.cpp](ex02-greeting.cpp) | 从键盘读入名字和年份，组成一句话 | - [ ] |
| [ex03-arithmetic.cpp](ex03-arithmetic.cpp) | 计算和、差、积、商，处理除数为 0 | - [ ] |
| [ex04-constants.cpp](ex04-constants.cpp) | 用 `constexpr` 做一件编译期就算好的事 | - [ ] |

`ex02` 和 `ex03` 运行后会停下来等键盘输入。

## 自测

1. `char` 和 `std::string` 的引号有什么不同？
2. 为什么要在声明时就给初值？
3. `7 / 2` 和 `7.0 / 2` 的结果为什么不一样？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我写错过的一个类型：
