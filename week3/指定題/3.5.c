#include<stdio.h>

//��s�����A�p��ϥγּ̤ƥت�50�A10�A5�A1�w���Ӵꨬ���

main()
{
    printf("�п�J�@��1��100�����:\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d;
    int m,n;
    printf("��X:\n");

    a=i/50;
    m=i%50;
    b=m/10;
    n=m%10;
    c=n/5;
    d=n%5;
    printf("50:%d\n10:%d\n5:%d\n1:%d\n",a,b,c,d);
    system("PAUSE");

    return 0;
}
