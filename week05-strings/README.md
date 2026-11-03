# 第 5 周：字符串

本周建议用时：6–9 小时。文本在程序里用 `std::string` 表示。本周只处理英文和数字，先不要用中文做「逐个字符反转」。

## 本周目标

- 会创建 `std::string`，知道 `.size()`、`.empty()`、下标和 `+` 拼接。
- 会用 `std::getline` 读入一整行（可以包含空格）。
- 能遍历每个 `char`，做统计或判断。
- 知道 `std::string` 的下标单位是字节。UTF-8 的一个汉字占多个字节，所以本周的回文练习只用 ASCII。

## 先读这些

精读：

- [LearnCpp 5.7](https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring/)：`std::string`。
- 《C++ Primer》3.2：`string` 的定义、读写、`getline`、比较和相加。

选读：

- [LearnCpp 5.8](https://www.learncpp.com/cpp-tutorial/introduction-to-stdstring_view/)：知道有 `std::string_view` 这种「只看不拥有」的类型即可，练习仍然用 `std::string`。
- 《C++ Primer》3.2.3：处理字符串中的字符。

## 概念笔记

```cpp
#include <string>

std::string word = "C++";
std::cout << word.size() << "\n";  // 3
std::cout << word[0] << "\n";      // C
std::string sentence = word + " 学习";
```

空字符串的长度是 0。对空字符串取 `[0]` 是越界，先用 `empty()` 判断。

读取一整行：

```cpp
#include <iostream>
#include <string>

std::string line;
std::getline(std::cin, line);
```

如果前面刚用过 `std::cin >>`，行末的换行可能还留在输入流里，紧接着的 `getline` 会读到一个空行。本周练习把 `getline` 用在程序里的第一次读取上，避开这个问题。

比较两份字符串是否相等，用 `==`，不要用逐个下标自己写，除非练习明确要求你遍历。

回文是指正着读和倒着读相同，例如 `"abba"`。比较时用两个下标往中间走，或者和「反转后的副本」比较。反转副本可以自己写循环，先不要查标准库算法，第 13 周再集中用算法。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-string-basics.cpp](ex01-string-basics.cpp) | 读入一行，报告长度和首尾字符 | - [ ] |
| [ex02-count-chars.cpp](ex02-count-chars.cpp) | 统计空格和某个字符出现的次数 | - [ ] |
| [ex03-palindrome.cpp](ex03-palindrome.cpp) | 判断 ASCII 字符串是不是回文 | - [ ] |

`ex01` 会等待你输入一行文字。

## 自测

1. `"ab"` 的 `size()` 是多少？下标 1 是哪个字符？
2. `std::cin >>` 和 `std::getline` 遇到空格时有什么不同？
3. 为什么本周不用汉字做逐字符回文？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 一个我用字符串解决的小问题：
