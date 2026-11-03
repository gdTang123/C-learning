// 练习：移动
//
// std::move 不负责搬走数据，它只是允许 string 使用移动构造函数。
// 移动之后 source 仍然是一个有效的 string：可以询问 size，可以重新赋值，
// 不要再假设它里面还有 "hello"。不同标准库对留下的内容没有统一承诺。
//
// 目标：
//   1. 运行前半段，记下 source.size()。在注释里写：你看到的长度是多少。
//   2. 完成 show_size：按值接收 vector<int>，打印它的长度。
//      按值接收会把实参移进函数（调用时配合 std::move）或拷贝进去。
//   3. 在 main 里创建一个有 3 个元素的 vector，用 std::move 交给 show_size。
//      调用之后只打印原 vector 的 size，不要打印它的元素。
//
// 期望输出包含：
//   dest = hello
//   函数里的长度：3

#include <iostream>
#include <string>
#include <utility>
#include <vector>

void show_size([[maybe_unused]] std::vector<int> nums)
{
    // TODO: 打印「函数里的长度：」和 nums 的长度。
}

int main()
{
    std::string source = "hello";
    std::string dest = std::move(source);
    std::cout << "dest = " << dest << "\n";
    std::cout << "source 的长度现在是 " << source.size() << "\n";

    // TODO: 创建 vector，用 std::move 调用 show_size，然后只打印原 vector 的 size。
    return 0;
}
