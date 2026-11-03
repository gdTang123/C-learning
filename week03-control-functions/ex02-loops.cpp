// 练习：循环
//
// 这个程序不需要键盘输入。
//
// 目标：
//   1. 用 for 循环把 1 到 10 打印在同一行，数字之间用空格，最后换行。
//   2. 把下面的累加补完整：sum 应该变成 1 + 2 + ... + 100。
//   3. 用一个 while 循环，打印你的名字 3 次，每次一行。名字写在一个 std::string 里。
//
// 期望（名字换成你自己的也可以）：
//   1 2 3 4 5 6 7 8 9 10
//   1 到 100 的和：5050
//   Ada
//   Ada
//   Ada

#include <iostream>
#include <string>

int main()
{
    // TODO: 打印 1 到 10。

    int sum = 0;
    // TODO: 这个循环只加了一次。把上界改对，让它累加到 100。
    for (int i = 1; i <= 1; ++i)
    {
        sum += i;
    }
    std::cout << "1 到 100 的和：" << sum << "（完成后应该是 5050）\n";

    // TODO: 用 while 把名字打印 3 次。
    const std::string name = "TODO";
    std::cout << "名字变量现在是：" << name << "\n";
    return 0;
}
