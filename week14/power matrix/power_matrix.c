#include<stdio.h>
#define LEN 64
#define D 6

//decimal to binary
int dtob(int a,long long bin[LEN]){
//������
    int dbin=0;//�G�i����
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
    //�p��mul������
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
    int d,y,p,i,j,k,dbin,m,n;//d:��}�j�p y:���� p:����
    int bin[LEN];//�G�i��}�C�A�C��s�찪��
    long long t;
    while(scanf("%d %d %d",&d,&y,&p)!=0){
        if(d==0||p==0)break;
        long long mul[D][D],res[D][D],tres[D][D],bin[LEN];//mul:��}�C res:���G�}�C tmp:�Ȧs���}�C bin:�G�i��}�C
        for(i=0;i<d;i++)for(j=0;j<d;j++)scanf("%lld",&mul[i][j]);
        //res�M����}
        for(i=0;i<d;i++)for(j=0;j<d;j++)res[i][j]=0;
        for(i=0;i<d;i++)res[i][i]=1;
        dbin=dtob(y,bin);
        for(m=0;m<dbin;m++){
            if(m>0)mult(mul,d,p);//0����O�����A���Υ���
            //�p�G�G�i��O1�~���ires
            if(bin[m]){
                if(m<1){//bin[0]�O�����Abin[1]�O����A���w�g�i�hmul�@���F�A�ҥHtres�]����}
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
        //0����
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
