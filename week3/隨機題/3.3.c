#include<stdio.h>

//�p��@�|��ƨ�U��ƩM

int main()
{
    //printf("��J(�|���):\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d;
    //printf("��X:\n");
    a=i/1000;
    b=i%1000/100;
    c=i%1000%100/10;
    d=i%1000%100%10;
    printf("%d\n",a+b+c+d);
    return 0;

}
