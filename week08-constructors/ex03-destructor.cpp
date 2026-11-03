// 练习：析构函数
//
// Tracer 在诞生和结束时各打印一行。析构函数不用你手动调用。
//
// 目标：
//   1. 先运行，看清单个对象的输出。
//   2. 在 main 里再加一个内层块 { }，块里依次创建 Tracer "第二" 和 Tracer "第三"。
//      块结束后它们应立刻析构，然后才轮到 main 里的「第一」。
//   3. 完成 rename，并确认析构时打印的是改过的名字。
//
// 期望输出的顺序：
//   构造 第一
//   构造 第二
//   构造 第三
//   析构 第三
//   析构 改名后的第二
//   析构 第一
//
// 「第二」要在内层块结束前改名。名字由你决定，但要能从输出里看出来发生过改名。

#include <iostream>
#include <string>

class Tracer
{
public:
    explicit Tracer(const std::string& name)
        : name_{name}
    {
        std::cout << "构造 " << name_ << "\n";
    }

    ~Tracer()
    {
        std::cout << "析构 " << name_ << "\n";
    }

    void rename([[maybe_unused]] const std::string& name)
    {
        // TODO: 把 name_ 改成新名字。
    }

private:
    std::string name_;
};

int main()
{
    Tracer first{"第一"};

    // TODO: 加一个内层块，创建「第二」和「第三」，并给「第二」改名。
    return 0;
}
