// 练习：认识数组
//
// 目标：
//   1. 读懂下面两段已经能运行的代码：std::array 和 C 风格数组。
//   2. 把 nums 的 5 个元素改成任意你喜欢的整数。
//   3. 反向打印 nums：从最后一个元素走到第一个，同一行，空格分隔。
//      提示：下标用 std::size_t。不要写「i >= 0 再 --i」这种倒序，
//      无符号整数减过 0 会绕回一个很大的数。可以先令 i = nums.size()，
//      当 i > 0 时先 --i 再取值。
//
// 期望（元素若改成 1 2 3 4 5）：
//   正向：1 2 3 4 5
//   反向：5 4 3 2 1
//   C 风格数组第一个元素：7

#include <array>
#include <cstddef>
#include <iostream>

int main()
{
    std::array<int, 5> nums{1, 2, 3, 4, 5};

    std::cout << "长度是 " << nums.size() << "\n";
    std::cout << "正向：";
    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";

    // TODO: 打印「反向：」以及从后往前的元素。

    int raw[3]{7, 8, 9};
    std::cout << "C 风格数组第一个元素：" << raw[0] << "\n";
    return 0;
}
