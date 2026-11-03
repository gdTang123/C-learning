// 练习：虚函数
//
// chorus 只认识 Animal，但传入的对象会叫出自己的声音。这依赖 virtual。
//
// 目标：
//   1. 把 Cat::speak 改成打印「喵」。
//   2. 写一个 class Dog，继承 Animal，speak 打印「汪」。记得 override。
//   3. 在 main 里创建 Dog，并把它交给 chorus。
//
// 不要把 chorus 的参数改成某个具体的派生类。
//
// 期望输出：
//   喵
//   汪

#include <iostream>

class Animal
{
public:
    virtual ~Animal() = default;

    virtual void speak() const
    {
        std::cout << "……\n";
    }
};

class Cat : public Animal
{
public:
    void speak() const override
    {
        // TODO: 打印「喵」。
        std::cout << "Cat::speak 待完成\n";
    }
};

void chorus(const Animal& animal)
{
    animal.speak();
}

int main()
{
    const Cat cat;
    chorus(cat);

    // TODO: 创建 Dog，调用 chorus。
    return 0;
}
