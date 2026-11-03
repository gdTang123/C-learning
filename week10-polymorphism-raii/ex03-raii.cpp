// 练习：RAII
//
// IntBuffer 在构造时 new[]，在析构时 delete[]。
// 拷贝被禁止，避免两个对象释放同一块内存。
// 这些配对和禁止拷贝的代码请保留。
//
// 目标：
//   1. 完成 at：下标越界时打印「下标越界」并返回 0；否则返回对应元素。
//   2. 完成 fill_demo：把缓冲区填成 0, 1, 2, ... 这样的数列。
//      可以使用 at 吗？at 返回的是副本，改它不会影响缓冲区。
//      所以你还需要一个能修改元素的途径：给类加一个 set(std::size_t, int)。
//      set 在越界时打印「下标越界」并什么都不改。
//
// 期望：程序打印「缓冲区正确」。

#include <cstddef>
#include <iostream>

class IntBuffer
{
public:
    explicit IntBuffer(std::size_t size)
        : data_{new int[size]{}}
        , size_{size}
    {
    }

    ~IntBuffer()
    {
        delete[] data_;
    }

    IntBuffer(const IntBuffer&) = delete;
    IntBuffer& operator=(const IntBuffer&) = delete;

    std::size_t size() const
    {
        return size_;
    }

    int at(std::size_t index) const
    {
        if (index >= size_)
        {
            std::cout << "下标越界\n";
            return 0;
        }
        // TODO: 返回下标 index 上的元素，而不是 0。
        return 0;
    }

private:
    int* data_;
    std::size_t size_;
};

void fill_demo([[maybe_unused]] IntBuffer& buffer)
{
    // TODO: 把每个位置设成它的下标。需要先给 IntBuffer 增加 set。
}

int main()
{
    IntBuffer buffer(4);
    fill_demo(buffer);

    const bool values_ok = buffer.at(0) == 0 && buffer.at(1) == 1 && buffer.at(2) == 2 && buffer.at(3) == 3;
    const int ignored = buffer.at(4);

    if (values_ok && ignored == 0)
    {
        std::cout << "缓冲区正确\n";
    }
    else
    {
        std::cout << "还不符合预期\n";
    }
    return 0;
}
