// 练习：数组统计
//
// 三个函数的结果现在是错的。数组长度固定为 6。
// 参数上的 const 和 & 表示：这是原来的数组，函数答应不修改它。
//
// 目标：
//   1. sum_of：返回所有元素之和。
//   2. max_of：返回最大的元素。数组保证不是空的。
//   3. min_of：返回最小的元素。
//
// 期望：程序打印「统计结果正确」。

#include <array>
#include <iostream>

int sum_of([[maybe_unused]] const std::array<int, 6>& nums)
{
    // TODO: 累加每个元素。
    return 0;
}

int max_of([[maybe_unused]] const std::array<int, 6>& nums)
{
    // TODO: 先假设第一个是最大，再和后面的比较。
    return 0;
}

int min_of([[maybe_unused]] const std::array<int, 6>& nums)
{
    // TODO: 找出最小元素。
    return 0;
}

int main()
{
    const std::array<int, 6> nums{3, -1, 8, 8, 0, 4};

    bool ok = true;
    if (sum_of(nums) != 22)
    {
        std::cout << "和不符合预期，现在是 " << sum_of(nums) << "\n";
        ok = false;
    }
    if (max_of(nums) != 8)
    {
        std::cout << "最大值不符合预期，现在是 " << max_of(nums) << "\n";
        ok = false;
    }
    if (min_of(nums) != -1)
    {
        std::cout << "最小值不符合预期，现在是 " << min_of(nums) << "\n";
        ok = false;
    }

    if (ok)
    {
        std::cout << "统计结果正确\n";
    }
    return 0;
}
