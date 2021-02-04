#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define 判断是否为小写字母 islower//是则返回非 0 值，否则返回 0
#define 判断是否为大写字母 isupper//是则返回非 0 值，否则返回 0
#define 乘方函数 pow//pow(x,y) 返回 x 的 y 次幂
int 判断字母的位置(char X)//判断字母的位置
{
    int Y = 0;
    switch (X)
    {
     case 'A':Y = 1; break;
     case 'a':Y = 1; break;
     case 'B':Y = 2; break;
     case 'b':Y = 2; break;
     case 'C':Y = 3; break;
     case 'c':Y = 3; break;
     case 'D':Y = 4; break;
     case 'd':Y = 4; break;
     case 'E':Y = 5; break;
     case 'e':Y = 5; break;
     case 'F':Y = 6; break;
     case 'f':Y = 6; break;
     case 'G':Y = 7; break;
     case 'g':Y = 7; break;
     case 'H':Y = 8; break;
     case 'h':Y = 8; break;
     case 'I':Y = 9; break;
     case 'i':Y = 9; break;
     case 'J':Y = 10; break;
     case 'j':Y = 10; break;
     case 'K':Y = 11; break;
     case 'k':Y = 11; break;
     case 'L':Y = 12; break;
     case 'l':Y = 12; break;
     case 'M':Y = 13; break;
     case 'm':Y = 13; break;
     case 'N':Y = 14; break;
     case 'n':Y = 14; break;
     case 'O':Y = 15; break;
     case 'o':Y = 15; break;
     case 'P':Y = 16; break;
     case 'p':Y = 16; break;
     case 'Q':Y = 17; break;
     case 'q':Y = 17; break;
     case 'R':Y = 18; break;
     case 'r':Y = 18; break;
     case 'S':Y = 19; break;
     case 's':Y = 19; break;
     case 'T':Y = 20; break;
     case 't':Y = 20; break;
     case 'U':Y = 21; break;
     case 'u':Y = 21; break;
     case 'V':Y = 22; break;
     case 'v':Y = 22; break;
     case 'W':Y = 23; break;
     case 'w':Y = 23; break;
     case 'X':Y = 24; break;
     case 'x':Y = 24; break;
     case 'Y':Y = 25; break;
     case 'y':Y = 25; break;
     case 'Z':Y = 26; break;
     case 'z':Y = 26; break;
    }
    return Y;
}
void 判断输入的成分(char a[][10])//判断输入的成分
{
    int b = 0;
    while (a[0][b] != '\0')
    {
        if ((a[0][b] >= 'A' && a[0][b] <= 'Z') || (a[0][b] >= 'a' && a[0][b] <= 'z'))
        {
            a[1][0]++;//字母
        }
        else if (a[0][b] >= '0' && a[0][b] <= '9')
        {
            a[1][1]++;//数字
        }
        else
        {
            a[1][2]++;//其他
        }
        b++;
    }
}
int 字符串转整数型(char 输入的字符串)
{
    int 输入字符串的ASCII值 = (int)输入的字符串;
    int 输入字符串变成的数字 = -1;
    switch (输入字符串的ASCII值)
    {
     case 48:输入字符串变成的数字 = 0; break;
     case 49:输入字符串变成的数字 = 1; break;
     case 50:输入字符串变成的数字 = 2; break;
     case 51:输入字符串变成的数字 = 3; break;
     case 52:输入字符串变成的数字 = 4; break;
     case 53:输入字符串变成的数字 = 5; break;
     case 54:输入字符串变成的数字 = 6; break;
     case 55:输入字符串变成的数字 = 7; break;
     case 56:输入字符串变成的数字 = 8; break;
     case 57:输入字符串变成的数字 = 9; break;
    }
    return 输入字符串变成的数字;
}
int main()
{
    char 输入的成分[2][10] = { 0, 0 };//输入的成分
    /*
     数字和字母的混合
     字母的数量，数字的数量，其他的数量
     */
    int 数字的位置 = 0;//数字的位置
    int 字母的位置 = 0;//字母的位置
    int 输出数字的数组[10] = { 0 };//输出数字的数组
    int 判断数字的循环 = 0;//判断数字的循环
    int 判断字母的循环_1 = 0;//判断字母的循环_1
    int 判断字母的循环_2 = 0;//判断字母的循环_2
    int 转化进制用的数 = 0;//转化进制用的数
    int 输出字母的数组[10] = { 0 };//输出字母的数组
    gets_s(输入的成分[0], 10);
    判断输入的成分(输入的成分);
    printf("你所输入的字符串中：\n");
    int 字母的数量 = (int)输入的成分[1][0];//字母的数量
    printf("    字母的数量：%d \n", 字母的数量);
    int 数字的数量 = (int)输入的成分[1][1];//数字的数量
    printf("    数字的数量：%d \n", 数字的数量);
    if (输入的成分[1][2] != 0)
    {
        printf("这程序不是用来给你玩的！\n");
    }
    else
    {
        for (int b = 0; 输入的成分[0][b] != '\0'; b++)
        {
            if ((输入的成分[0][b] >= 'A' && 输入的成分[0][b] <= 'Z') || (输入的成分[0][b] >= 'a' && 输入的成分[0][b] <= 'z'))//字母
            {
                判断字母的循环_1 = b;
                while (判断是否为小写字母(输入的成分[0][判断字母的循环_1]) != 0 || 判断是否为大写字母(输入的成分[0][判断字母的循环_1]) != 0)//循环到不是字母
                {
                    判断字母的循环_1++;
                    转化进制用的数++;
                }
                if (判断字母的循环_2 == 0)
                {
                    输出字母的数组[b] = 判断字母的位置(输入的成分[0][b]) * (int)乘方函数(26, 转化进制用的数 - 1);
                    判断字母的循环_2 = 1;
                }
                else
                {
                    输出字母的数组[字母的位置] = 输出字母的数组[字母的位置] + 判断字母的位置(输入的成分[0][b]) * (int)乘方函数(26, 转化进制用的数 - 1);
                }
                转化进制用的数 = 0;
                数字的位置++;
                判断数字的循环 = 0;
            }
            else if (输入的成分[0][b]>= '0' && 输入的成分[0][b] <= '9')//数字
            {
                if (判断数字的循环 == 0)
                {
                    输出数字的数组[数字的位置] = 字符串转整数型(输入的成分[0][b]);
                    判断数字的循环 = 1;
                }
                else
                {
                    输出数字的数组[数字的位置] = 输出数字的数组[数字的位置] * 10 + 字符串转整数型(输入的成分[0][b]);
                }
                判断字母的循环_2 = 0;
                字母的位置++;
            }
            else
            {
                printf("出错！\n");
                数字的位置++;
                字母的位置++;
                判断数字的循环 = 0;
                判断字母的循环_2 = 0;
            }
        }
        int c_1 = 0;//循环完成后，等于最后一个字母的位置
        for (int c_2 = 0; c_2 <10; c_2++)//判断哪几个位置有字母
        {
            if (输出字母的数组[c_2] != 0)
            {
                c_1=c_2;
            }
        }
        int d_1 = 0;//循环完成后，等于最后一个数字的位置
        for (int d_2 = 0; d_2 <10; d_2++)//判断哪几个位置有数字
        {
            if (输出数字的数组[d_2] != 0)
            {
                d_1=d_2;
            }
        }
        printf("    字母为：");
        for (int e = 0; e<=c_1; e++)
        {
            if (输出字母的数组[e] != 0)
            {
                printf("%d", 输出字母的数组[e]);
            }
        }
        printf("\n");
        printf("    数字为：");
        for (int f = 0; f<=d_1; f++)
        {
            if (输出数字的数组[f] != 0)
            {
                printf("%d", 输出数字的数组[f]);
            }
        }
    }
    return 0;
}