// 练习：多个对象
//
// 目标：
//   1. 完成 print_task。它打印「[ ] 标题」或「[x] 标题」，由 done 决定。
//      函数不修改任务，参数保持 const Task&。
//   2. 在 main 里再创建两个不同完成状态的 Task，放进数组，和原来的两个一起打印。
//      数组长度改成 4。
//
// 期望输出类似：
//   [x] 读完本周笔记
//   [ ] 完成练习
//   （后面两行是你自己的任务）

#include <array>
#include <iostream>
#include <string>

class Task
{
public:
    std::string title;
    bool done = false;
};

void print_task([[maybe_unused]] const Task& task)
{
    // TODO: 按完成状态打印 [x] 或 [ ]，然后打印标题。
    std::cout << "print_task 还没完成\n";
}

int main()
{
    std::array<Task, 2> tasks{};
    tasks[0].title = "读完本周笔记";
    tasks[0].done = true;
    tasks[1].title = "完成练习";
    tasks[1].done = false;

    // TODO: 把数组扩成 4 个，补上两个你自己的任务，然后逐个 print_task。
    for (const Task& task : tasks)
    {
        print_task(task);
    }
    return 0;
}
