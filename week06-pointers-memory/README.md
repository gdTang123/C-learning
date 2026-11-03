# 第 6 周：指针、引用、作用域与内存

本周建议用时：8–10 小时。概念比前几周密，超时就多留几天。目标是建立一幅能用的图：变量活在哪里、名字和对象是什么关系、`new` 来的内存谁负责还。

## 本周目标

- 能画出「变量、地址、指针」：`&` 取地址，`*` 取出指针指向的值。
- 能用引用给变量起别名，会写通过引用修改调用者变量的函数。
- 能判断一个名字在哪一段大括号里有效。
- 见过 `new` / `delete` 和 `new[]` / `delete[]`，知道它们必须成对出现。
- 记住：第 14 周会用智能指针替代手写 `delete`。本周先理解手动管理是什么感觉。

## 先读这些

精读：

- [LearnCpp 12.1–12.8](https://www.learncpp.com/cpp-tutorial/introduction-to-compound-data-types/)：引用和指针的前半。12.3–12.6 是引用，12.7–12.8 是指针。
- [LearnCpp 7.1–7.5](https://www.learncpp.com/cpp-tutorial/compound-statements-blocks/)：块、局部变量、遮蔽。
- [LearnCpp 19.1–19.2](https://www.learncpp.com/cpp-tutorial/dynamic-memory-allocation-with-new-and-delete/)：`new` 与 `delete`。
- 《C++ Primer》2.3–2.4 中指针和引用的部分。

选读：

- [LearnCpp 12.9–12.11](https://www.learncpp.com/cpp-tutorial/pointers-and-const/)：指针和 `const` 的组合。看晕了就先放下，练习没用到那么多组合。
- [LearnCpp 20.2](https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/)：栈和堆分别是什么。

## 概念笔记

普通变量直接存值。指针存的是另一个对象的地址。

```cpp
int value = 42;
int* pointer = &value;
std::cout << *pointer << "\n";  // 42
*pointer = 100;                 // value 也变成 100
```

没有指向任何对象的指针写成 `nullptr`。对 `nullptr` 做 `*` 是严重错误。使用之前要判断。

引用是已有对象的另一个名字，声明时必须绑定，之后不能改绑到别的对象：

```cpp
int value = 3;
int& alias = value;
alias = 6;  // value 变成 6
```

函数参数写成 `int&` 时，函数里的修改会影响调用者。只是读取、又不想拷贝时，写成 `const T&`。你在第 4、5 周已经这样传递过数组和字符串。

作用域：名字从声明处开始，到包住它的那对大括号结束。内层可以声明一个同名变量，挡住外层的那个，这叫遮蔽。不要返回局部变量的地址或引用，函数结束后那块内存就不再属于你。

动态内存：

```cpp
int* one = new int{42};
delete one;
one = nullptr;

int* many = new int[3]{};
delete[] many;
many = nullptr;
```

`new` 配 `delete`，`new[]` 配 `delete[]`。配对错了是未定义行为。本周练习的起步代码已经把释放写好，请保持释放仍然发生，不要为了「先跑通」删掉 `delete`。

## 练习

| 文件 | 你要做什么 | 完成 |
| --- | --- | --- |
| [ex01-pointers.cpp](ex01-pointers.cpp) | 通过指针读和改 | - [ ] |
| [ex02-references.cpp](ex02-references.cpp) | 用引用修改调用者的变量 | - [ ] |
| [ex03-scope.cpp](ex03-scope.cpp) | 观察遮蔽，把变量放进正确的块 | - [ ] |
| [ex04-new-delete.cpp](ex04-new-delete.cpp) | 在已经配对的 new[]/delete[] 之间填上数据 | - [ ] |

## 自测

1. `&` 和 `*` 用在指针上时，各做什么？
2. 引用和指针有一个你能说清的差别。
3. `new int[3]` 为什么不能用 `delete` 释放？

## 复盘（用自己的话写）

- 这周最清楚的一点：
- 还模糊的一点：
- 我画过的一张「指针指向谁」的草图（用文字描述）：
