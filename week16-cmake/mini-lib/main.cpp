// 多文件练习的入口。
//
// 编译（在仓库根目录）：
//   cmake -S . -B build
//   cmake --build build --target week16_mini_lib
//   ./build/bin/week16_mini_lib
//
// 目标：
//   1. 先运行，确认问候语来自 greet.cpp，而不是写在 main 里。
//   2. 在 greet.h 声明 add，在 greet.cpp 定义它，然后取消下面的注释。
//   3. 重新编译。只改了 cpp 时不必重新运行 cmake -S，cmake --build 就够了。
//      如果链接器说找不到 add，说明定义没有放进 greet.cpp，或声明和定义的签名不一致。
//
// 期望输出：
//   你好，Ada！欢迎学习 CMake。
//   3 + 4 = 7

#include "greet.h"

#include <iostream>

int main()
{
    std::cout << make_greeting("Ada") << "\n";
    std::cout << make_greeting("") << "\n";

    // TODO: 声明并定义 add 之后，取消下一行注释。
    // std::cout << "3 + 4 = " << add(3, 4) << "\n";
    return 0;
}
