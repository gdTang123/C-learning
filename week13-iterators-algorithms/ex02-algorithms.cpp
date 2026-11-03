// 练习：sort、find、count
//
// 目标：
//   1. 用 std::sort 把 nums 排成升序，然后打印在一行里。
//   2. 用 std::find 查找 3。找到时打印它的下标（std::distance），找不到时打印「没有 3」。
//      先排序再查找也可以，下标以排序后的 vector 为准。
//   3. 用 std::count 统计 1 出现的次数并打印。统计对象用排序前的数据也行，次数相同。
//      如果你先排序了，就在排序前把原数据留一份，或者先计数再排序。
//
// 期望输出包含这三行（顺序不限）：
//   排序后：1 1 3 4
//   3 的下标：2
//   1 的个数：2

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{4, 1, 3, 1};
    std::cout << "排序前已经放好了 " << nums.size() << " 个元素\n";

    // TODO: 排序、查找 3、统计 1。需要的头文件请自己补上。
    return 0;
}
