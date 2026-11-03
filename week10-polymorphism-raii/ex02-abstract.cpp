// 练习：抽象类
//
// Shape 含有纯虚函数，不能创建 Shape 对象。Circle 必须实现 area 才能被创建。
//
// 目标：
//   1. 完成 Circle::area。面积 = 3.14159 * 半径 * 半径。半径为负时返回 0。
//   2. 再写一个 class Square，边长存在自己的成员里。area 返回边长的平方，边长为负时返回 0。
//   3. 让 print_area 也能打印这个正方形。print_area 的参数保持 const Shape&。
//
// 期望：
//   面积：12.5664
//   面积：0
//   面积：16   （边长为 4 的正方形，数值接近即可，用精确乘法就不会有误差）

#include <iostream>

class Shape
{
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
};

class Circle : public Shape
{
public:
    explicit Circle(double radius)
        : radius_{radius}
    {
    }

    double area() const override
    {
        // TODO: 返回圆面积。负数半径按 0。
        (void)radius_;
        return 0.0;
    }

private:
    double radius_;
};

void print_area(const Shape& shape)
{
    std::cout << "面积：" << shape.area() << "\n";
}

int main()
{
    const Circle coin{2.0};
    const Circle bad{-1.0};
    print_area(coin);
    print_area(bad);

    // TODO: 创建边长为 4 的 Square，交给 print_area。
    return 0;
}
