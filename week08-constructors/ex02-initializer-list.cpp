// 练习：成员初始化列表
//
// 下面的构造函数能编译，但它是先让成员默认初始化，再在函数体里赋值，
// 而且作者参数被丢掉了。
//
// 目标：
//   1. 改成成员初始化列表，函数体可以留空。
//   2. 把作者参数写进 author_。现在 author_ 会一直保持默认值「佚名」。
//
// 期望：程序打印「初始化列表正确」。

#include <iostream>
#include <string>

class Book
{
public:
    Book(const std::string& title, int pages, [[maybe_unused]] const std::string& author)
    {
        title_ = title;
        pages_ = pages;
        // TODO: 删掉上面的赋值，改成成员初始化列表，并把 author 写入 author_。
    }

    const std::string& title() const
    {
        return title_;
    }

    int pages() const
    {
        return pages_;
    }

    const std::string& author() const
    {
        return author_;
    }

private:
    std::string title_;
    int pages_ = 0;
    std::string author_ = "佚名";
};

int main()
{
    const Book book{"C++ Primer", 976, "Lippman"};
    const bool ok = book.title() == "C++ Primer" && book.pages() == 976 && book.author() == "Lippman";

    if (ok)
    {
        std::cout << "初始化列表正确\n";
    }
    else
    {
        std::cout << "还不符合预期\n";
    }
    return 0;
}
