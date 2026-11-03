# 第 11 周：vector 与 string

本周建议用时：6–9 小时。`std::vector` 是长度能变的数组。配合已经学过的 `std::string`，可以开始处理一组文本。

## 本周目标

- 会创建 `std::vector`，会 `push_back`，会用下标和范围 for 遍历。
- 知道 `vector` 为空时不能取 `[0]`，先看 `empty()` 或 `size()`。
- 能把 `vector` 按 `const` 引用传给函数。
- 能写一个按空格拆分英文句子的函数，结果放进 `vector<string>`。

## 先读这些

精读：

- [LearnCpp 16.1–16.5](https://www.learncpp.com/cpp-tutorial/introduction-to-containers-and-arrays/)：容器、`vector`、传参和返回。16.5 提到移动，知道「返回 vector 不必害怕拷贝」即可，细节在第 15 周。
- [LearnCpp 16.8](https://www.learncpp.com/cpp-tutorial/range-based-for-loops-for-each/) 和 [16.10–16.11](https://www.learncpp.com/cpp-tutorial/stdvector-resizing-and-capacity/)：范围 for，长度和容量。
- 《C++ Primer》3.3–3.4，以及 9.2–9.3 里 `vector` 的常用操作。

选读：

- [LearnCpp 16.3](https://www.learncpp.com/cpp-tutorial/stdvector-and-the-unsigned-length-and-subscript-problem/)：无符号下标的老问题，第 4 周见过。

## 概念笔记

```cpp
#include <vector>

std::vector<int> nums;
nums.push_back(3);
nums.push_back(1);
std::cout << nums.size() << "\n";  // 2
std::cout << nums[0] << "\n";      // 3

for (int n : nums)
{
    std::cout << n << "\n";
}
```

`std::array` 的长度写在类型里；`vector` 的长度是运行时的，所以同一个函数可以处理不同长度的数据：

```cpp
double average(const std::vector<int>& nums)
{
    if (nums.empty())
    {
        return 0.0;
    }
    // 求和再除以 size
}
```

容量 `capacity()` 是已经准备好的内存，可以比 `size()` 大。初学阶段先关心 `size()`，知道 push 很多元素时 vector 会自己申请新内存即可。

拆分句子时可以用 `std::istringstream`（头文件 `<sstream>`）。它像 `cin` 一样用 `>>` 读单词，但数据来自一个字符串：

```cpp
#include <sstream>
#include <string>

std::istringstream in{"alpha beta"};
std::string word;
while (in >> word)
{
    // word 依次是 alpha 和 beta
}
```

这是提示，练习里需要你自己把它装进函数。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-vector-basics.cpp](ex01-vector-basics.cpp) | 放入元素、打印、求平均值 | - [ ] |
| [ex02-vector-filter.cpp](ex02-vector-filter.cpp) | 统计、筛选，返回新的 vector | - [ ] |
| [ex03-split-words.cpp](ex03-split-words.cpp) | 按空格把一行英文拆成单词 | - [ ] |

## 自测

1. `vector` 和 `std::array` 最重要的一个差别是什么？
2. 空 vector 上调用 `front()` 或写 `[0]` 有什么问题？
3. 函数只是读取 vector 时，参数为什么写成 `const std::vector<int>&`？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我用 vector 保存的一组数据：
