#include<stdio.h>

main(){
    int ncase,i,j,t,k,ans1,ans2,s1,s2;
    int arr1[10],arr2[10],bk[10];
    scanf("%d",&ncase);
    while(ncase--){
        ans1=ans2=0;
        for(i=0;i<10;i++)arr1[i]=arr2[i]=0;
        for(i=0;i<6;i++){
            scanf("%d",&t);
            arr1[t]++;
        }
        for(i=0;i<6;i++){
            scanf("%d",&t);
            arr2[t]++;
        }
        //test all numbers in 6 digits
        for(i=0;i<1000000;i++){
            s1=s2=1;
            for(j=0;j<10;j++)bk[j]=arr1[j];//避免原陣列被破壞
            //check A
            t=i;
            do{
                k=t%10;//取尾數，每個數拆開來檢查
                bk[k]--;
                if(bk[k]<0){
                    s1=0;
                    break;
                }
                t/=10;
            }while(t>0);
            //check B
            t=i;
            for(j=0;j<10;j++)bk[j]=arr2[j];
            do{
                k=t%10;
                bk[k]--;
                if(bk[k]<0){
                    s2=0;
                    break;
                }
                t/=10;
            }while(t>0);
            if(s1-s2==1)ans1++;
            if(s2-s1==1)ans2++;
        }
        printf("%d %d\n",ans1,ans2);
    }
    return 0;
}
