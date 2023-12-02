//设C课程的平时与期末机考分别占总评成绩的30% 和70% ，
//从键盘输入平时成绩，请计算期末C机考成绩至少要考多少分才能及格，
//要求带1位小数
#include<stdio.h>  
int main()
{
    float a;
    float passinggrade;
    scanf("%f", &a);
    passinggrade = (60 - (a * 0.3)) / 0.7;
    printf("%.1lf\n", passinggrade);
    return 0;
}