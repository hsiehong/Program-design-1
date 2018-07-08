#include<stdio.h>

main()
{
    //freopen("AR12.in","r",stdin);
    //freopen("QQ.txt","w",stdout);
    int m,x,a,b,temp;
    int arr[10000];
    scanf("%d",&m);
    while(m--)
    {
        x=0;
        //¿é¤J
        while(1)
        {
            scanf("%d",&arr[x]);
            if(arr[x]==-999)break;
            x++;
        }
        //for(a=0;a<x-1;a++)printf("%d\n",arr[a]);
        //±Æ§Ç
        for(a=x-1; a>0; a--)
        {
            for(b=0; b<a; b++)
            {
                if(arr[b]<arr[b+1])
                {
                    temp=arr[b+1];
                    arr[b+1]=arr[b];
                    arr[b]=temp;
                }
            }
        }
        //for(a=0;a<x-1;a++)printf("%d\n",arr[a]);
        int y=0,rarr[5000];
        int time[5000];
        for(a=0;a<5000;a++)time[a]=1;

        rarr[y]=arr[0];
        for(a=1; a<x; a++){
            if(rarr[y]!=arr[a]){
                y++;
                rarr[y]=arr[a];
            }
            else{
                time[y]++;
            }
        }for(a=0;a<=y;a++){
            printf("%d %d\n",rarr[a],time[a]);
        }

        if(m>0)printf("\n");
    }
    return 0;
}
