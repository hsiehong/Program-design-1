#include<stdio.h>
main()
{
    printf("��J(a,b,c):\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("��X:\n");

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
        printf("��X:\n");
        printf("a���o��0\n");
    }
    system("PAUSE");
    return 0;
}
