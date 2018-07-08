#include<stdio.h>

main(){
    //freopen("JJ.txt","w",stdout);
    int n,m,nn[2],mm[7];
    int a,b=0;
    while((scanf("%d %d",&n,&m)!=EOF)){
        if(b!=0)printf("\n");
        b++;
        int count=0;
        for(a=1;a>=0;a--){
            nn[a]=n%10;
            n/=10;
        }
        for(a=6;a>=0;a--){
            mm[a]=m%10;
            m/=10;
        }
        for(a=0;a<6;a++){
            if(mm[a]==nn[0]&&mm[a+1]==nn[1])count++;
        }
        printf("%d",count);
    }
    return 0;
}
