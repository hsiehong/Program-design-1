/*寫一個程式可以執行泡沫排序法，並且可以算出運算時交換了幾次*/

#include<stdio.h>

main(){
    int ncase,a,temp,i,j;
    int times;
    while(1){
        times=0;
        scanf("%d",&ncase);
        if(ncase==0){
            break;
        }
        int array[ncase];
        for(a=0;a<ncase;a++){
            scanf("%d",&array[a]);
        }
        for(i=ncase-1;i>0;i--){
            for(j=0;j<i;j++){
                if(array[j]>array[j+1]){
                    temp=array[j+1];
                    array[j+1]=array[j];
                    array[j]=temp;
                    times++;

                    /*for(a=0;a<ncase;a++){
                        printf("%d ",array[a]);
                    }printf("\n");*/
                }
            }
        }
        printf("%d\n",times);
    }
    return 0;
}
