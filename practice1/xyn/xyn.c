#include<stdio.h>

main(){

    //freopen("array01_x^y.in","r",stdin);
    //freopen("out","w",stdout);

    while(1){
        int x,y,n;
        int remain;
        int a;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        scanf("%d",&y);
        scanf("%d",&n);

        remain=1;
        for(a=0;a<y;a++){
            remain*=x%n;
            remain%=n;
        }
        printf("%d\n",remain);
    }
    return 0;
}
