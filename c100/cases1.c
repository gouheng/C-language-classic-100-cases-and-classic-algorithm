/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列
*/
// cases 1
#include <stdio.h>
int main()
{
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            for(int k=1;k<5;k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    printf("%d%d%d\n",i,j,k);
                }
            }
        }
    }
    return 0;
}
/*
为了尽量减少不必要的循环，做了如下的小优化*/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t i; // 百位
    uint32_t j; // 十位
    uint32_t k; // 个位
    
    for (i=1; i<5; i++)
    {
        for (j=1; j<5; j++)
        {
            // 百位与十位重复
            // 跳过当前十位
            if (j==i)
            {
                continue;
            }
            
            for (k=1; k<5; k++)
            {
                // 个位与百位或十位重复
                // 跳过当前个位
                if (k==j || k==i)
                {
                    continue;
                }
                
                printf("%u,%u,%u\n", i, j, k);
            }
        }
    }
}