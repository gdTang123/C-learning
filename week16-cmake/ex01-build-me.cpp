// 练习：用 CMake 编译我
//
// 这个文件仍然是单文件程序，但它用来练习「不直接敲 g++」。
//
// 在仓库根目录执行：
//   cmake -S . -B build
//   cmake --build build --target week16_cmake_ex01_build_me
//   ./build/bin/week16_cmake_ex01_build_me
//
// 目标：
//   1. 按上面的命令编译并运行。
//   2. 把输出里的「同学」改成你的名字，重新 cmake --build，确认输出变了。
//   3. 在本周 README 的复盘里写下你实际使用的命令。
//
// 期望输出类似：
//   你好，同学。这一次是 CMake 帮你编译的。

#include <iostream>

int main()
{
    // TODO: 把「同学」改成你的名字。
    std::cout << "你好，同学。这一次是 CMake 帮你编译的。\n";
    return 0;
}
