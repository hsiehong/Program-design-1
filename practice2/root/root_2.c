#include<stdio.h>

double f(int p,double c[],double x){
    int m,n;
    double xx,val=0;
    for(m=1;m<=p;m++){
        xx=1;
        for(n=1;n<=m;n++){
            xx*=x;
        }
        val+=xx*c[m];
    }val+=c[0];
    return val;
}

main(){
    //freopen("root.in","r",stdin);
    //freopen("DD.txt","w",stdout);
    int ncase,p;
    int i,j;//�j�鱱��
    double a,b,x,fa,fb,fx;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d",&p);
        double c[p+1];//�Y��
        for(i=p;i>=0;i--){//������C���A�ѫ᩹�e�s
            scanf("%lf",&c[i]);
        }
        scanf("%lf %lf",&a,&b);
        j=50;
        while(j--){
            x=(a+b)/2.0;
            fa=f(p,c,a);
            fb=f(p,c,b);
            fx=f(p,c,x);
            if(fa*fx<0)b=x;
            else a=x;
        }
        printf("%.5f",x);
        if(ncase>0)printf("\n");
    }
    return 0;
}
