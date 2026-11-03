// 练习：成员函数
//
// 目标：
//   1. 完成 area：返回宽乘高。不修改对象，所以函数末尾保留 const。
//   2. 完成 describe：打印「宽 x 高 的矩形，面积是 ...」。可以在里面调用 area()。
//   3. 在 main 里再创建一个 3 x 4 的矩形，调用 describe。
//
// 期望：
//   5 x 2 的矩形，面积是 10
//   3 x 4 的矩形，面积是 12
//   并且程序打印「面积函数正确」（这行由 main 里的检查输出，你不用自己写）。

#include <iostream>

class Rectangle
{
public:
    double width = 0.0;
    double height = 0.0;

    double area() const
    {
        // TODO: 返回面积。
        return 0.0;
    }

    void describe() const
    {
        // TODO: 打印一行描述。
        std::cout << "describe 还没完成\n";
    }
};

int main()
{
    Rectangle a;
    a.width = 5;
    a.height = 2;

    if (a.area() == 10.0)
    {
        std::cout << "面积函数正确\n";
    }
    else
    {
        std::cout << "面积函数还不对，现在得到 " << a.area() << "\n";
    }

    a.describe();

    // TODO: 创建 3 x 4 的矩形并调用 describe。
    return 0;
}
