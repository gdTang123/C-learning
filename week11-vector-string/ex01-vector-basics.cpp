// 练习：vector 入门
//
// 目标：
//   1. 在 nums 里再 push_back 四个整数：1、4、1、5。加上原来的 3，一共 5 个。
//   2. 用范围 for 把它们打印在同一行，空格分隔。
//   3. 完成 average。空 vector 返回 0。否则返回算术平均值（用 double）。
//
// 期望：
//   长度：5
//   元素：3 1 4 1 5
//   平均值：2.8
//   空向量平均值：0

#include <iostream>
#include <vector>

double average([[maybe_unused]] const std::vector<int>& nums)
{
    // TODO: 空向量返回 0，否则返回平均值。
    return -1.0;
}

int main()
{
    std::vector<int> nums;
    nums.push_back(3);

    // TODO: 再放入 1、4、1、5，并打印长度和全部元素。
    std::cout << "长度：" << nums.size() << "\n";

    std::cout << "平均值：" << average(nums) << "\n";
    std::cout << "空向量平均值：" << average({}) << "\n";
    return 0;
}
