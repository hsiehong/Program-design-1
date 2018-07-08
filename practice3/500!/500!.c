#include<stdio.h>
#include<string.h>
#define LEN 10000

main(){
    int num,i,j;
    int arr[LEN];
    while(scanf("%d",&num)!=EOF){
        for(i=0;i<LEN;i++)arr[i]=0;
        arr[0]=1;
        for(i=2;i<=num;i++){
            for(j=0;j<LEN;j++){
                arr[j]*=i;
            }
            for(j=0;j<LEN;j++){
                arr[j+1]+=arr[j]/10;
                arr[j]%=10;
            }
        }
        printf("%d!\n",num);
        for(i=LEN-1;i>=0;i--)if(arr[i])break;
        for(;i>=0;i--)printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
