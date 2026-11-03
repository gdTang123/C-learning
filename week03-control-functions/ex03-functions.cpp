// 练习：函数
//
// 三个函数现在都能编译，但结果是错的。请改函数体，不要改 main 里的检查。
// [[maybe_unused]] 表示参数暂时没用到。你用到它之后，把这个标记删掉。
//
// 目标：
//   1. max_of：返回两个整数里较大的一个。相等时返回哪一个都可以。
//   2. is_even：偶数返回 true，奇数返回 false。
//   3. factorial：用循环计算 n!。约定 0! 是 1。n 小于 0 时返回 0。
//      先不要用递归。n 最大测到 10，不用考虑溢出。
//
// 期望：程序最后打印「全部符合预期」。任何一行出现「不符合」都说明函数还没写对。

#include <iostream>

int max_of([[maybe_unused]] int a, [[maybe_unused]] int b)
{
    // TODO: 返回较大的数。现在的返回值是错的。
    return 0;
}

bool is_even([[maybe_unused]] int n)
{
    // TODO: 判断 n 是不是偶数。
    return false;
}

int factorial([[maybe_unused]] int n)
{
    // TODO: 用循环计算阶乘。0! 是 1，负数返回 0。
    return 0;
}

int main()
{
    int failed = 0;

    if (max_of(3, 7) != 7 || max_of(7, 3) != 7 || max_of(5, 5) != 5)
    {
        std::cout << "max_of 不符合预期\n";
        ++failed;
    }

    if (!is_even(0) || !is_even(8) || is_even(7))
    {
        std::cout << "is_even 不符合预期\n";
        ++failed;
    }

    if (factorial(0) != 1 || factorial(1) != 1 || factorial(5) != 120 || factorial(-3) != 0)
    {
        std::cout << "factorial 不符合预期\n";
        ++failed;
    }

    if (failed == 0)
    {
        std::cout << "全部符合预期\n";
    }
    else
    {
        std::cout << "还有 " << failed << " 个函数需要修改\n";
    }
    return 0;
}
