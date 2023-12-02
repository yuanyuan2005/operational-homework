//设某学生的某门课总评成绩由两部分组成：平时成绩和期末成绩，其中平时成绩占30% ，期末成绩占70% 。
// 编写一个程序, 要求通过键盘输入该学生的某门课的平时成绩和期末成绩，屏幕输出该学生的这门课的总评成绩（保留两位小数）。
#include <stdio.h>    

int main()
{
    float a, b;
    float score;
    scanf("%f%f", &a, &b);
    score = a * 0.3 + b * 0.7;
    printf("总评=%.2lf\n", score);
    return 0;
}