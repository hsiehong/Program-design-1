#include<stdio.h>
#include<string.h>

main(){
    int ncase,i,j,temp,ok1,ok2,k,ans1,ans2;
    scanf("%d",&ncase);
    int book1[10],book2[10],chk[10];
    while(ncase--){
        for(i=0;i<10;i++)book1[i]=book2[i]=0;
        for(i=0;i<6;i++){
            scanf("%d",&temp);
            book1[temp]++;
        }
        for(i=0;i<6;i++){
            scanf("%d",&temp);
            book2[temp]++;
        }

        ans1=ans2=0;
        for(i=0;i<1000000;i++){
            ok1=ok2=1;
                //check A
            temp=i;
            for(j=0;j<10;j++)chk[j]=book1[j];
            do{
                k=temp%10;
                chk[k]--;
                if(chk[k]<0){
                    ok1=0;
                    break;
                }
                temp/=10;
            }
            while(temp>0);
        //check B
            temp=i;
            for(j=0;j<10;j++)chk[j]=book2[j];
            do{
                k=temp%10;
                chk[k]--;
                if(chk[k]<0){
                    ok2=0;
                    break;
                }
                temp/=10;
            }
            while(temp>0);
            if(ok1-ok2==1)ans1++;
            if(ok2-ok1==1)ans2++;
        }
        printf("%d %d\n",ans1,ans2);
    }
    return 0;
}
