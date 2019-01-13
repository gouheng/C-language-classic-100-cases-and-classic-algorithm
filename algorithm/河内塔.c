// 汉诺塔：汉诺塔（又称河内塔）问题是源于印度一个古老传说的益智玩具。大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一
//coder: heng
#include <stdio.h>
void hanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("Move sheet %d from %c to%c\n",n,,A,C);
    }
    else 
    {
        hanoi(n-1,A,C,B);
        printf("Move sheet%d from %c to %c\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
)
int main()
{
    int n; 
    printf("请输入盘数：\n");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}