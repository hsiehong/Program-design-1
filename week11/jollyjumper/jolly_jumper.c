#include<stdio.h>
main(){
    //freopen("mm22_jolly.in","r",stdin);
    //freopen("GG.txt","w",stdout);
    int ncase,tcase;
    int num,a,b,f,dif,g,temp;
    scanf("%d",&ncase);//測資筆數
    while(ncase--){
       scanf("%d ",&tcase);//每筆測資數目
       int arr[tcase];
       //存入陣列
       for(b=0;b<tcase;b++){
            scanf("%d",&arr[b]);
       }
       int flag[tcase-1];//標記陣列，有tcase-1個值
       for(b=0;b<tcase-1;b++)flag[b]=b+1;//標記陣列設為1~tcase-1
       int diff[tcase-1];//差值陣列，有tcase-1個值
       //計算差值陣列，有tcase-1個值
       for(b=0;b<tcase-1;b++){
            dif=arr[b]-arr[b+1];
            if(dif<0)dif=-dif;
            diff[b]=dif;
       }
        //將差值陣列排序
       for(b=tcase-2;b>0;b--){
            for(a=0;a<b;a++){
                if(diff[a]>diff[a+1]){
                    temp=diff[a];
                    diff[a]=diff[a+1];
                    diff[a+1]=temp;
                }
            }
       }
       //對照差值陣列與標記陣列，全部相同則為jolly
       f=0;
       for(b=0;b<tcase-1;b++){
          if(flag[b]==diff[b])continue;
          else {
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
