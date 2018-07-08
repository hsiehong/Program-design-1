//Selector Sort

#include<stdio.h>

main(){
    int ncase,a,b,i,j,op;
    int min,temp,mymin;
    int times,flag;
    while(1){
        scanf("%d",&ncase);
        if(ncase==0){
            break;
        }
        int num[ncase];
        for(a=0;a<ncase;a++){
            scanf("%d",&num[a]);
        }
            times=0;

        for(i=0;i<ncase;i++){
                min=num[i];
                mymin=num[i+1];
                flag=i+1;
            //find minimum and its index
           for(j=i;j<ncase;j++){
                if(num[j+1]<mymin){
                    mymin=num[j+1];
                    flag=j+1;
                }
           }
           //swap
           if(mymin<num[i]){
                temp=num[i];
                num[i]=mymin;
                num[flag]=temp;
                times++;
           }
        }
        if(ncase<=3){
            for(op=0;op<ncase;op++){
                printf("%d ",num[op]);
            }
            printf("%d",times);
        }
        else{
            for(op=0;op<3;op++){
                printf("%d ",num[op]);
            }
            printf("%d",times);
        }
        printf("\n");
    }
    return 0;
}
