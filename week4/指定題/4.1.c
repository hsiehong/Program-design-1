#include<stdio.h>

//讀入三個正整數a,b,c。計算並印出其中的最小值

int main()
{
    printf("輸入三數(a,b,c):\n");
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    printf("輸出:\n");

    switch(a,b,c)
    {
    case 'a>b&&b>c':
        printf("%d",c);
        break;
    case 'b>a&&a>c':
        printf("%d",c);
        break;
    case 'a>c&&c>b':
        printf("%d",b);
        break;
    case 'c>a&&a>b':
        printf("%d",b);
        break;
    case 'b>c&&c>a':
        printf("%d",a);
        break;
    case 'c>b&&b>a':
        printf("%d",a);
        break;
    default:
        printf("請輸入相異三數\n");
    }
}
