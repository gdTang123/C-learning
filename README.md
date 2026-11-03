# C-learning

个人 C++ 学习记录。这是一份大约 **17 周**的入门计划，按每周 **5–10 小时**安排，适合几乎没有 C++ 基础的人。

计划按「先写得出程序，再理解核心概念，然后学面向对象和标准库，最后做一个小项目」来排。每周一个目录：里面有本周笔记，以及 2–4 个能编译的起步代码。起步代码里留着 `TODO`，仓库**故意不提供参考答案**。

## 你将学到什么

| 阶段 | 周次 | 内容 |
| --- | --- | --- |
| 入门 | 第 1–3 周 | 工具链、变量与类型、输入输出、条件、循环、函数 |
| 核心概念 | 第 4–6 周 | 数组、字符串、指针与引用、作用域、内存基础 |
| 面向对象 | 第 7–10 周 | 类与对象、构造与析构、封装、继承、多态、RAII |
| 标准库 | 第 11–14 周 | `vector` / `string` / `map`、迭代器、算法、智能指针 |
| 现代 C++ 与小项目 | 第 15–17 周 | `auto`、lambda、移动语义、CMake、命令行通讯录 |

全部练习使用 **C++17**。

## 怎么用这份计划

1. 从上到下，一次只开一周。做完该周练习、能向自己解释本周笔记，再进入下一周。
2. 每周大致分成三次：
   - 第一次（约 2 小时）：读本周「先读这些」和笔记，把笔记里的小例子自己敲一遍。
   - 第二次（约 3–6 小时）：做该周目录里的练习，只改标了 `TODO` 的地方。
   - 第三次（约 1–2 小时）：看警告、对照期望输出、在该周笔记末尾写几句复盘，然后勾选下面的复选框。
3. 某一周超时是正常的，尤其是第 6 周（指针和内存）和第 10 周（多态与 RAII）。把当周练习做完再前进，不要两周并行。
4. 进度直接记在本文件里：把 `- [ ]` 改成 `- [x]`。这就是你的学习日志。

卡住超过 40 分钟时：先看编译器**第一条**错误；把输入改小，确认自己理解的是哪一行；再回到该周笔记的示例。不要一次改很多行。

## 环境准备

需要两样东西：一个编辑器，一个 C++ 编译器。本计划用 **VS Code**，编译器使用 **g++** 或 **clang++**。安装细节以 [LearnCpp 第 0.6 节](https://www.learncpp.com/cpp-tutorial/installing-an-integrated-development-environment-ide/) 为准，下面是最短路径。

- **Windows**：安装 [VS Code](https://code.visualstudio.com/)，再安装 [MSYS2](https://www.msys2.org/)。在 MSYS2 UCRT64 终端执行 `pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-cmake`，并把 `ucrt64\bin` 加进系统 PATH。也可以改用 Visual Studio 2022 的「使用 C++ 的桌面开发」，那时用 `cl` 配合 CMake 即可。
- **macOS**：安装 VS Code 后，在终端执行 `xcode-select --install`。CMake 可用 `brew install cmake`。
- **Linux（Debian / Ubuntu）**：

```bash
sudo apt update
sudo apt install -y build-essential g++ cmake
```

装好后确认：

```bash
g++ --version
cmake --version
```

在 VS Code 中安装微软的 **C/C++** 扩展。本仓库的 `.vscode` 已经把语言标准设成 C++17。中文源文件请保持 **UTF-8**。如果终端里中文变成乱码，把终端代码页改成 UTF-8（Windows 可执行 `chcp 65001`）。

## 如何编译和运行

每个 `weekXX/ex*.cpp` 都是一个单独的程序，里面已经有 `main`，可以单独编译。第 16 周的 `mini-lib` 和第 17 周的通讯录是多文件项目，用 CMake 目标编译。

### 方式 A：单文件 g++（第 1 周就用这个）

在仓库根目录执行（把路径换成你正在做的文件）：

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -Wpedantic week01-toolchain/ex01-hello-world.cpp -o build/hello
./build/hello
```

Windows PowerShell：

```powershell
New-Item -ItemType Directory -Force -Path build
g++ -std=c++17 -Wall -Wextra -Wpedantic week01-toolchain/ex01-hello-world.cpp -o build/hello.exe
.\build\hello.exe
```

用 clang 时，把 `g++` 换成 `clang++`，其余参数相同。

这几个参数的含义：

- `-std=c++17`：按 C++17 编译。
- `-Wall -Wextra -Wpedantic`：打开常见警告。警告不是「编译失败」，但本计划里出现警告就要读懂它。
- `-o build/hello`：可执行文件放到 `build/`，避免和源码混在一起。

### 方式 B：CMake（一次编译全部练习）

```bash
cmake -S . -B build
cmake --build build
```

生成的程序在 `build/bin/` 下面。例如第 1 周的 Hello World：

```bash
./build/bin/week01_toolchain_ex01_hello_world
```

只编译其中一个目标：

```bash
cmake --build build --target week01_toolchain_ex01_hello_world
```

在 VS Code 里可以用终端菜单 **Run Build Task**（默认任务是「CMake: 编译全部练习」）。

根目录的 `CMakeLists.txt` 会自动把每个 `weekXX/ex*.cpp` 做成一个可执行文件。新加的练习只要遵循这个命名，重新运行上面的 `cmake` 命令就会被收进来。第 16 周会解释这份脚本。

## 17 周总览

做完一周后，把最右边的框勾上。

| 周 | 阶段 | 主题 | 完成 |
| --- | --- | --- | --- |
| [第 1 周](week01-toolchain/) | 入门 | 工具链、编译运行、第一个程序 | - [ ] |
| [第 2 周](week02-variables-io/) | 入门 | 变量、类型、输入输出、常量 | - [ ] |
| [第 3 周](week03-control-functions/) | 入门 | 条件、循环、函数 | - [ ] |
| [第 4 周](week04-arrays/) | 核心概念 | 数组 | - [ ] |
| [第 5 周](week05-strings/) | 核心概念 | 字符串 | - [ ] |
| [第 6 周](week06-pointers-memory/) | 核心概念 | 指针、引用、作用域、内存 | - [ ] |
| [第 7 周](week07-classes/) | 面向对象 | 类与对象 | - [ ] |
| [第 8 周](week08-constructors/) | 面向对象 | 构造函数与析构函数 | - [ ] |
| [第 9 周](week09-encapsulation-inheritance/) | 面向对象 | 封装与继承 | - [ ] |
| [第 10 周](week10-polymorphism-raii/) | 面向对象 | 多态与 RAII | - [ ] |
| [第 11 周](week11-vector-string/) | 标准库 | `vector` 与 `string` | - [ ] |
| [第 12 周](week12-map/) | 标准库 | `map` | - [ ] |
| [第 13 周](week13-iterators-algorithms/) | 标准库 | 迭代器与算法 | - [ ] |
| [第 14 周](week14-smart-pointers/) | 标准库 | `unique_ptr` 与 `shared_ptr` | - [ ] |
| [第 15 周](week15-modern-cpp/) | 现代 C++ | `auto`、lambda、移动语义 | - [ ] |
| [第 16 周](week16-cmake/) | 现代 C++ | 多文件与 CMake | - [ ] |
| [第 17 周](week17-address-book/) | 小项目 | 命令行通讯录 | - [ ] |

## 推荐资料

两份资料贯穿全程。每周笔记里写了具体章节，不必把整本书提前读完。

- 《C++ Primer》（第 5 版），Stanley B. Lippman、Josée Lajoie、Barbara E. Moo 著。中文版和英文版都可以，练习以本仓库为准，书用来查概念。
- [LearnCpp.com](https://www.learncpp.com/)：免费、按现代 C++ 编写，适合跟着敲示例。第 0 章负责把编译环境配好。

查标准库函数时用 [cppreference](https://en.cppreference.com/)（英文）。先看页面最上面的「Example」，再看参数说明。

本计划的顺序和这两份资料并不完全一致：《C++ Primer》很早介绍 `string` 和 `vector`，LearnCpp 把类放在继承之前的很多章。以本仓库的周次为准，资料按每周笔记里的章节跳着读。

## 目录里有什么

```text
CMakeLists.txt          编译全部单文件练习，并挂上两个多文件项目
week01-toolchain/       每周一个目录
  README.md             本周目标、阅读、笔记、练习列表
  ex01-....cpp          能编译的起步代码，请完成其中的 TODO
week16-cmake/mini-lib/  多文件示例
week17-address-book/address-book/  通讯录小项目
```

命名约定：`ex` 开头的 `.cpp` 是单文件程序。没有 `ex` 前缀、放在子目录里的 `.cpp` 是多文件项目的一部分，不要单独拿去编译。

## 写代码时的约定

- 使用 `std::cout`、`std::string` 这种带 `std::` 的写法，不写 `using namespace std;`。
- 大括号单独占一行，缩进 4 个空格。现有代码是什么风格，就延续什么风格。
- 函数在真正使用参数之前，如果编译器提示「未使用的参数」，看函数签名上的 `[[maybe_unused]]`。写完逻辑后，这个标记可以删掉。
- 布尔值直接打印是 `1` 或 `0`。需要显示 `true` / `false` 时，先输出 `std::boolalpha`。

## 常见问题

- **`g++: command not found`**：编译器没装好，或没有放进 PATH。回到上面的环境准备。
- **中文乱码**：源文件用 UTF-8，终端也用 UTF-8。
- **`undefined reference to main`**：你正在编译的是多文件项目中的一个文件。改用 CMake，目标名见第 16、17 周笔记。
- **程序一输入字母就停不下来**：整数没读成功时，输入流会进入错误状态。第 3 周计算器里有清理这段状态的写法，阅读那里的注释。
- **`build/` 要不要提交**：不要。它已经写在 `.gitignore` 里。
