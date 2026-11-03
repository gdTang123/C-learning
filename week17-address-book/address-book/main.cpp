// 命令行通讯录的菜单。
//
// 编译和运行见本周 README。选 0 退出。
// 功能函数在 book.cpp 里，现在只会说「待完成」。
//
// 姓名、电话、邮箱先按不含空格的一个词来输入。
// 想支持带空格的姓名时，再把对应的 >> 改成 std::getline，并处理行尾残留的换行。

#include "book.h"

#include <iostream>
#include <limits>
#include <string>

namespace
{

void print_menu()
{
    std::cout << "\n通讯录\n";
    std::cout << "1 添加联系人\n";
    std::cout << "2 列出全部\n";
    std::cout << "3 按姓名查找\n";
    std::cout << "4 按姓名删除\n";
    std::cout << "5 保存到文件\n";
    std::cout << "6 从文件加载\n";
    std::cout << "0 退出\n";
    std::cout << "请选择：";
}

void clear_input()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

}  // namespace

int main()
{
    AddressBook book;
    const std::string path = "contacts.txt";

    while (true)
    {
        print_menu();

        int choice = 0;
        if (!(std::cin >> choice))
        {
            if (std::cin.eof())
            {
                std::cout << "\n再见。\n";
                return 0;
            }
            std::cout << "请输入数字选项。\n";
            clear_input();
            continue;
        }

        if (choice == 0)
        {
            std::cout << "再见。当前人数：" << book.size() << "\n";
            return 0;
        }

        if (choice == 1)
        {
            std::string name;
            std::string phone;
            std::string email;
            std::cout << "姓名 电话 邮箱（用空格分开）：";
            if (!(std::cin >> name >> phone >> email))
            {
                std::cout << "输入无效。\n";
                clear_input();
                continue;
            }
            book.add(Contact{name, phone, email});
            std::cout << "当前人数：" << book.size() << "\n";
        }
        else if (choice == 2)
        {
            book.list();
        }
        else if (choice == 3)
        {
            std::string keyword;
            std::cout << "查找关键字：";
            if (!(std::cin >> keyword))
            {
                std::cout << "输入无效。\n";
                clear_input();
                continue;
            }
            const std::vector<Contact> found = book.find_by_name(keyword);
            if (found.empty())
            {
                std::cout << "没有匹配的联系人。\n";
            }
            else
            {
                for (const Contact& contact : found)
                {
                    std::cout << contact.name() << " " << contact.phone() << " " << contact.email() << "\n";
                }
            }
        }
        else if (choice == 4)
        {
            std::string name;
            std::cout << "要删除的姓名：";
            if (!(std::cin >> name))
            {
                std::cout << "输入无效。\n";
                clear_input();
                continue;
            }
            if (book.remove_by_name(name))
            {
                std::cout << "已删除。当前人数：" << book.size() << "\n";
            }
            else
            {
                std::cout << "没有删除任何人。\n";
            }
        }
        else if (choice == 5)
        {
            if (book.save(path))
            {
                std::cout << "已保存到 " << path << "\n";
            }
        }
        else if (choice == 6)
        {
            if (book.load(path))
            {
                std::cout << "已加载。当前人数：" << book.size() << "\n";
            }
        }
        else
        {
            std::cout << "没有这个选项。\n";
        }
    }
}
