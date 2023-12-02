//从键盘输入2个整数，计算其余数并输出。
#include<stdio.h>  
int main()
{
    int a, b;
    int c;
    scanf("%d,%d", &a, &b);
    c = a % b;
    printf("%d\n", c);
    return 0;
}