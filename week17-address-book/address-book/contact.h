#ifndef CPP_LEARNING_WEEK17_CONTACT_H
#define CPP_LEARNING_WEEK17_CONTACT_H

#include <string>

// 一个联系人。数据保持私有，外面通过函数读取。
class Contact
{
public:
    Contact() = default;
    Contact(const std::string& name, const std::string& phone, const std::string& email);

    const std::string& name() const
    {
        return name_;
    }

    const std::string& phone() const
    {
        return phone_;
    }

    const std::string& email() const
    {
        return email_;
    }

    // TODO: 如果菜单里要修改电话，在这里声明一个函数，并在 contact.cpp 里定义。

private:
    std::string name_;
    std::string phone_;
    std::string email_;
};

#endif
