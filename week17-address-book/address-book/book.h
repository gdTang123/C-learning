#ifndef CPP_LEARNING_WEEK17_BOOK_H
#define CPP_LEARNING_WEEK17_BOOK_H

#include "contact.h"

#include <cstddef>
#include <string>
#include <vector>

// 通讯录。main 只调用这些函数，不直接碰 vector。
class AddressBook
{
public:
    void add(const Contact& contact);
    void list() const;
    std::vector<Contact> find_by_name(const std::string& keyword) const;
    bool remove_by_name(const std::string& name);
    bool save(const std::string& path) const;
    bool load(const std::string& path);

    std::size_t size() const
    {
        return contacts_.size();
    }

private:
    std::vector<Contact> contacts_;
};

#endif
