// 练习：const 与 constexpr
//
// 目标：
//   1. 声明 constexpr int kDaysPerWeek，表示一周有 7 天。
//   2. 用它计算「本计划 17 周大约有多少天」，把结果放进一个 constexpr int。
//      两个常量相乘，结果在编译期就能确定。
//   3. 打印这个天数。
//   4. 试着在声明之后给 kMonthsInYear 再赋一个新值，看看编译器怎么拒绝你。
//      看完错误信息后，把这句尝试删掉，让程序重新编译通过。
//
// 期望输出里要出现：
//   一年有 12 个月
//   17 周大约有 119 天

#include <iostream>

int main()
{
    const int kMonthsInYear = 12;
    std::cout << "一年有 " << kMonthsInYear << " 个月\n";

    // TODO: 声明 kDaysPerWeek 和 17 周的总天数，并打印总天数。
    return 0;
}
