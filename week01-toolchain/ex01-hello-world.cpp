// 练习：你好，世界
//
// 这个文件是完整的，用来确认编译器、终端和中文输出都正常。
// 先不要改逻辑。编译运行成功后，可以改一句问候，再编译一次，观察输出变化。
//
// 在仓库根目录执行：
//   mkdir -p build
//   g++ -std=c++17 -Wall -Wextra -Wpedantic week01-toolchain/ex01-hello-world.cpp -o build/hello
//   ./build/hello
//
// 期望输出：
//   你好，世界！
//   如果你能看到这两行字，说明编译和运行都成功了。

#include <iostream>

int main()
{
    std::cout << "你好，世界！\n";
    std::cout << "如果你能看到这两行字，说明编译和运行都成功了。\n";
    return 0;
}
