/*糶祘Αだ计案计块材︽计n块材︽n俱
计礛块ㄢ︽材︽琌计い计材︽琌计い案计计ぇ
丁ノ筳秨*/

#include<stdio.h>
main()
{

    int ncase,a,k=0;
    int x,y;//案皚计ヘ

    while(1)
    {
        x=0;y=0;
        scanf("%d",&ncase);
        if(ncase!=0){
            if(k!=0){
                printf("\n");
            }k++;
            x=0;
            y=0;
            int allcase[ncase];
            int oddcase[200];
            int evencase[200];
            for(a=0; a<ncase; a++)
            {
                scanf("%d",&allcase[a]);
            }
            for(a=0; a<ncase; a++)
            {
                if(allcase[a]%2!=0)
                {
                    oddcase[x]=allcase[a];
                    x++;
                }
                else
                {
                    evencase[y]=allcase[a];
                    y++;
                }
            }
            for(a=0; a<x; a++)
            {
                printf("%d ",oddcase[a]);
                if(a!=x-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
            for(a=0; a<y; a++)
            {
                printf("%d",evencase[a]);
                if(a!=y-1)
                {
                    printf(" ");
                }
            }
        printf("\n");}
    }
    return 0;
}
