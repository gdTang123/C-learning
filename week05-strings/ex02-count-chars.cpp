// 练习：遍历字符串
//
// 目标：
//   1. count_char：统计 text 里有多少个字符等于 target。区分大小写，'A' 和 'a' 不同。
//   2. count_spaces：统计空格的个数。只数 ' '，换行不用考虑（参数里不会有换行）。
//
// 用下标循环或范围 for 都可以：
//   for (char ch : text) { ... }
//
// 期望：程序打印「统计正确」。

#include <iostream>
#include <string>

int count_char([[maybe_unused]] const std::string& text, [[maybe_unused]] char target)
{
    // TODO: 统计 target 出现的次数。
    return 0;
}

int count_spaces([[maybe_unused]] const std::string& text)
{
    // TODO: 统计空格个数。
    return 0;
}

int main()
{
    const std::string sentence = "Never odd or even";

    bool ok = true;
    if (count_char(sentence, 'e') != 4)
    {
        std::cout << "字母 e 的个数不符合预期\n";
        ok = false;
    }
    if (count_char(sentence, 'N') != 1)
    {
        std::cout << "字母 N 的个数不符合预期\n";
        ok = false;
    }
    if (count_spaces(sentence) != 3)
    {
        std::cout << "空格个数不符合预期\n";
        ok = false;
    }
    if (count_char("", 'a') != 0 || count_spaces("") != 0)
    {
        std::cout << "空字符串不符合预期\n";
        ok = false;
    }

    if (ok)
    {
        std::cout << "统计正确\n";
    }
    return 0;
}
