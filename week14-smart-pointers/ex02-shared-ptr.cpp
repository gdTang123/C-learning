// 练习：shared_ptr
//
// 目标：
//   1. 先运行，看两份 shared_ptr 共享时 use_count 是 2。
//   2. 调用 b.reset()，让 b 放弃所有权，再打印 a.use_count()、b.use_count()，
//      以及 a 仍然能读到的值。
//   3. 在注释里回答：reset 之后，整数 5 还被谁拥有？程序结束时它在哪里被销毁？
//
// 期望输出包含：
//   共享时计数：2
//   reset 后 a 的计数：1
//   reset 后 b 的计数：0
//   a 里的值：5

#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> a = std::make_shared<int>(5);
    std::shared_ptr<int> b = a;
    std::cout << "共享时计数：" << a.use_count() << "\n";

    // TODO: 让 b 放弃所有权，并按期望打印。

    // TODO: 用注释回答「谁还拥有这个整数，它在哪里被销毁」。
    return 0;
}
