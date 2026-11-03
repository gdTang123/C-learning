// 练习：引用
//
// 前半段演示：引用是已有变量的另一个名字。
//
// 目标：
//   1. 完成 double_in_place，让参数变成原来的两倍。调用者的变量要跟着变。
//   2. 完成 larger：返回两个数里较大的那个的引用，调用者可以通过返回值修改原来的变量。
//      两个数相等时返回哪一个都可以。
//      不要返回函数内部局部变量的引用。
//
// 期望：程序打印「引用练习正确」。

#include <iostream>

void double_in_place([[maybe_unused]] int& n)
{
    // TODO: 把 n 变成两倍。
}

int& larger(int& a, int& b)
{
    // TODO: 返回较大的那个引用。下面这行是占位，相等时碰巧可用，不相等时是错的。
    (void)b;
    return a;
}

int main()
{
    int value = 3;
    int& alias = value;
    alias = 4;
    std::cout << "别名修改后 value = " << value << "\n";

    double_in_place(value);

    int x = 3;
    int y = 9;
    larger(x, y) = 0;

    const bool ok = value == 8 && y == 0 && x == 3;
    if (ok)
    {
        std::cout << "引用练习正确\n";
    }
    else
    {
        std::cout << "还不符合预期：value=" << value << " x=" << x << " y=" << y << "\n";
        std::cout << "完成后应是 value=8 x=3 y=0\n";
    }
    return 0;
}
