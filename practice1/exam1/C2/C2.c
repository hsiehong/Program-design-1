#include<stdio.h>
#define N 1000
main(){
    //freopen("in.in","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,temp,x=0;
    int p,q,n,arr[N];
    int ans[N],d;
    while(scanf("%d %d %d",&p,&q,&n)!=EOF){
        //if(x++)printf("\n");
        for(b=0;b<n;b++)scanf("%d",&arr[b]);
        //±Æ§Ç
        for(a=n;a>1;a--){
            for(b=0;b<a;b++){
                if(arr[b]>arr[b+1]){
                    temp=arr[b+1];
                    arr[b+1]=arr[b];
                    arr[b]=temp;
                }
            }
        }
        d=0;
        for(b=0;b<n;b++){
            if((arr[b]%p==0&&arr[b]%q!=0)||(arr[b]%p!=0&&arr[b]%q==0)){
                ans[d++]=arr[b];
            }
        }
        for(b=0;b<d;b++){
            printf("%d",ans[b]);
            if(b<d-1)printf(" ");
        }printf("\n");
    }
    return 0;
}
