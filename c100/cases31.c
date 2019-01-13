/*
题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
*/
#include<stdio.h>
int main()
{
    char letter,letter2;
    printf("Please enter a letter:\n");//
    letter = getchar();
    getchar();
    switch(letter)
    {
        case 'm':
            printf("Monday\n");
            break;
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday\n");
            break;
        case 't':
            printf("Please enter the second\n");
            scanf("%c",&letter2);
            if(letter2=='u'){printf("tuesday\n");break;}
            if(letter2=='h'){printf("thursday\n");break;}
        case 's':
            printf("Please enter the second\n");
            scanf("%c",&letter2);
            if(letter2=='a'){printf("saturday\n");break;}
            if(letter2=='u'){printf("sunday\n");break;}
        default :
            printf("error\n");break;
    }
    return 0;
}