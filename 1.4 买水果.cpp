//��С��ͬѧ��һ�������ĺ��ӣ���������ȥ��������ƻ��3.5Ԫ / ����㽶4.2Ԫ / ���
// ������a����ƻ����b�����㽶��a��b�Ӽ������룬�����Ӧ�ø�����Ǯ��
#include <stdio.h>    
int main()
{
    float a, b;
    float sum;
    scanf("%f%f", &a, &b);
    sum = a * 3.5 + b * 4.2;
    printf("%.1fԪ\n", sum);
    return 0;
}