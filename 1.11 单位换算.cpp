//��������һ��������Ϊ��λ�ĳ��ȣ�
// ת��Ϊ��Ӣ�硢Ӣ��Ϊ��λ��ֵ���������2λС������
// 1Ӣ�磽2.54cm��1Ӣ�ߵ���12Ӣ��
#include<stdio.h>  
int main()
{
    float a;
    float b, c;
    scanf("%f", &a);
    b = a / 2.54;
    c = b / 12;
    printf("%.2lf����=%.2lfӢ��=%.2lfӢ��\n", a, b, c);
    return 0;
}