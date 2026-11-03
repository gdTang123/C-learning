// 练习：protected 成员
//
// 宽和高放在基类里，派生类计算面积时直接使用 width_ 和 height_，
// 不要在 Rectangle 里再存一份。
//
// 目标：
//   1. 完成 Rectangle::area，返回宽乘高。
//   2. 如果宽或高是负数，面积按 0 算。0 是合法的。
//
// 期望：程序打印「面积正确」。

#include <iostream>

class Shape
{
public:
    Shape(double width, double height)
        : width_{width}
        , height_{height}
    {
    }

protected:
    double width_ = 0.0;
    double height_ = 0.0;
};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height)
        : Shape(width, height)
    {
    }

    double area() const
    {
        // TODO: 用 width_ 和 height_ 计算面积。负数按 0。
        return 0.0;
    }
};

int main()
{
    const Rectangle ok{3.0, 4.0};
    const Rectangle empty{0.0, 5.0};
    const Rectangle bad{-2.0, 4.0};

    if (ok.area() == 12.0 && empty.area() == 0.0 && bad.area() == 0.0)
    {
        std::cout << "面积正确\n";
    }
    else
    {
        std::cout << "还不符合预期：" << ok.area() << ", " << empty.area() << ", " << bad.area() << "\n";
    }
    return 0;
}
