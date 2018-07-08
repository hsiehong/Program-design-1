hh051125768hh
#include<stdio.h>

main(){
    while(1){
        int ncase;
        scanf("%d",&ncase);
        if(ncase==0){
            break;
        }
        int i,j;
        while(ncase--){
            int array[ncase];
            int a,temp;
            for(a=0;a<ncase;a++){
                scanf("%d",&array[a]);
            }
        for(i=ncase-1;i>0;i--){
            for(j=0;j<i;j++){
               if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
               }
            }
        }
        for(a=0;a<ncase;a++){
            printf("%d ",array[a]);
        }
        }
    }
}
