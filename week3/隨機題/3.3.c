#include<stdio.h>

//計算一四位數其各位數和

int main()
{
    //printf("輸入(四位數):\n");
    int i;
    scanf("%d",&i);
    int a,b,c,d;
    //printf("輸出:\n");
    a=i/1000;
    b=i%1000/100;
    c=i%1000%100/10;
    d=i%1000%100%10;
    printf("%d\n",a+b+c+d);
    return 0;

}
