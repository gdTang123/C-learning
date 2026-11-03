// 练习：用容器保存所有权
//
// Toy 的构造和析构会自己说话。把 unique_ptr 放进 vector 之后，
// 不要对 Toy 使用 delete。vector 销毁时会销毁 unique_ptr，unique_ptr 再销毁 Toy。
//
// 目标：
//   1. 再放入「皮球」和「风筝」。
//   2. 遍历盒子，对每个玩具调用 play()。
//   3. 确认程序结束前能看到三行「扔掉玩具 ...」，而且源码里没有 delete。
//
// 期望输出：
//   做出玩具 积木
//   做出玩具 皮球
//   做出玩具 风筝
//   玩 积木
//   玩 皮球
//   玩 风筝
//   扔掉玩具 积木
//   扔掉玩具 皮球
//   扔掉玩具 风筝
//
// 扔掉的顺序应与创建顺序一致，因为 vector 按顺序析构元素。

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Toy
{
public:
    explicit Toy(const std::string& name)
        : name_{name}
    {
        std::cout << "做出玩具 " << name_ << "\n";
    }

    ~Toy()
    {
        std::cout << "扔掉玩具 " << name_ << "\n";
    }

    void play() const
    {
        std::cout << "玩 " << name_ << "\n";
    }

private:
    std::string name_;
};

int main()
{
    std::vector<std::unique_ptr<Toy>> box;
    box.push_back(std::make_unique<Toy>("积木"));

    // TODO: 放入皮球和风筝，并逐个 play。
    return 0;
}
