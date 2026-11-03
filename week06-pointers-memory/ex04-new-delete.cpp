// 练习：动态内存
//
// 单个对象用 new / delete，数组用 new[] / delete[]。
// 起步代码里的释放已经配对，请保留。不要把 delete 改成注释。
//
// 目标：
//   1. 读懂 demo_single_int，能说出每一行在做什么。
//   2. 完成 fill_three，把三个元素设为 10、20、30。
//   3. 思考：如果把 delete[] 写成 delete，会有什么问题？把答案用注释写在 main 末尾。
//
// 期望输出：
//   单个整数：42
//   三个整数：10 20 30

#include <iostream>

void demo_single_int()
{
    int* p = new int{42};
    std::cout << "单个整数：" << *p << "\n";
    delete p;
    p = nullptr;
}

void fill_three([[maybe_unused]] int* arr)
{
    // TODO: 把 arr[0]、arr[1]、arr[2] 设为 10、20、30。
}

int main()
{
    demo_single_int();

    int* arr = new int[3]{};
    fill_three(arr);
    std::cout << "三个整数：";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;
    arr = nullptr;

    // TODO: 在这里用注释回答：delete 和 delete[] 混用有什么问题？
    return 0;
}
