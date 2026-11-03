// 练习：确认语言标准
//
// __cplusplus 是编译器提供的宏，数值由语言标准决定。
// C++17 是 201703L。如果在 MSVC 上看到 199711L，说明没有打开 /Zc:__cplusplus。
// 本仓库的 CMakeLists.txt 已经为 MSVC 加上了这个选项。
//
// 目标：
//   1. 打印 __cplusplus。
//   2. 如果它大于等于 201703L，打印「当前至少是 C++17」；否则打印「标准偏低」。
//
// 用本仓库的 CMake 编译时，期望看到：
//   __cplusplus = 201703
//   当前至少是 C++17
//
// 不同编译器打印 long 类型宏时可能带 L 后缀，那也算对，只要数值是 201703。

#include <iostream>

int main()
{
    std::cout << "__cplusplus = " << __cplusplus << "\n";

    // TODO: 按数值判断并打印其中一句。
    return 0;
}
