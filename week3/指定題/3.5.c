#include<stdio.h>

//找零機器，計算使用最少數目的50，10，5，1硬幣來湊足整數

main()
{
    printf("請輸入一個1到100的整數:\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d;
    int m,n;
    printf("輸出:\n");

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
