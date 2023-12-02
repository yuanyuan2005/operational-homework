//键盘输入一个以厘米为单位的长度，
// 转换为以英寸、英尺为单位的值输出（保留2位小数），
// 1英寸＝2.54cm，1英尺等于12英寸
#include<stdio.h>  
int main()
{
    float a;
    float b, c;
    scanf("%f", &a);
    b = a / 2.54;
    c = b / 12;
    printf("%.2lf厘米=%.2lf英寸=%.2lf英尺\n", a, b, c);
    return 0;
}