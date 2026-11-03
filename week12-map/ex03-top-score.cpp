// 练习：最高分
//
// 目标：完成 top_student。
//   返回分数最高的那个人的名字。
//   分数相同就返回字典序更小的名字。map 本身按名字排序，遍历时可以利用这一点。
//   空表返回空字符串。
//
// 期望：程序打印「最高分正确」。

#include <iostream>
#include <map>
#include <string>

std::string top_student([[maybe_unused]] const std::map<std::string, int>& scores)
{
    // TODO: 找出最高分的名字。并列时要字典序较小的那个。
    return "";
}

int main()
{
    const std::map<std::string, int> scores{{"Ada", 90}, {"Bob", 95}, {"Cyd", 95}, {"Ann", 70}};

    const bool ok = top_student(scores) == "Bob" && top_student({}) == "" &&
                    top_student({{"Bea", 80}, {"Ada", 80}}) == "Ada";

    if (ok)
    {
        std::cout << "最高分正确\n";
    }
    else
    {
        std::cout << "还不符合预期，当前得到：" << top_student(scores) << "\n";
    }
    return 0;
}
