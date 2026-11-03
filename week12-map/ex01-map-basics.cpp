// 练习：map 入门
//
// 目标：
//   1. 再插入两条记录：Bob 81，Cyd 95。已经有的 Ada 90 保留。
//   2. 用范围 for 打印所有人。类型可以写成：
//        const std::pair<const std::string, int>& item
//      item.first 是名字，item.second 是分数。打印顺序是键的字典序，不是插入序。
//   3. 完成 find_score：找到返回分数，找不到返回 -1。
//      用 find，不要用 operator[]。operator[] 找不到时会插入 0，而且不能用在 const map 上。
//
// 期望：程序打印三行名单，然后打印「查询正确」。
// 名单顺序应是：
//   Ada 90
//   Bob 81
//   Cyd 95

#include <iostream>
#include <map>
#include <string>
#include <utility>

int find_score([[maybe_unused]] const std::map<std::string, int>& scores, [[maybe_unused]] const std::string& name)
{
    // TODO: 找到返回分数，否则返回 -1。
    return -1;
}

int main()
{
    std::map<std::string, int> scores;
    scores.insert({"Ada", 90});

    // TODO: 插入 Bob 和 Cyd，并打印全部记录。

    const bool ok = find_score(scores, "Ada") == 90 && find_score(scores, "Cyd") == 95 &&
                    find_score(scores, "没有的人") == -1 && scores.size() == 3;

    if (ok)
    {
        std::cout << "查询正确\n";
    }
    else
    {
        std::cout << "还不符合预期，当前人数 " << scores.size() << "\n";
    }
    return 0;
}
