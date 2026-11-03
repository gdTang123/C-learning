# 第 16 周：多文件与 CMake

本周建议用时：6–9 小时。程序变大之后，不能永远把所有东西放进一个 `.cpp`。本周学习如何分成头文件和源文件，并用 CMake 描述「要编译什么」。

## 本周目标

- 能把函数声明放进 `.h`，把定义放进 `.cpp`。
- 会写头文件保护，避免同一个头文件被包含两次。
- 能读懂仓库根目录的 `CMakeLists.txt`：它如何把每个 `ex*.cpp` 变成一个程序。
- 能在子目录里用 `add_executable` 写出一个多文件目标。

## 先读这些

精读：

- [LearnCpp 2.8](https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/)：多个源文件。
- [LearnCpp 2.11–2.12](https://www.learncpp.com/cpp-tutorial/header-files/)：头文件和头文件保护。
- 仓库根目录的 `CMakeLists.txt`。先通读，再对照本周笔记。
- [CMake 教程 Step 1](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html)：官方教程的第一步，讲一个可执行文件怎么声明。

选读：

- 《C++ Primer》2.6.3 附近：关于分离式编译的概念。这本书不讲 CMake，构建部分以本周笔记和 CMake 教程为准。

## 概念笔记

编译器一次编译一个 `.cpp`，这个过程叫翻译单元。头文件在预处理时被贴进 `.cpp`。如果函数的定义出现在头文件里又被多个 `.cpp` 包含，链接时会看到多份定义。所以头文件放声明，`.cpp` 放定义。

头文件保护：

```cpp
#ifndef CPP_LEARNING_WEEK16_GREET_H
#define CPP_LEARNING_WEEK16_GREET_H

#include <string>

std::string make_greeting(const std::string& name);

#endif
```

根目录的 `CMakeLists.txt` 做了这些事：

1. 要求 C++17。
2. 打开一组警告。MSVC 上额外打开 `/Zc:__cplusplus`，让 `__cplusplus` 宏反映真实标准。
3. 找到每个 `week*` 目录里的 `ex*.cpp`，每个文件生成一个可执行目标。
4. `add_subdirectory` 把 `mini-lib` 和通讯录挂进来。那两个目录里的 `.cpp` 不以 `ex` 开头，避免被当成单文件程序。

配置和编译：

```bash
cmake -S . -B build
cmake --build build
```

本周多文件示例的目标名是 `week16_mini_lib`。只编译它：

```bash
cmake --build build --target week16_mini_lib
./build/bin/week16_mini_lib
```

在 Windows 的多配置生成器（例如 Visual Studio）里，可执行文件可能位于 `build/bin/Debug/` 这样的子目录。用 `cmake --build build` 看它实际写出的路径。

改完 `CMakeLists.txt` 要重新执行配置那一条 `cmake -S . -B build`。只改 `.cpp` 时，直接 `cmake --build build` 即可。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-build-me.cpp](ex01-build-me.cpp) | 用 CMake 目标编译这个单文件，并改一句话 | - [ ] |
| [ex02-standard.cpp](ex02-standard.cpp) | 确认编译器正在使用 C++17 | - [ ] |
| [mini-lib/](mini-lib/) | 在两个文件之间补上一个函数 | - [ ] |

`mini-lib` 里要打开 `greet.h`、`greet.cpp` 和 `main.cpp`，三个文件一起看。

## 自测

1. 为什么函数定义通常不放在被多个源文件包含的头文件里？
2. 头文件保护防止的是什么？
3. 新增一个 `ex03-test.cpp` 之后，要不要改根目录的 `CMakeLists.txt`？为什么？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我编译 `week16_mini_lib` 用的命令：
