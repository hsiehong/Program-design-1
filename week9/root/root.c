/*��@�ӳs����f(x)�A�Yf(r)=0�A�hr�Of���ڡC���a<b�A�Yf(a)*f(b)<0�A�h�b(a,b)�϶��������@�ڡA�����ɮکw�z�C
�ڭ̥i�H�ΤG���k�ӧ��@�Ӫ���ڡC���D���]f�O�@�Ӧh�������Ƥ��W�LP�C�b�{����@�W�A�����g�@�Ө�ƨӭp��f����
Double f(int p, double x, double c[]); �䤤c�O�ǤJ��ƪ��Y�ơC
���wa<b�A�Bf(a)*f(b)<0�A�ڭ̨D�䥭����x=(a+b)/2�A�p��f(x)���ȡA�p�Gf(a)*f(x)<0�h��϶��Y�p��(a,x)�F
�p�Gf(x)*f(b)<0�h��϶��Y�p��(x,b)�C�p���~��U�h�Ȩ�F��n�D����Ǧ�ơC
�b�B�I�ƪ��p�⤤�A�ڭ̤��i�H= =0�ӧP�O�A�]�����D���]�b����ƭ�<0.0000001�ɡA��@0�C
Input Format
�Ĥ@��O���굧��T�C�C������T��G�Ĥ@��O�@�Ӿ��P�N��h���������ơAP<=6�C
�ĤG�榳P+1�ӯB�I�Ƥ��O�O�Ѱ��ӧC���Y�ơA�ĤT���ӯB�I�� a�P b�C
*/

#include<stdio.h>

double f(int p,double x,double c[])
{
    int m,b;
    double val=0;
    for(m=1; m<=p; m++)
    {
        double xx=1.0;
        //�⦸��
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
    int ncase,p;//����
    int m;
    double a,b,x,fa,fb,fx;
    int t;
    //double val=0,a,b,fa,fb,x;
    scanf("%d",&ncase);
    while(ncase--)
    {
        scanf("%d",&p);//����
        double c[p+1]; //�Y��
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




