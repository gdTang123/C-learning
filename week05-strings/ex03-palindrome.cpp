// 练习：回文
//
// 正着读和倒着读一样，就是回文。本练习只使用英文和空字符串。
// 空字符串算回文。比较时区分大小写："Aa" 不是回文。
// 不要跳过空格： "a a" 是回文，"ab a" 不是。
//
// 目标：完成 is_palindrome。
//
// 期望：程序打印「回文判断正确」。

#include <iostream>
#include <string>

bool is_palindrome([[maybe_unused]] const std::string& text)
{
    // TODO: 判断 text 是不是回文。
    return false;
}

int main()
{
    std::cout << std::boolalpha;

    const bool ok = is_palindrome("") && is_palindrome("a") && is_palindrome("aba") &&
                    is_palindrome("abba") && is_palindrome("a a") && !is_palindrome("abc") &&
                    !is_palindrome("ab") && !is_palindrome("Aa");

    if (ok)
    {
        std::cout << "回文判断正确\n";
    }
    else
    {
        std::cout << "还有用例不符合预期\n";
        std::cout << "  空串 " << is_palindrome("") << "（期望 true）\n";
        std::cout << "  a    " << is_palindrome("a") << "（期望 true）\n";
        std::cout << "  aba  " << is_palindrome("aba") << "（期望 true）\n";
        std::cout << "  abba " << is_palindrome("abba") << "（期望 true）\n";
        std::cout << "  a a  " << is_palindrome("a a") << "（期望 true）\n";
        std::cout << "  abc  " << is_palindrome("abc") << "（期望 false）\n";
        std::cout << "  ab   " << is_palindrome("ab") << "（期望 false）\n";
        std::cout << "  Aa   " << is_palindrome("Aa") << "（期望 false）\n";
    }
    return 0;
}
