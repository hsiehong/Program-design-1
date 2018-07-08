#include<stdio.h>
#include<math.h>
double f(int p,double coe[],double x){
    int i;
    double ans=0,tans;
    for(i=1;i<=p;i++){
        tans=0;
        tans+=pow(x,i)*coe[i];
        ans+=tans;
    }ans+=coe[0];
    return ans;
}
main(){
    int ncase,p,i,t;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&p);
        double coe[p+1],a,b,x,fa,fb,fx;
        for(i=p;i>=0;i--)scanf("%lf ",&coe[i]);
        //for(i=0;i<=p;i++)printf("%f ",coe[i]);
        scanf("%lf %lf",&a,&b);
        t=50;
        while(t--){
            x=(a+b)/2;
            fa=f(p,coe,a);
            fb=f(p,coe,b);
            fx=f(p,coe,x);
            if(fa*fx<0)b=x;
            else a=x;
        }
        printf("%.5f",x);
        if(ncase>0)printf("\n");
    }
    return 0;
}
