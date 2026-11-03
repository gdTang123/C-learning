// 练习：字符串的长度和两端
//
// 先看懂上面半段：它不读键盘，只演示 size、拼接和下标。
//
// 然后完成 TODO：
//   1. 提示用户输入一整行（可以含空格），用 std::getline 读进 line。
//   2. 打印这一行的长度。
//   3. 如果是空字符串，打印「空字符串」；否则打印第一个字符和最后一个字符。
//
// 示例输入：
//   hello c++
// 示例输出（前三行是原来的演示，后面是你的结果）：
//   单词：C++
//   长度：3
//   句子：C++ 入门
//   这一行的长度：9
//   第一个字符：h
//   最后一个字符：+

#include <iostream>
#include <string>

int main()
{
    const std::string word = "C++";
    const std::string sentence = word + " 入门";
    std::cout << "单词：" << word << "\n";
    std::cout << "长度：" << word.size() << "\n";
    std::cout << "句子：" << sentence << "\n";

    std::string line;
    std::cout << "请输入一行文字：";
    // TODO: 用 std::getline 读入 line，并按文件开头的要求打印。
    std::cout << "目前读到的长度：" << line.size() << "\n";
    return 0;
}
