#include<stdio.h>

main(){
    //freopen("test.txt","w",stdout);
    int ncase,x,t,i,j,temp;
    int arr[100],narr[100],times[100];
    scanf("%d",&ncase);
    while(ncase--){
        x=0;
        while(1){
            scanf("%d",&arr[x]);
            if(arr[x]==-999)break;
            x++;
        }//第X個是-999
        //for(t=0;t<x;t++)printf("%d ",arr[t]);
        //將原始陣列由大到小作排列
        for(i=x-1;i>0;i--){
            for(j=0;j<i;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        //for(t=0;t<x;t++)printf("%d ",arr[t]);
        int in=0,it=0;
        for(t=0;t<100;t++){
            times[t]=1;
            narr[t]=0;
        }
        narr[0]=arr[0];
        for(t=1;t<x;t++){
            if(narr[in]!=arr[t]){
                in++;
                narr[in]=arr[t];
            }
            else{
                times[in]++;
            }
        }
        for(t=0;t<=in;t++){
            printf("%d %d",narr[t],times[t]);
            if(t<in)printf("\n");
        }
        if(ncase>0)printf("\n\n");
    }
    return 0;
}
