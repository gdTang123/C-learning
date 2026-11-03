// 练习：迭代器
//
// 目标：
//   1. 读懂正向循环。it 指向元素，*it 取出值，++it 走到下一个。
//   2. 用反向迭代器再打印一遍。反向迭代器的类型是 std::vector<int>::reverse_iterator，
//      起点是 nums.rbegin()，终点是 nums.rend()。
//
// 期望输出：
//   正向：10 20 30
//   反向：30 20 10

#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> nums{10, 20, 30};

    std::cout << "正向：";
    for (std::vector<int>::const_iterator it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // TODO: 打印「反向：」并用反向迭代器输出 30 20 10。
    return 0;
}
