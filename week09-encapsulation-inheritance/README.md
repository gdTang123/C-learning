# 第 9 周：封装与继承

本周建议用时：7–10 小时。把不该被随便改的数据藏起来，再让新类站在已有类的肩膀上。

## 本周目标

- 能把数据放进 `private`，只留小而明确的公有函数。
- 能写派生类，会在派生类构造函数里调用基类构造函数。
- 知道 `protected`：派生类能用，类外面不能用。
- 能说出「是一个」的关系什么时候适合继承。例如狗是动物，矩形是形状。

## 先读这些

精读：

- [LearnCpp 14.5–14.8](https://www.learncpp.com/cpp-tutorial/public-and-private-members-and-access-specifiers/)：公有、私有、访问函数、封装。
- [LearnCpp 24.1–24.7](https://www.learncpp.com/cpp-tutorial/introduction-to-inheritance/)：继承、派生类构造、访问级别、在派生类里增加行为。
- 《C++ Primer》7.2（访问控制与封装）、15.1–15.2（继承基础）。

选读：

- [LearnCpp 24.5](https://www.learncpp.com/cpp-tutorial/inheritance-and-access-specifiers/)：继承时 `public` 访问说明符的含义。本周的继承都写成 `class Dog : public Animal`。

## 概念笔记

封装是一种约定：外面只通过函数接触对象，对象自己保证数据始终说得通。例如计数器不允许变成负数，这个规则放在成员函数里，而不是指望每个调用者都记得。

```cpp
class Counter
{
public:
    int value() const { return value_; }
    void increment() { ++value_; }

private:
    int value_ = 0;
};
```

外面不能写 `counter.value_ = -100`，因为 `value_` 是私有的。

继承表示「派生类是一种基类」：

```cpp
class Animal
{
public:
    explicit Animal(const std::string& name) : name_{name} {}

protected:
    std::string name_;
};

class Dog : public Animal
{
public:
    explicit Dog(const std::string& name) : Animal(name) {}
};
```

派生类构造函数必须先构造基类。把基类构造函数写在初始化列表里。`protected` 的成员对派生类可见，对 `main` 不可见。

本周的函数还不是虚函数。`Dog` 即便写了同名函数，用 `Animal` 类型来调用时也不会自动跑到 `Dog` 的版本。那是第 10 周多态要解决的事。本周用派生类自己的类型来调用新函数。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-encapsulation.cpp](ex01-encapsulation.cpp) | 给计数器补上不会破坏数据的操作 | - [ ] |
| [ex02-inheritance.cpp](ex02-inheritance.cpp) | 让狗继承动物，并增加自己的行为 | - [ ] |
| [ex03-protected.cpp](ex03-protected.cpp) | 在派生类里用基类的 protected 数据算面积 | - [ ] |

## 自测

1. 为什么不把所有成员都设成 `public`？
2. 派生类构造函数的初始化列表里，为什么常常要出现基类的名字？
3. `private` 和 `protected` 对「类外面的 main」来说一样吗？对派生类呢？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 一个适合继承的例子，和一个不适合硬用继承的例子：
