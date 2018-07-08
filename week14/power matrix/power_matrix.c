#include<stdio.h>
#define LEN 64
#define D 6

//decimal to binary
int dtob(int a,long long bin[LEN]){
//做平方
    int dbin=0;//二進制位數
    while(a){
        bin[dbin++]=a%2;
        a/=2;
    }
    return dbin;
}
void mult(long long mul[D][D],int d,int p){
    int a,b,c;
    int tmp[D][D];
    long long t;
    for(a=0;a<d;a++)for(b=0;b<d;b++)tmp[a][b]=0;
    //計算mul的平方
    for(a=0;a<d;a++){
        for(b=0;b<d;b++){
                t=0;
            for(c=0;c<d;c++){
                t+=(mul[a][c]%p)*(mul[c][b]%p);
                t%=p;
            }tmp[a][b]=(int)t;
        }
    }
    for(a=0;a<d;a++)for(b=0;b<d;b++)mul[a][b]%=p;
    for(a=0;a<d;a++)for(b=0;b<d;b++)mul[a][b]=tmp[a][b];
}
main(){
    int d,y,p,i,j,k,dbin,m,n;//d:方陣大小 y:次方 p:除數
    int bin[LEN];//二進制陣列，低位存到高位
    long long t;
    while(scanf("%d %d %d",&d,&y,&p)!=0){
        if(d==0||p==0)break;
        long long mul[D][D],res[D][D],tres[D][D],bin[LEN];//mul:原陣列 res:結果陣列 tmp:暫存的陣列 bin:二進制陣列
        for(i=0;i<d;i++)for(j=0;j<d;j++)scanf("%lld",&mul[i][j]);
        //res清為方陣
        for(i=0;i<d;i++)for(j=0;j<d;j++)res[i][j]=0;
        for(i=0;i<d;i++)res[i][i]=1;
        dbin=dtob(y,bin);
        for(m=0;m<dbin;m++){
            if(m>0)mult(mul,d,p);//0次方是本身，不用平方
            //如果二進位是1才乘進res
            if(bin[m]){
                if(m<1){//bin[0]是本身，bin[1]是平方，但已經進去mul一次了，所以tres設為方陣
                    for(i=0;i<d;i++)for(j=0;j<d;j++)tres[i][j]=0;
                    for(i=0;i<d;i++)tres[i][i]=1;
                }
                else{
                    for(i=0;i<d;i++)for(j=0;j<d;j++)tres[i][j]=res[i][j];
                }
                for(i=0;i<d;i++)for(j=0;j<d;j++)res[i][j]=0;//reset res
                for(i=0;i<d;i++){
                    for(j=0;j<d;j++){
                            t=0;
                        for(k=0;k<d;k++){
                            t+=(mul[k][j]%p)*(tres[i][k]%p);
                            t%=p;
                        }res[i][j]=(int)t;
                    }
                }
                for(i=0;i<d;i++)for(j=0;j<d;j++)res[i][j];
            }
        }
        //0次時
        if(y==0){
            for(i=0;i<d;i++)for(j=0;j<d;j++)res[i][j]=0;
            for(i=0;i<d;i++)res[i][i]=1;
        }
        for(i=0;i<d;i++){
            for(j=0;j<d;j++){
                printf("%d",res[i][j]);
                if(j!=d-1)printf(" ");
            }printf("\n");
        }
    }
    return 0;
}
