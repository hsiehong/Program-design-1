#include<stdio.h>

//�p��@�|��ƨ�U��ƩM

main()
{
    //printf("��J(�|���):\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d,s;
    int j,k,l;

    //printf("��X:\n");

    a=i/1000;
    j=i%1000;
    b=j/100;
    k=j%100;
    c=k/10;
    d=k%10;
    s=a+b+c+d;

    //printf("%d\n",s);
    return 0;

}
