// 练习：auto
//
// 目标：
//   1. 把下面循环里的迭代器类型换成 auto，输出保持不变。
//   2. 用 auto 声明 first_plus_ten，它的值是 nums 第一个元素加 10。
//      然后打印它。不要把类型写成 int，让编译器推断。
//   3. 想一想：如果写成 auto x = 1.5;，x 是什么类型？把答案写在注释里。
//
// 期望输出：
//   1 2 3
//   11

#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> nums{1, 2, 3};

    for (std::vector<int>::const_iterator it = nums.begin(); it != nums.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // TODO: 用 auto 声明 first_plus_ten 并打印。循环里的类型也换成 auto。
    return 0;
}
