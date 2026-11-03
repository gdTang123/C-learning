// 练习：把函数交给算法
//
// std::count_if 的第三个参数是「判断函数」：它接收一个元素，返回 bool。
// is_positive 是一个完整的例子。
//
// 目标：
//   1. 写一个函数 is_passing，分数大于等于 60 时返回 true。
//   2. 用 std::count_if 和 is_passing 统计及格人数，不要在循环里自己数。
//   3. 再统计不及格人数。可以再写一个函数，也可以用总人数减去及格人数。
//      如果用减法，请仍然保留一次 count_if 调用。
//
// 期望输出：
//   正数有 3 个
//   及格有 2 个
//   不及格有 2 个

#include <algorithm>
#include <iostream>
#include <vector>

bool is_positive(int n)
{
    return n > 0;
}

int main()
{
    const std::vector<int> sample{-1, 2, 0, 5};
    const int positives = static_cast<int>(std::count_if(sample.begin(), sample.end(), is_positive));
    std::cout << "正数有 " << positives << " 个\n";

    const std::vector<int> scores{55, 70, 80, 40};
    // TODO: 统计及格和不及格，并按期望的格式打印。
    std::cout << "分数人数：" << scores.size() << "\n";
    return 0;
}
