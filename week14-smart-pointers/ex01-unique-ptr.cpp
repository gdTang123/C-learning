// 练习：unique_ptr
//
// 目标：
//   1. 再创建一个 std::unique_ptr<std::string>，用 make_unique 让它持有 "RAII"，并打印字符串。
//   2. 完成 use_value：指针为空时返回 -1，否则返回它指向的整数。
//      参数是 const 引用，函数不拿走所有权。
//
// 期望输出：
//   整数：7
//   文字：RAII
//   使用结果：7 和 -1

#include <iostream>
#include <memory>
#include <string>

int use_value([[maybe_unused]] const std::unique_ptr<int>& ptr)
{
    // TODO: 空指针返回 -1，否则返回指向的整数。
    return 0;
}

int main()
{
    const std::unique_ptr<int> number = std::make_unique<int>(7);
    std::cout << "整数：" << *number << "\n";

    // TODO: 创建并打印 unique_ptr<std::string>。

    const std::unique_ptr<int> empty;
    std::cout << "使用结果：" << use_value(number) << " 和 " << use_value(empty) << "\n";
    return 0;
}
