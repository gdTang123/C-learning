# 第 14 周：智能指针

本周建议用时：6–9 小时。用 `std::unique_ptr` 和 `std::shared_ptr` 表达「谁拥有这块内存」。目标是以后不再在业务代码里手写 `delete`。

## 本周目标

- 能用 `std::make_unique` 创建独占所有权的对象。
- 知道 `unique_ptr` 不能拷贝，只能移动；函数只是使用它时，用引用传递。
- 能用 `std::shared_ptr` 共享所有权，会看 `use_count()`。
- 能把对象放进 `vector<std::unique_ptr<T>>`，让容器离开作用域时自动析构它们。

## 先读这些

精读：

- [LearnCpp 22.1](https://www.learncpp.com/cpp-tutorial/introduction-to-smart-pointers-move-semantics/)：为什么需要智能指针。移动的定义先看懂大意。
- [LearnCpp 22.5–22.6](https://www.learncpp.com/cpp-tutorial/stdunique_ptr/)：`unique_ptr` 和 `shared_ptr`。
- 《C++ Primer》12.1：智能指针。

选读：

- [LearnCpp 22.7](https://www.learncpp.com/cpp-tutorial/circular-dependency-issues-with-stdshared_ptr-and-stdweak_ptr/)：两个 `shared_ptr` 互相指着会泄掉。知道有 `weak_ptr` 即可，本周练习不写环。

## 概念笔记

`unique_ptr` 独占一个对象。指针本身离开作用域时，对象被销毁。

```cpp
#include <memory>

std::unique_ptr<int> value = std::make_unique<int>(7);
std::cout << *value << "\n";
```

不要写成 `std::unique_ptr<int> value{new int{7}};`，优先用 `make_unique`，创建和包装在同一步完成。

它不能拷贝：

```cpp
std::unique_ptr<int> other = value;          // 编译失败
std::unique_ptr<int> other = std::move(value); // 所有权转给 other，value 变成空
```

`std::move` 下一周还会再练。本周只要知道：转移所有权时用它，转移之后不要再使用原来的指针。

函数如果只是查看或使用对象，把参数写成 `const std::unique_ptr<T>&` 或直接写成 `const T&`。后者更简单：调用时传 `*ptr`。练习里两种都会碰到。

`shared_ptr` 用引用计数。最后一个持有者消失时，对象才被销毁。`use_count()` 用来观察，不要用它写业务判断。

优先选择 `unique_ptr`。只有「确实有多处都要延长同一对象的寿命」时才用 `shared_ptr`。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-unique-ptr.cpp](ex01-unique-ptr.cpp) | 创建 unique_ptr，并安全地读取 | - [ ] |
| [ex02-shared-ptr.cpp](ex02-shared-ptr.cpp) | 观察共享，再主动放弃一份所有权 | - [ ] |
| [ex03-owning-vector.cpp](ex03-owning-vector.cpp) | 用 vector 保管一组 unique_ptr | - [ ] |

## 自测

1. `unique_ptr` 离开作用域时发生了什么？
2. 什么情况下你会拒绝使用 `shared_ptr`？
3. 把 `unique_ptr` 放进函数参数时，按值传和按引用传有什么不同？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 对比第 6 周的 `delete`，智能指针少让你记的一件事：
