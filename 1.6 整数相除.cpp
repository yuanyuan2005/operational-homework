//键盘上输入2个整数，然后在屏幕上输出这2数之商
#include<stdio.h>  
int main()
{
    int a, b;
    int sum;
    scanf("%d%d", &a, &b);
    sum = a / b;
    printf("%d\n", sum);
    return 0;
}