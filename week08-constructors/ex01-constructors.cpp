// 练习：构造函数
//
// 目标：
//   1. 读懂已经写好的两参数构造函数。它负责在对象创建时写入标题和页数。
//   2. 如果传入的页数小于 0，把页数记为 0。这个规则还没写。
//   3. 无参构造要保留，让「未命名」的书仍然能创建。
//
// 期望：程序打印「构造函数正确」。

#include <iostream>
#include <string>

class Book
{
public:
    Book() = default;

    Book(const std::string& title_in, int pages_in)
    {
        title = title_in;
        pages = pages_in;
        // TODO: 如果 pages_in 小于 0，把 pages 改成 0。
    }

    std::string title = "未命名";
    int pages = 0;
};

int main()
{
    const Book unnamed;
    const Book primer{"C++ Primer", 976};
    const Book broken{"坏数据", -20};

    const bool ok = unnamed.title == "未命名" && unnamed.pages == 0 &&
                    primer.title == "C++ Primer" && primer.pages == 976 &&
                    broken.title == "坏数据" && broken.pages == 0;

    if (ok)
    {
        std::cout << "构造函数正确\n";
    }
    else
    {
        std::cout << "还不符合预期\n";
        std::cout << unnamed.title << " / " << unnamed.pages << "\n";
        std::cout << primer.title << " / " << primer.pages << "\n";
        std::cout << broken.title << " / " << broken.pages << "\n";
    }
    return 0;
}
