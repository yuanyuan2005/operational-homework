//������һ�������εĴ�ȳ����߳�m�ף�m�Ӽ������룬
// ��������ܳ�����24�ף������ȳ��������ԭ�������ƽ����
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