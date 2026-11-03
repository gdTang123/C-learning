# 第 1 周：工具链与第一个程序

本周建议用时：5–8 小时。目标不是「学会很多语法」，而是能独立把一个程序从源文件变成终端里的输出，并且看得懂最基本的程序骨架。

## 本周目标

- 安装 VS Code 和 g++（或 clang++），知道编译器和编辑器不是同一个东西。
- 能用命令编译并运行一个 C++ 文件。
- 认识 `#include`、`main`、`std::cout` 和注释。
- 分得清编译错误和你自己想错了（程序能跑，但结果不对）。

## 先读这些

精读（大约 2–3 小时，示例要自己敲，不要只看）：

- [LearnCpp 0.1–0.7](https://www.learncpp.com/cpp-tutorial/introduction-to-these-tutorials/)：程序、C++、编译器、安装、编译第一个程序。
- [LearnCpp 1.1–1.2](https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/)：语句、程序结构、注释。
- 《C++ Primer》第 1 章 1.1–1.2。

选读：

- [LearnCpp 0.8–0.12](https://www.learncpp.com/cpp-tutorial/a-few-common-cpp-problems/)：常见问题和编译器警告级别。有报错时再回来查。

## 概念笔记

一个 `.cpp` 文件只是文本。**编译器**（`g++` 或 `clang++`）把它翻译成可执行文件，**操作系统**再运行那个文件。VS Code 负责让你编辑文本，它本身不会把 C++ 跑起来。

最小程序长这样：

```cpp
#include <iostream>

int main()
{
    std::cout << "你好，世界！\n";
    return 0;
}
```

- `#include <iostream>` 把输入输出工具引进来。尖括号表示这是标准库的头文件。
- `int main()` 是程序入口。操作系统从这里开始执行。一个单文件练习里只能有一个 `main`。
- `std::cout` 是标准输出。`<<` 把右边的内容送出去。`\n` 是换行。
- `std::` 是标准库的命名空间。本计划始终写成 `std::cout`，不使用 `using namespace std;`。
- `return 0;` 告诉操作系统：正常结束。

在仓库根目录编译本周第一个练习：

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -Wpedantic week01-toolchain/ex01-hello-world.cpp -o build/hello
./build/hello
```

看到两行中文就说明工具链通了。改一个字之后必须重新编译，终端才会变。改完源文件直接运行旧的 `build/hello`，看到的仍是上一次的结果。

编译失败时，先读第一条错误的文件名和行号。后面的一长串经常是第一条引起的。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-hello-world.cpp](ex01-hello-world.cpp) | 不用改逻辑。编译、运行，确认看得到中文 | - [ ] |
| [ex02-about-me.cpp](ex02-about-me.cpp) | 用 `std::cout` 打印你自己的介绍 | - [ ] |
| [ex03-comments.cpp](ex03-comments.cpp) | 给代码写注释，并让被注释掉的输出重新出现 | - [ ] |

## 自测

不看笔记，回答下面三句。答不上来就回到对应练习，不要往下赶。

1. 编辑器和编译器各做什么？
2. 为什么改完代码必须重新执行 `g++`？
3. `//` 和 `/* */` 有什么不同？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我的编译命令（写在这里，下周还会用）：
