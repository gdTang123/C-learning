# 第 8 周：构造函数与析构函数

本周建议用时：6–9 小时。对象被创建时走构造函数，生命周期结束时走析构函数。用这两处把「开始」和「结束」说清楚。

## 本周目标

- 能写出带参数的构造函数，让对象一创建就持有合理数据。
- 会使用成员初始化列表，而不是先默认构造再赋值。
- 知道析构函数在对象离开作用域时自动调用，不需要你手动点名。
- 观察创建多个对象时，析构顺序与构造顺序相反。

## 先读这些

精读：

- [LearnCpp 14.9–14.12](https://www.learncpp.com/cpp-tutorial/introduction-to-constructors/)：构造函数、初始化列表、默认构造函数。
- [LearnCpp 15.4](https://www.learncpp.com/cpp-tutorial/introduction-to-destructors/)：析构函数。
- 《C++ Primer》7.1.4（构造函数）、7.5.1（构造函数初始化列表）。析构函数可看 7.1.5 或第 13 章开头对析构的定义。

选读：

- [LearnCpp 14.11](https://www.learncpp.com/cpp-tutorial/default-constructors-and-default-arguments/)：什么时候编译器会给你一个默认构造函数，什么时候不会。

## 概念笔记

没有自己写构造函数时，编译器提供一个默认构造函数，成员按它们的默认初值来。一旦你写了任何一个构造函数，编译器就不再自动提供那个无参版本。还需要无参构造时，写 `Book() = default;`，或者自己定义一个。

成员初始化列表写在构造函数体之前，这是成员真正获得初值的地方：

```cpp
class Book
{
public:
    Book(const std::string& title, int pages)
        : title_{title}
        , pages_{pages}
    {
    }

private:
    std::string title_;
    int pages_;
};
```

在函数体里再 `title_ = title;` 也常常能工作，但那是「先默认初始化，再赋值」。对稍后会管理资源的类型，初始化列表更直接。本周练习要求你改成初始化列表。

析构函数的名字是 `~类名()`，没有参数，没有返回类型。对象离开作用域、或被 `delete` 时，它自动执行。适合做「收尾」。如果对象里只有 `string` 和 `int` 这种会自己收尾的成员，析构函数可以是空的，用来观察调用时机就够了。

同一块作用域里，先构造的后析构。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-constructors.cpp](ex01-constructors.cpp) | 写出能拒绝非法页数的构造函数 | - [ ] |
| [ex02-initializer-list.cpp](ex02-initializer-list.cpp) | 把赋值改成成员初始化列表 | - [ ] |
| [ex03-destructor.cpp](ex03-destructor.cpp) | 用析构函数观察对象的结束顺序 | - [ ] |

## 自测

1. 你写了一个带参数的构造函数之后，`Book b;` 为什么可能编不过？
2. 初始化列表和函数体里的赋值，差在哪一步？
3. 两个局部对象，哪个先析构？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我观察到的一次构造/析构输出：
