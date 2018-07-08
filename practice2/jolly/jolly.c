#include<stdio.h>

main(){
    int ncase,num,a,temp,i,j,f;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        int arr[num],dif[num-1];
        int test[num-1];
        for(a=0;a<num-1;a++)test[a]=a+1;
        //for(a=1;a<num;a++)printf("%d",test[a]);
        for(a=0;a<num;a++)scanf("%d",&arr[a]);
        for(a=0;a<num-1;a++){
            temp=arr[a]-arr[a+1];
            if(temp<0)temp=-temp;
            dif[a]=temp;
        }
        //for(a=0;a<num-1;a++)printf("%d ",dif[a]);
        //®t­È°}¦C°µ±Æ§Ç
        for(i=num-2;i>0;i--){
            for(j=0;j<i;j++){
                if(dif[j]>dif[j+1]){
                    temp=dif[j+1];
                    dif[j+1]=dif[j];
                    dif[j]=temp;
                }
            }
        }
        //for(a=0;a<num-1;a++)printf("%d %d\n",dif[a],test[a]);
        f=0;
        for(a=0;a<num-1;a++){
            if(dif[a]!=test[a]){
                f++;
                break;
            }
        }
        if(f==0)printf("Jolly");
        else printf("Not jolly");
        if(ncase>0)printf("\n");
    }
    return 0;
}
