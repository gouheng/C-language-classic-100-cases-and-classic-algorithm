/*
题目：学习使用按位取反~。
程序分析：~0=1; ~1=0;
程序源代码：
*/
#include <stdio.h>
int main()
{
    int a,b;
    a=234;
    b=~a;
    printf("a 的按位取反值为（十进制） %d \n",b);
    a=~a;
    printf("a 的按位取反值为（十六进制） %x \n",a);
    return 0;
}