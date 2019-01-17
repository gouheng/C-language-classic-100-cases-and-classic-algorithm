/*
题目：学习使用external的用法。

程序分析：无。

程序源代码：
*/
#include <stdio.h>
int a,b,c;
void add()
{
    int a;
    a=3;
    c=a+b;
}
int main()
{
    a=b=4;
    add();
    printf("c 的值为 %d\n",c);
    return 0;
}