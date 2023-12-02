//从键盘输入华氏温度，将它转换为摄氏温度并输出（保留2位小数）。
//转换公式：c = 5÷9×(f - 32)
#include<stdio.h>  
int main()
{
    float f;
    float c;
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("%.2lf\n", c);
    return 0;
}