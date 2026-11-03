# 第 4 周：数组

本周建议用时：6–9 小时。数组把同一类型的多份数据排在一起，用下标访问。

## 本周目标

- 会使用固定长度的 `std::array`：声明、按下标读写、用循环遍历。
- 知道下标从 0 开始，最后一个下标是「长度减 1」。
- 见过 C 风格数组 `int a[5]`，能读懂，但新代码优先用 `std::array`。
- 能自己写出求和、找最大、线性查找。

## 先读这些

精读：

- [LearnCpp 17.1–17.3](https://www.learncpp.com/cpp-tutorial/introduction-to-stdarray/)：`std::array` 的长度、下标、作为参数传递。
- [LearnCpp 17.7–17.9](https://www.learncpp.com/cpp-tutorial/introduction-to-c-style-arrays/)：C 风格数组。知道它会「退化成指针」即可，细节在第 6 周会接上。接着看 17.8 和 17.9。
- 《C++ Primer》3.5：数组。书里的例子多半是 C 风格数组，对照着看。

选读：

- [LearnCpp 16.6](https://www.learncpp.com/cpp-tutorial/arrays-and-loops/)：数组和循环为什么总是一起出现。那里的容器是 `vector`，写法可以迁移到 `std::array`。`vector` 本身留到第 11 周。

## 概念笔记

`std::array<int, 5>` 表示「5 个 int，长度写在类型里，不能在运行中变长」。

```cpp
#include <array>

std::array<int, 5> nums{10, 20, 30, 40, 50};
std::cout << nums[0] << "\n";       // 10
std::cout << nums.size() << "\n";   // 5
```

`nums[4]` 是最后一个。`nums[5]` 越界，程序行为没有保证，编译器也不一定报错。循环条件写成 `i < nums.size()`，不要写成 `i <= nums.size()`。

`size()` 的类型是 `std::size_t`，一种表示数量的无符号整数。倒序遍历时如果写 `for (std::size_t i = n - 1; i >= 0; --i)`，`i` 减到 0 之后再减会绕成一个很大的数，循环停不下来。倒序可以用：

```cpp
std::size_t i = nums.size();
while (i > 0)
{
    --i;
    std::cout << nums[i] << "\n";
}
```

把数组交给函数时，写成 `const std::array<int, 5>&`，避免拷贝一整份。`const` 表示函数里不修改它，`&` 表示用引用直接看到原来的那份。引用的细节在第 6 周，这里先会用这个写法。

C 风格数组 `int raw[3]{1, 2, 3};` 也能用下标。它没有 `.size()`，长度要自己另记。本周练习以 `std::array` 为主。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-array-basics.cpp](ex01-array-basics.cpp) | 正向打印，再自己写反向打印 | - [ ] |
| [ex02-array-stats.cpp](ex02-array-stats.cpp) | 求和、最大值、最小值 | - [ ] |
| [ex03-linear-search.cpp](ex03-linear-search.cpp) | 线性查找，返回下标或 -1 | - [ ] |

## 自测

1. 长度是 5 的数组，合法下标有哪些？
2. 为什么倒序时 `std::size_t` 的 `i >= 0` 有问题？
3. `std::array` 和 `int a[5]` 各有一个你记得住的差别。

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我越界过的一次（或差点击中的一次）：
