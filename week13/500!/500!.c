#include<stdio.h>
#define MAX 5000

main()
{
    //freopen("623.in","r",stdin);
    //freopen("helloo.txt","w",stdout);
    int num,i,j,temp;
    int mul[MAX];
    while((scanf("%d",&num))!=EOF)
    {
        for(i=1; i<MAX; i++)mul[i]=0;
        mul[0]=1;
        for(i=2;i<=num;i++){
            for(j=0;j<MAX;j++){
                mul[j]*=i;
            }
            for(j=0;j<MAX;j++){
                mul[j+1]+=mul[j]/10;
                mul[j]%=10;
            }
        }
        /*while(num>1)
        {
            num--;
            //printf("%d\n",num);
            for(i=0; i<=MAX; i++){
                mul[i]=mul[i]*num;
            }
            //處理進位
            for(i=0; i<MAX; i++)
            {
                mul[i+1]+=mul[i]/10;
                mul[i]%=10;
            }
        printf("%d\n",num);
        }*/
        printf("%d!\n",num);
        for(i=MAX-1; i>=0; i--)if(mul[i]!=0)break;
        for(; i>=0; i--)printf("%d",mul[i]);
        printf("\n");
    }
    return 0;
}
