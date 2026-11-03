# 第 15 周：auto、lambda 与移动语义

本周建议用时：6–9 小时。这三件工具让前面写过的代码变短，也解释了 `vector` 返回、`unique_ptr` 转移时到底发生了什么。点到为止，不追求把所有规则背完。

## 本周目标

- 会用 `auto` 让编译器推断局部变量的类型，尤其是迭代器。
- 会写简单的 lambda，会在 lambda 里捕获一个局部变量。
- 能说出左值和右值的直觉：左值是有名字、能再找到的对象；右值常常是临时的。
- 见过 `std::move`：它本身不移动，只是允许调用移动操作。被移走的对象还活着，但不要再依赖它原来的内容。

## 先读这些

精读：

- [LearnCpp 10.8](https://www.learncpp.com/cpp-tutorial/type-deduction-for-objects-using-the-auto-keyword/)：`auto`。
- [LearnCpp 20.6–20.7](https://www.learncpp.com/cpp-tutorial/introduction-to-lambdas-anonymous-functions/)：lambda 和捕获。
- [LearnCpp 22.2–22.4](https://www.learncpp.com/cpp-tutorial/rvalue-references/)：右值引用、移动构造、`std::move`。22.3 的规则看懂「资源被转交」即可。
- 《C++ Primer》2.5.2（`auto`）、10.3.2（lambda）。移动语义看 13.6 的前几页。

选读：

- [LearnCpp 16.5](https://www.learncpp.com/cpp-tutorial/returning-stdvector-and-an-introduction-to-move-semantics/)：从返回 `vector` 理解为什么按值返回容器是合理的。

## 概念笔记

`auto` 用在局部变量上，类型仍然是编译期确定的，只是不必手写：

```cpp
std::vector<int> nums{1, 2, 3};
for (auto it = nums.begin(); it != nums.end(); ++it)
{
    std::cout << *it << "\n";
}
```

拿不准类型时先把类型写全，确认后再换成 `auto`。不要在还没理解类型时一律 `auto`。

lambda 是就地写的小函数：

```cpp
auto is_even = [](int n) { return n % 2 == 0; };
int threshold = 3;
auto above = [threshold](int n) { return n > threshold; };
```

方括号是捕获列表。空的 `[]` 不捕获外面的变量。`[threshold]` 按值复制一份。需要修改外面的变量时再查 `[&]`，本周练习按值捕获就够了。

移动：

```cpp
std::string source = "hello";
std::string dest = std::move(source);
```

`dest` 得到原来的内容。`source` 处于有效但未指定的状态：可以安全地销毁，也可以重新赋值，不要再把它当成 `"hello"`。`std::move` 只是一个转换，真正搬走数据的是 `string` 的移动构造函数。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-auto.cpp](ex01-auto.cpp) | 用 auto 简化迭代器和局部变量 | - [ ] |
| [ex02-lambda.cpp](ex02-lambda.cpp) | 用 lambda 做统计，并捕获阈值 | - [ ] |
| [ex03-move.cpp](ex03-move.cpp) | 观察 move，并按值接收一个 vector | - [ ] |

## 自测

1. `auto` 是运行时才决定类型吗？
2. lambda 的 `[]` 和 `[threshold]` 差在哪里？
3. 对一个对象使用 `std::move` 之后，调用者还可以做什么、不可以做什么？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 一个我会改用 lambda 的旧练习：
