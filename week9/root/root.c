/*對一個連續函數f(x)，若f(r)=0，則r是f的根。對於a<b，若f(a)*f(b)<0，則在(a,b)區間內必有一根，此為勘根定理。
我們可以用二分法來找到一個近似根。本題假設f是一個多項式次數不超過P。在程式實作上，限撰寫一個函數來計算f的值
Double f(int p, double x, double c[]); 其中c是傳入函數的係數。
給定a<b，且f(a)*f(b)<0，我們求其平均值x=(a+b)/2，計算f(x)的值，如果f(a)*f(x)<0則把區間縮小為(a,x)；
如果f(x)*f(b)<0則把區間縮小為(x,b)。如此繼續下去值到達到要求的精準位數。
在浮點數的計算中，我們不可以= =0來判別，因此本題假設在絕對數值<0.0000001時，當作0。
Input Format
第一行是測資筆數T。每筆測資三行：第一行是一個整數P代表多項式的次數，P<=6。
第二行有P+1個浮點數分別是由高而低的係數，第三行兩個浮點數 a與 b。
*/

#include<stdio.h>

double f(int p,double x,double c[])
{
    int m,b;
    double val=0;
    for(m=1; m<=p; m++)
    {
        double xx=1.0;
        //算次方
        for(b=0; b<m; b++)
        {
            xx*=x;
        }
        val+=c[m]*xx;
        //printf("c[m]:%lf\n",c[m]);
        // printf("%lf\n",val);
    }
    val+=c[0];
    return val;
}
main()
{
    //freopen("root.in","r",stdin);
    //freopen("abbie.txt","w",stdout);
    int ncase,p;//次數
    int m;
    double a,b,x,fa,fb,fx;
    int t;
    //double val=0,a,b,fa,fb,x;
    scanf("%d",&ncase);
    while(ncase--)
    {
        scanf("%d",&p);//次數
        double c[p+1]; //係數
        for(m=p; m>=0; m--)
        {
            scanf("%lf",&c[m]);
        }
        scanf("%lf%lf",&a,&b);

        t=30;
        while(t--)
        {
            x=(a+b)/2.0;
            fa=f(p,a,c);
            fb=f(p,b,c);
            fx=f(p,x,c);

            if(fa*fx<0)
            {
                b=x;
                fb=fx;
            }
            else if(fx*fb<0)
            {
                a=x;
                fa=fx;
            }
        }
        printf("%.5f\n",x);
    }
    return 0;
}




