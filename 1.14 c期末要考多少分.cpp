//��C�γ̵�ƽʱ����ĩ�����ֱ�ռ�����ɼ���30% ��70% ��
//�Ӽ�������ƽʱ�ɼ����������ĩC�����ɼ�����Ҫ�����ٷֲ��ܼ���
//Ҫ���1λС��
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