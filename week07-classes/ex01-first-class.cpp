// 练习：第一个类
//
// 目标：
//   1. 定义 class Book，公有成员有 title（std::string）和 pages（int，默认 0）。
//   2. 在 main 里创建三本不同的书，给标题和页数赋值。
//   3. 用一个循环或三次输出，打印每本书的标题和页数。
//      第 4 周学过 std::array，可以用 std::array<Book, 3> 把它们放在一起。
//
// 下面的 Student 是已经完成的例子，对照它来写 Book。不要删除这个例子。
//
// 期望输出至少包含三本书，格式类似：
//   示例学生：Ada，18 岁
//   《C++ Primer》，约 900 页
//   （另外两本由你决定）

#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int age = 0;
};

class Book
{
public:
    // TODO: 声明 std::string title，以及默认值为 0 的 int pages。
};

int main()
{
    Student demo;
    demo.name = "Ada";
    demo.age = 18;
    std::cout << "示例学生：" << demo.name << "，" << demo.age << " 岁\n";

    // TODO: 创建三本不同的 Book，给标题和页数赋值，并打印。
    // 类要写在 main 外面。可以先单独创建，也可以放进 std::array<Book, 3>。
    return 0;
}
