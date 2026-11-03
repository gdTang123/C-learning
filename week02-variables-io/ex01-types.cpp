// 练习：基本类型
//
// 目标：
//   1. 把 age、height_m、grade 改成一组说得通的数据。grade 是一个字符，例如 'A'。
//   2. 再声明一个 int，名字叫 year，表示你今年开始认真学习的年份，并打印它。
//   3. 把「是初学者」那一行的输出改成带文字说明的句子，例如打印 true 时旁边有解释。
//      布尔值如何显示成 true/false，看下面已经写好的 std::boolalpha。
//
// 运行后不需要输入。改完直接看输出是否是你想要的那几行。

#include <iostream>
#include <string>

int main()
{
    int age = 0;
    double height_m = 0.0;
    char grade = '?';
    bool is_beginner = true;
    std::string language = "C++";

    std::cout << std::boolalpha;
    std::cout << "年龄：" << age << "\n";
    std::cout << "身高（米）：" << height_m << "\n";
    std::cout << "自评等级：" << grade << "\n";
    std::cout << "是初学者：" << is_beginner << "\n";
    std::cout << "正在学习：" << language << "\n";

    // TODO: 在这里打印 year。先在上面把它声明出来。
    return 0;
}
