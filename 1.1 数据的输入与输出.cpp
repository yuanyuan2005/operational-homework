//从键盘输入多个数，再输出多个数，以逗号分隔，以换行表示输出结束
#include<stdio.h>  
int main()
{
    int a;
    float b;
    double c;
    char d;
    scanf("%d %f %lf %c", &a, &b, &c, &d);
    printf("%d,%.2f,%.8lf,%c\n", a, b, c, d);
    return 0;
}