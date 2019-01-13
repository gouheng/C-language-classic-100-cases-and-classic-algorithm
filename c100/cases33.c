/*
#include <stdio.h>
int main()
{
    int num = 0;
    for(int i=2;i<100;i++)
    {
        int cont =0;
        //int num =0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                cont++;
            }
        }
        if(cont==0)
        {
            printf("素数=%d\n",i);
            num++;
        }
    }
    printf("总共有%d个数\n",num);
    return 0;
}
#include <stdio.h>
#include <math.h>
int  main()
{
    int i,j;
    for(i=100;i<1000;i++)
    {
        int k=(int)sqrt((double)i);
        for(j=2;j<=k;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>k)//j<k
        {
            printf("%5d\t",i);
        }
    }
    return 0;
}
*/
//题目：判断一个数字是否为质数。
//程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
//程序源代码：

#include<stdio.h>
#include<math.h>

int main()
{
    int i, m, n=0;
    printf("输入一个大于1的自然数：\n");
    scanf("%d", &m);
    for(i=2; i<= floor(sqrt(m)+0.5); i++)
    {
        if (m%i == 0)
        {
            n += 1;
        }
    }

    if (n == 0)
    {
        printf("是质数\n");
    }
    else
    {
        printf("不是质数\n");
    }
    return 0;
}