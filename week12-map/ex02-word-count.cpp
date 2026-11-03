// 练习：单词计数
//
// 目标：完成 count_words。
//   对 words 里的每个单词，在 map 里把对应计数加 1。
//   返回这张表。空输入返回空 map。
//
// 这里是在构建一张表，键第一次出现时插入 0 再加 1 是合理的。
// 可以用 find，也可以在非 const 的局部 map 上使用 operator[]。
//
// 期望：程序打印「计数正确」。

#include <iostream>
#include <map>
#include <string>
#include <vector>

std::map<std::string, int> count_words([[maybe_unused]] const std::vector<std::string>& words)
{
    // TODO: 统计每个单词的出现次数。
    return {};
}

int count_of(const std::map<std::string, int>& counts, const std::string& word)
{
    const std::map<std::string, int>::const_iterator found = counts.find(word);
    if (found == counts.end())
    {
        return -1;
    }
    return found->second;
}

int main()
{
    const std::vector<std::string> words{"to", "be", "or", "not", "to", "be"};
    const std::map<std::string, int> counts = count_words(words);

    const bool ok = counts.size() == 4 && count_of(counts, "to") == 2 && count_of(counts, "be") == 2 &&
                    count_of(counts, "or") == 1 && count_of(counts, "not") == 1 && count_words({}).empty();

    if (ok)
    {
        std::cout << "计数正确\n";
    }
    else
    {
        std::cout << "还不符合预期\n";
    }
    return 0;
}
