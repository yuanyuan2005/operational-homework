//�Ӽ�������һ����д��ĸ��Ҫ�������Сд��ĸ��
//ת����ʽ��Сд��ĸ = ��д��ĸ + 32
#include<stdio.h>  
int main()
{
    char majuscule;
    char minuscule;
    scanf("%c", &majuscule);
    minuscule = majuscule + 32;
    printf("%c\n", minuscule);
    return 0;
}