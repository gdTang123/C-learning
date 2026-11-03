// 练习：把句子拆成单词
//
// 按空格拆分。连续多个空格算一个分隔符，开头和结尾的空格忽略。
// 本练习的句子只用英文和空格。
//
// 提示：std::istringstream 可以用 >> 从字符串里一个词一个词地读。头文件是 <sstream>。
//
// 目标：完成 split_words。
//
// 期望：程序打印「拆分正确」。

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split_words([[maybe_unused]] const std::string& line)
{
    // TODO: 按空格拆成单词。
    return {};
}

int main()
{
    const std::vector<std::string> words = split_words("  alpha  beta   gamma ");
    const std::vector<std::string> none = split_words("   ");

    const bool ok = words.size() == 3 && words[0] == "alpha" && words[1] == "beta" &&
                    words[2] == "gamma" && none.empty() && split_words("").empty();

    if (ok)
    {
        std::cout << "拆分正确\n";
    }
    else
    {
        std::cout << "还不符合预期，当前词数是 " << words.size() << "\n";
    }
    return 0;
}
