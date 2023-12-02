//王小二同学是一个聪明的孩子，他到超市去买东西，设苹果3.5元 / 公斤，香蕉4.2元 / 公斤，
// 他买了a公斤苹果，b公斤香蕉。a和b从键盘输入，请计算应该付多少钱？
#include <stdio.h>    
int main()
{
    float a, b;
    float sum;
    scanf("%f%f", &a, &b);
    sum = a * 3.5 + b * 4.2;
    printf("%.1f元\n", sum);
    return 0;
}