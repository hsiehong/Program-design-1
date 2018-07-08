#include<stdio.h>
#define LEN 1000

int ham(int a,int b){
    int t,ans=0;
    t=a^b;
    while(t){
        if(t&1)ans++;
        t>>=1;
    }
    return ans;
}
main(){
    freopen("hamming.in","r",stdin);
    freopen("yy.txt","w",stdout);
    int ncase,num,i,j,arr[LEN],mymax,k;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&arr[i]);
        }
        mymax=0;
        for(i=0;i<num-1;i++){
            for(j=i+1;j<num;j++){
                k=ham(arr[i],arr[j]);
                mymax=(mymax>k)?mymax:k;
            }
        }
        printf("%d\n",mymax);
    }
}
