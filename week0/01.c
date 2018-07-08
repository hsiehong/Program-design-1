#include<stdio.h>

int main(){
    int i,j,k;
    int res[2][2],tmp[2][2];
    for(i=0;i<2;i++)for(j=0;j<2;j++)scanf("%d",&res[i][j]);
    for(i=0;i<2;i++)for(j=0;j<2;j++)tmp[i][j]=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                tmp[i][j]+=res[i][k]*res[k][j];
            }
        }
    }
    for(i=0;i<2;i++)for(j=0;j<2;j++)res[i][j]=tmp[i][j];
    for(i=0;i<2;i++)for(j=0;j<2;j++)printf("%d ",res[i][j]);printf("\n");
    return 0;
}
