# 第 13 周：迭代器与算法

本周建议用时：6–9 小时。迭代器是容器和算法之间的接口。学会它，就不用为每种容器各写一遍排序和查找。

## 本周目标

- 能用迭代器遍历 `vector`：`begin`、`end`、`*`、`++`。
- 知道 `end()` 指向「最后一个元素的下一个位置」，不能对它解引用。
- 会用 `std::sort`、`std::find`、`std::count`、`std::count_if`。
- 会把一个普通函数交给 `count_if` 当判断条件。

## 先读这些

精读：

- [LearnCpp 18.2–18.3](https://www.learncpp.com/cpp-tutorial/introduction-to-iterators/)：迭代器和标准库算法。这一章还在建设中，读得懂示例即可。
- 《C++ Primer》3.4（迭代器入门）、10.1–10.3（算法、谓词）。

选读：

- [LearnCpp 18.1](https://www.learncpp.com/cpp-tutorial/sorting-an-array-using-selection-sort/)：想知道排序大概在做什么时再看。练习直接用 `std::sort`。
- 《C++ Primer》10.3.1：只接受一元谓词的算法。lambda 留到第 15 周，本周用普通函数。

## 概念笔记

迭代器表现得像指针：

```cpp
std::vector<int> nums{1, 2, 3};
for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
{
    std::cout << *it << "\n";
}
```

只读时用 `const_iterator`，或者让 `nums` 是 `const`，`begin()` 就会返回只读迭代器。反向遍历用 `rbegin()` 和 `rend()`。

算法在 `<algorithm>` 里，它们接收「一段范围」，通常是两个迭代器：

```cpp
#include <algorithm>

std::sort(nums.begin(), nums.end());
const std::vector<int>::iterator found = std::find(nums.begin(), nums.end(), 3);
if (found != nums.end())
{
    std::cout << *found << "\n";
}
```

`std::count_if` 还需要一个判断函数。函数名可以传进去，表示「请用这个函数」：

```cpp
bool is_positive(int n)
{
    return n > 0;
}

const int count = std::count_if(nums.begin(), nums.end(), is_positive);
```

`std::distance(nums.begin(), found)` 能把迭代器换算成下标，头文件是 `<iterator>`。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-iterators.cpp](ex01-iterators.cpp) | 用正向和反向迭代器打印 | - [ ] |
| [ex02-algorithms.cpp](ex02-algorithms.cpp) | 排序、查找、计数 | - [ ] |
| [ex03-count-if.cpp](ex03-count-if.cpp) | 用自己的函数作为 count_if 的条件 | - [ ] |

## 自测

1. 为什么循环条件是 `it != end()`，而不是 `it <= end()`？
2. `find` 没找到时返回什么？
3. `count` 和 `count_if` 的差别是什么？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我用过的一个算法的名字，以及它要的两个迭代器表示什么：
