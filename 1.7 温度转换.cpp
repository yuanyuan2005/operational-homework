//�Ӽ������뻪���¶ȣ�����ת��Ϊ�����¶Ȳ����������2λС������
//ת����ʽ��c = 5��9��(f - 32)
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