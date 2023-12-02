#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入一个表达式（要求以多个变量的形式），输出该表达式（操作数与操作符之间有1个空格作为分隔）
#include<stdio.h>  
int main()
{
    int a;
    char b;
    int c;
    scanf("%d%c%d", &a, &b, &c);
    printf("%d %c %d =\n", a, b, c);
    return 0;
}