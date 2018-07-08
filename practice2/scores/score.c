#include<stdio.h>

main(){
    //freopen("score.in","r",stdin);
    //freopen("TT.txt","w",stdout);
    int ncase,n,k,i,j;
    double temp,asum,bsum,csum;
    scanf("%d",&ncase);
    while(ncase--){
        scanf("%d %d",&n,&k);
        double score[n][4];
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                scanf("%lf",&score[i][j]);
            }
            score[i][3]=score[i][2]+score[i][1]+score[i][0];
        }
        //bubble_sort
        for(i=n;i>=0;i--){
            for(j=0;j<n;j++){
                if(score[j][3]<score[j+1][3]){
                    temp=score[j+1][3];score[j+1][3]=score[j][3];score[j][3]=temp;
                    temp=score[j+1][2];score[j+1][2]=score[j][2];score[j][2]=temp;
                    temp=score[j+1][1];score[j+1][1]=score[j][1];score[j][1]=temp;
                    temp=score[j+1][0];score[j+1][0]=score[j][0];score[j][0]=temp;
                }
            }
        }
        //compute the average
        asum=bsum=csum=0.0;
        for(i=0;i<n;i++){
            asum+=score[i][0];
            bsum+=score[i][1];
            csum+=score[i][2];
        }asum/=n;bsum/=n;csum/=n;
        //output
        for(i=0;i<k;i++){
            printf("%.0f %.0f %.0f %.0f\n",score[i][0],score[i][1],score[i][2],score[i][3]);
        }
        printf("%.2f %.2f %.2f",asum,bsum,csum);
        if(ncase>0)printf("\n\n");
    }
    return 0;
}
