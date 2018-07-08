#include<stdio.h>

//計算一四位數其各位數和

main()
{
    //printf("輸入(四位數):\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d,s;
    int j,k,l;

    //printf("輸出:\n");

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
