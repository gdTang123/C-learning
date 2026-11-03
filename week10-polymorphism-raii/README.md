# 第 10 周：多态与 RAII

本周建议用时：8–10 小时。这是面向对象这几周里最值得放慢的一周。多态让「用基类操作」仍能跑到派生类的函数。RAII 让资源的获取和释放绑在对象的生命周期上。

## 本周目标

- 能说明虚函数解决了什么：通过基类引用或指针调用时，执行对象真实类型的版本。
- 会写 `virtual`、`override`，以及纯虚函数构成的抽象类。
- 知道多态调用要用引用或指针。按值传递基类会把派生类切掉，这叫对象切片。
- 能写出一个小型 RAII 类型：构造函数拿到资源，析构函数释放，并禁止拷贝。

## 先读这些

精读：

- [LearnCpp 25.1–25.4](https://www.learncpp.com/cpp-tutorial/pointers-and-references-to-the-base-class-of-derived-objects/)：基类指针、虚函数、`override`、虚析构。
- [LearnCpp 25.7](https://www.learncpp.com/cpp-tutorial/pure-virtual-functions-abstract-base-classes-and-interface-classes/)：纯虚函数和抽象类。
- [LearnCpp 19.3](https://www.learncpp.com/cpp-tutorial/destructors/)：析构与资源。结合本周的 RAII 练习一起看。
- 《C++ Primer》15.3（虚函数），12.1.2 前后关于动态内存和类管理资源的讨论可以选读。

选读：

- [LearnCpp 25.9](https://www.learncpp.com/cpp-tutorial/object-slicing/)：对象切片。

## 概念笔记

没有 `virtual` 时，调用哪一个函数由变量的静态类型决定。加上 `virtual` 之后，通过基类引用或指针调用，会找到对象真正的版本：

```cpp
class Animal
{
public:
    virtual ~Animal() = default;
    virtual void speak() const { std::cout << "...\n"; }
};

class Cat : public Animal
{
public:
    void speak() const override { std::cout << "喵\n"; }
};

void chorus(const Animal& animal)
{
    animal.speak();
}
```

基类析构函数写成 `virtual`。以后如果有人 `delete` 一个指向派生类的基类指针，会先调用派生类析构函数。本周练习用的是栈上的对象和引用，没有这样 `delete`，但习惯现在就要养成。

纯虚函数写成 `virtual double area() const = 0;`。含有纯虚函数的类是抽象类，不能创建对象。派生类必须实现它，才能被创建。

RAII 是 “Resource Acquisition Is Initialization” 的缩写：获得资源发生在初始化，释放资源发生在析构。离开作用域时析构一定会被调用，所以释放不容易被忘掉。第 6 周的 `new[]` / `delete[]` 可以收进这样的类里。

自己写了析构函数去 `delete[]` 之后，默认的拷贝会让两个对象持有同一块内存，两次释放就坏了。本周先把拷贝构造和拷贝赋值删掉。第 14 周的智能指针会把这件事变得更普通。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-virtual.cpp](ex01-virtual.cpp) | 用虚函数让猫和狗各自叫 | - [ ] |
| [ex02-abstract.cpp](ex02-abstract.cpp) | 实现抽象形状的圆面积 | - [ ] |
| [ex03-raii.cpp](ex03-raii.cpp) | 完成一个会自己释放内存的缓冲区 | - [ ] |

## 自测

1. `chorus` 的参数如果改成按值传递 `Animal`，会发生什么？
2. 抽象类为什么不能 `Shape s;`？
3. RAII 类里为什么常常要禁止拷贝？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 用自己的话解释一遍 RAII：
