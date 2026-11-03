// 练习：指针
//
// 目标：
//   1. 读懂前半段：& 取地址，* 取出指针指向的值。
//   2. 通过指针 p 把 value 改成 100，然后同时打印 value 和 *p。两者应该相同。
//   3. 完成 set_to_zero：如果指针是 nullptr，什么都不做；否则把指向的 int 设为 0。
//
// 期望输出：
//   修改前：42
//   修改后 value：100
//   修改后 *p：100
//   空指针安全，另一个整数现在是 0

#include <iostream>

void set_to_zero([[maybe_unused]] int* pointer)
{
    // TODO: pointer 不是 nullptr 时，把它指向的整数设为 0。
}

int main()
{
    int value = 42;
    int* p = &value;
    std::cout << "修改前：" << *p << "\n";

    // TODO: 通过 p 把 value 改成 100。
    std::cout << "修改后 value：" << value << "\n";
    std::cout << "修改后 *p：" << *p << "\n";

    set_to_zero(nullptr);
    int other = 5;
    set_to_zero(&other);
    std::cout << "空指针安全，另一个整数现在是 " << other << "\n";
    return 0;
}
