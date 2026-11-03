// 练习：线性查找
//
// 从下标 0 开始逐个比较，找到就返回下标，找不到返回 -1。
// 有多个相同元素时，返回最靠前的那个下标。
//
// 目标：完成 find_value。
//
// 期望：程序打印「查找结果正确」。

#include <array>
#include <iostream>

int find_value([[maybe_unused]] const std::array<int, 5>& nums, [[maybe_unused]] int target)
{
    // TODO: 找到 target 就返回下标，否则返回 -1。
    return -1;
}

int main()
{
    const std::array<int, 5> nums{4, 8, 15, 16, 23};

    bool ok = true;
    if (find_value(nums, 15) != 2)
    {
        std::cout << "查找 15 不符合预期\n";
        ok = false;
    }
    if (find_value(nums, 4) != 0)
    {
        std::cout << "查找 4 不符合预期\n";
        ok = false;
    }
    if (find_value(nums, 99) != -1)
    {
        std::cout << "查找不存在的值不符合预期\n";
        ok = false;
    }

    if (ok)
    {
        std::cout << "查找结果正确\n";
    }
    return 0;
}
