# 第 12 周：map

本周建议用时：6–9 小时。`std::map` 按键查找值。键在容器里是排好序的。

## 本周目标

- 会声明 `std::map<键, 值>`，会插入、遍历、查找。
- 知道 `operator[]` 在键不存在时会插入一个默认值，查找时要用 `find`。
- 能用 map 做单词计数和「名字 → 分数」这种表。

## 先读这些

精读：

- 《C++ Primer》11.1–11.3：关联容器、`pair`、`map` 的插入和访问。
- [cppreference：std::map](https://en.cppreference.com/w/cpp/container/map)：重点看 `operator[]`、`find`、`insert` 附近的示例。

选读：

- 《C++ Primer》11.3.4–11.3.5：单词计数是这几节的经典例子，和本周第二个练习是同一类问题。

LearnCpp 没有单独的 `map` 章节，这一周以 Primer 和练习为主。

## 概念笔记

```cpp
#include <map>
#include <string>

std::map<std::string, int> scores;
scores.insert({"Ada", 90});

const std::map<std::string, int>::iterator found = scores.find("Ada");
if (found == scores.end())
{
    std::cout << "没有这个人\n";
}
else
{
    std::cout << found->second << "\n";
}
```

`scores["Ada"]` 读起来很方便，但键不存在时它会**插入** 0。只想查询、不希望改容器时，用 `find`。`find` 返回迭代器，等于 `end()` 就是没找到。迭代器指向的 `pair` 里，`first` 是键，`second` 是值。下一周会把迭代器讲得更完整，本周先会用 `find` 的这个结果。

遍历时 map 按键排序，不是按插入顺序：

```cpp
for (const std::pair<const std::string, int>& item : scores)
{
    std::cout << item.first << " " << item.second << "\n";
}
```

这个类型写起来很长。第 15 周的 `auto` 可以把它收成 `const auto& item`。本周先把类型写全，知道自己在遍历什么。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-map-basics.cpp](ex01-map-basics.cpp) | 建立分数表，并安全地查询 | - [ ] |
| [ex02-word-count.cpp](ex02-word-count.cpp) | 统计每个单词出现的次数 | - [ ] |
| [ex03-top-score.cpp](ex03-top-score.cpp) | 找出最高分的名字 | - [ ] |

## 自测

1. `m["缺席的键"]` 和 `m.find("缺席的键")` 的差别是什么？
2. 遍历 `map<string, int>` 时，元素的类型里为什么键是 `const`？
3. 两个单词计数，键应该是什么，值应该是什么？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 一个我想用 map 保存的对照表：
