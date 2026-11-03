// 练习：小计算器
//
// 程序会反复显示菜单，直到你输入 0。
// 选择 1–4 之后，再输入两个整数。
//
// 目标：
//   1. 按选项计算并打印结果：1 加，2 减，3 乘，4 除。
//   2. 除数为 0 时打印「不能除以 0」，程序不要崩溃，菜单要继续。
//   3. 用 switch，每个分支写上 break。
//
// 菜单循环和「输入了字母」时的清理已经写好，先不要删。看懂即可：
// 整数没读成功时，cin 会进入错误状态，必须 clear 并丢掉这一行，否则循环会永远失败。
//
// 示例：
//   选 1，再输入 3 4  ->  结果：7
//   选 4，再输入 8 0  ->  不能除以 0
//   选 0              ->  再见。

#include <iostream>
#include <limits>

int main()
{
    while (true)
    {
        std::cout << "1 加  2 减  3 乘  4 除  0 退出\n";
        std::cout << "请选择：";

        int choice = 0;
        if (!(std::cin >> choice))
        {
            if (std::cin.eof())
            {
                std::cout << "\n再见。\n";
                return 0;
            }
            std::cout << "请输入数字选项。\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 0)
        {
            std::cout << "再见。\n";
            return 0;
        }
        if (choice < 1 || choice > 4)
        {
            std::cout << "没有这个选项。\n";
            continue;
        }

        int a = 0;
        int b = 0;
        std::cout << "请输入两个整数：";
        if (!(std::cin >> a >> b))
        {
            std::cout << "数字读入失败，回到菜单。\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        // TODO: 用 switch (choice) 打印计算结果。除法要处理 b == 0。
        std::cout << "还没实现。选项 " << choice << "，数字是 " << a << " 和 " << b << "\n";
    }
}
