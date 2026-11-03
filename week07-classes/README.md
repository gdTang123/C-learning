# 第 7 周：类与对象

本周建议用时：6–9 小时。把相关的数据收进一个类型，再给这个类型配上它自己的动作。

## 本周目标

- 能定义一个 `class`，创建它的对象，用 `.` 访问成员。
- 能写成员函数，并在成员函数里使用当前对象的数据。
- 知道同一个类可以有很多对象，它们的数据互不相干。
- 会给成员一个默认初值，避免读到没赋值的 `int`。

## 先读这些

精读：

- [LearnCpp 13.7–13.10](https://www.learncpp.com/cpp-tutorial/introduction-to-structs-members-and-member-selection/)：先用结构体理解「用户定义类型」。
- [LearnCpp 14.1–14.4](https://www.learncpp.com/cpp-tutorial/introduction-to-object-oriented-programming/)：类、成员函数、`const` 对象。
- 《C++ Primer》7.1 开头，到成员函数为止。访问控制下一周再作为重点。

选读：

- [LearnCpp 13.1](https://www.learncpp.com/cpp-tutorial/introduction-to-program-defined-user-defined-types/)：为什么要自己定义类型。

## 概念笔记

一个学生可以只有散落的变量，也可以是一个对象：

```cpp
class Student
{
public:
    std::string name;
    int age = 0;

    void introduce() const
    {
        std::cout << "我是" << name << "\n";
    }
};

Student a;
a.name = "Ada";
a.age = 20;
a.introduce();
```

`public` 表示外面可以访问。第 9 周会把数据改成 `private`。本周先把「数据和函数放在一起」写顺。

成员函数后面的 `const` 表示：这个函数不修改对象的成员。只是打印、查询时加上它。需要修改成员的函数不要加。

每个对象有自己的一份成员。改 `a.age` 不会影响 `b.age`。

本周创建对象的方式是先默认构造，再给成员赋值。下一周专门练习构造函数，让对象一出生就带好数据。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-first-class.cpp](ex01-first-class.cpp) | 定义书这个类型，并创建几本书 | - [ ] |
| [ex02-member-functions.cpp](ex02-member-functions.cpp) | 给矩形加上面积和介绍 | - [ ] |
| [ex03-many-objects.cpp](ex03-many-objects.cpp) | 用同一个类创建多个对象并逐个打印 | - [ ] |

## 自测

1. 类和对象是什么关系？用「图纸」和「实物」打个比方。
2. 成员函数末尾的 `const` 限制了什么？
3. 两个 `Student` 对象的 `name` 会不会共用同一块字符串？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我想写成类的一件日常事物：
