#include <iostream>
#include <bitset>
using namespace std;



int main()
{
    bool status;
    unsigned long quizeA = 0;   //保证至少有32个bit位

    quizeA |= 1UL << 27;    //27号学生通过测试
    status = quizeA & (1UL << 27);
    cout << status << endl;

    quizeA &= ~(1UL << 27); //27号学生未能通过测试
    status = quizeA & (1UL << 27);
    cout << status << endl;


    //使用bitset标准库完成等价工作
    bitset<30> quizeB;  //每个学生分配一位，每位都初始化为0

    quizeB.set(27); //第27位学生测试通过
    status = quizeB[27];
    cout << status << endl;

    quizeB.reset(27);   //第27位学生测试未通过
    status = quizeB[27];
    cout << status << endl;
    return 0;
}
