#include "greet.h"

std::string make_greeting(const std::string& name)
{
    const std::string who = name.empty() ? "同学" : name;
    return "你好，" + who + "！欢迎学习 CMake。";
}

// TODO: 在这里定义 add，返回两个整数的和。
