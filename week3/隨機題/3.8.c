#include<stdio.h>
main()
{
    printf("輸入(a,b,c):\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("輸出:\n");

    if(a!=0)
    {
        if(b*b-4*a*c==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("輸出:\n");
        printf("a不得為0\n");
    }
    system("PAUSE");
    return 0;
}
