// 练习：封装
//
// value_ 是私有的，外面不能直接改。所有修改都走函数，函数负责守住「不能为负」。
// increment 是已经写好的例子。
//
// 目标：
//   1. decrement：值大于 0 时减 1，已经是 0 时保持 0。
//   2. add：n 为负时不修改，并返回 false；否则加上 n 并返回 true。n 为 0 时算成功。
//
// 期望：程序打印「封装正确」。

#include <iostream>

class Counter
{
public:
    int value() const
    {
        return value_;
    }

    void increment()
    {
        ++value_;
    }

    void decrement()
    {
        // TODO: 不允许减成负数。
    }

    bool add([[maybe_unused]] int n)
    {
        // TODO: n < 0 时拒绝。否则加上 n。
        return false;
    }

private:
    int value_ = 0;
};

int main()
{
    Counter counter;
    counter.increment();
    counter.increment();
    counter.decrement();

    const bool rejected = !counter.add(-5);
    const bool accepted = counter.add(10);

    const bool ok = counter.value() == 11 && rejected && accepted;
    if (ok)
    {
        std::cout << "封装正确\n";
    }
    else
    {
        std::cout << "还不符合预期，当前值是 " << counter.value() << "\n";
        std::cout << "完成后应是 11，并且拒绝负数、接受 10。\n";
    }
    return 0;
}
