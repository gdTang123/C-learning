// 练习：继承
//
// Dog 是一种 Animal。名字存在基类的 protected 成员里，派生类可以直接用 name_。
//
// 目标：
//   1. 给 Dog 写 fetch()，打印「<名字> 把球捡回来了」。
//   2. 再写一个 class Cat，同样继承 Animal。给它一个 climb()，打印「<名字> 爬上了柜子」。
//   3. 在 main 里创建一只猫并调用 climb。
//
// 本周不要把 speak 改成虚函数，下一周再处理「用基类调用派生类行为」。
//
// 期望输出：
//   豆豆 发出声音
//   豆豆 把球捡回来了
//   （你的猫的那一行）

#include <iostream>
#include <string>

class Animal
{
public:
    explicit Animal(const std::string& name)
        : name_{name}
    {
    }

    void speak() const
    {
        std::cout << name_ << " 发出声音\n";
    }

protected:
    std::string name_;
};

class Dog : public Animal
{
public:
    explicit Dog(const std::string& name)
        : Animal(name)
    {
    }

    void fetch() const
    {
        // TODO: 打印捡球。可以使用 name_。
        std::cout << "fetch 还没完成\n";
    }
};

int main()
{
    Dog dog{"豆豆"};
    dog.speak();
    dog.fetch();

    // TODO: 创建一只 Cat 并调用 climb。
    return 0;
}
