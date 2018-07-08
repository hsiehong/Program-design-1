/*寫一個程式分奇數偶數，輸入的第一行為數列的長度n。輸入的第二行為n個整
數，然後輸出兩行。第一行是數列中的奇數，第二行是數列中的偶數。數字之
間用空格隔開。*/

#include<stdio.h>
main()
{

    int ncase,a,k=0;
    int x,y;//奇偶陣列個別數目
    //freopen("EvenOrOdd.in","r",stdin);
    //freopen("evenOrOdd_out.out","w",stdout);
    while(1)
    {
        x=0;y=0;
        scanf("%d",&ncase);
            if(ncase==0){
                break;
            }
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
                printf("%d",oddcase[a]);
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
            printf("\n");
    }
    return 0;
}
