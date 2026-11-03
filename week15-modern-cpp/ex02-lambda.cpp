// 练习：lambda
//
// 目标：
//   1. 读懂统计偶数的那个 lambda。再写一个 lambda，统计严格大于 3 的个数并打印。
//   2. 声明 int threshold = 3;。写一个按值捕获 threshold 的 lambda，
//      统计严格大于 threshold 的个数。然后把 threshold 改成 10，再统计一次。
//      按值捕获的话，改 threshold 不应影响已经创建的 lambda。
//      请在输出里把这两次结果都打出来，确认它们相同。
//
// 期望输出：
//   偶数有 2 个
//   大于 3 的有 2 个
//   捕获后第一次：2
//   捕获后第二次：2

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> nums{1, 2, 3, 4, 5};
    const int evens = static_cast<int>(std::count_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    }));
    std::cout << "偶数有 " << evens << " 个\n";

    // TODO: 统计大于 3 的个数，以及捕获 threshold 的那两次统计。
    return 0;
}
