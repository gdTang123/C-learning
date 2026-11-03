#include "book.h"

#include <iostream>

void AddressBook::add(const Contact& contact)
{
    // TODO: 把 contact 放进 contacts_。放进去之后，用 size() 就能看到人数增加。
    std::cout << "【待完成】还不能添加：" << contact.name() << "\n";
}

void AddressBook::list() const
{
    // TODO: 空表给一句说明；否则逐个打印姓名、电话、邮箱。
    std::cout << "【待完成】还不能列出。当前人数：" << contacts_.size() << "\n";
}

std::vector<Contact> AddressBook::find_by_name(const std::string& keyword) const
{
    // TODO: 收集姓名匹配的联系人。可以先做全名相等，再改成「姓名包含关键字」。
    std::cout << "【待完成】还不能查找：" << keyword << "\n";
    return {};
}

bool AddressBook::remove_by_name(const std::string& name)
{
    // TODO: 删除第一个姓名完全相等的联系人。没找到返回 false。
    // 提示：边遍历边 erase 时，注意迭代器失效。也可以先找到下标，再 erase。
    std::cout << "【待完成】还不能删除：" << name << "\n";
    return false;
}

bool AddressBook::save(const std::string& path) const
{
    // TODO: 把联系人写到 path。建议每行一个人，用 | 分隔姓名、电话、邮箱。
    // 写成功返回 true。打不开文件时返回 false。
    std::cout << "【待完成】还不能保存到 " << path << "\n";
    return false;
}

bool AddressBook::load(const std::string& path)
{
    // TODO: 从 path 读回联系人。建议先清空 contacts_，再逐行解析。
    // 文件不存在时返回 false，并留下清楚的提示。
    std::cout << "【待完成】还不能从 " << path << " 加载\n";
    return false;
}
