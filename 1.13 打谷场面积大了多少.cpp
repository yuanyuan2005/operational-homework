//假设有一块正方形的打谷场，边长m米，m从键盘输入，
// 如果它的周长增加24米，这个打谷场的面积比原来大多少平方米
#include<stdio.h>  
int main()
{
    float m;
    float area;
    scanf("%f", &m);
    area = (m + 6) * (m + 6) - m * m;
    printf("%.0lf\n", area);
    return 0;
}