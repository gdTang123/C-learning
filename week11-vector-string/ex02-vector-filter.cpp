// 练习：在 vector 上做筛选
//
// 目标：
//   1. count_greater_than：统计严格大于 threshold 的元素个数。
//   2. non_negative：返回一个新 vector，里面只保留大于等于 0 的元素，顺序不变。
//      不要修改传入的原向量。
//
// 期望：程序打印「筛选正确」。

#include <iostream>
#include <vector>

int count_greater_than([[maybe_unused]] const std::vector<int>& nums, [[maybe_unused]] int threshold)
{
    // TODO: 统计严格大于 threshold 的个数。
    return 0;
}

std::vector<int> non_negative([[maybe_unused]] const std::vector<int>& nums)
{
    // TODO: 收集大于等于 0 的元素，保持原有顺序。
    return {};
}

int main()
{
    const std::vector<int> nums{3, -1, 4, -5, 0, 4};

    const std::vector<int> kept = non_negative(nums);
    const bool kept_ok = kept.size() == 4 && kept[0] == 3 && kept[1] == 4 && kept[2] == 0 && kept[3] == 4;
    const bool count_ok = count_greater_than(nums, 3) == 2 && count_greater_than(nums, 100) == 0;

    if (kept_ok && count_ok && nums.size() == 6)
    {
        std::cout << "筛选正确\n";
    }
    else
    {
        std::cout << "还不符合预期\n";
    }
    return 0;
}
