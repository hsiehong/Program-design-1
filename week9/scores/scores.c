/*輸入N個學生的三科成績，利用泡泡排序法或選擇排序法找出前K名，並且計算各科的平均成績。
Input Format
第一行是測資筆數T。每筆測資的第一行是兩個數字N與K，0<K<6且K<=N<=1000。
N代表數字學生人數，之後將會接著N行，每行三個整數是一位學生的三科成績，.
Output Format.
每筆測資先輸出K行，依序是前K名的三科成績與總分，
然後在第K+1行輸出這三科的平均成績四捨五入到小數點第二位。
兩筆測資之間輸出一空行，最後一筆測資之後不輸出空行。
比較兩人成績時，如果同分則以列在前面的為勝者。*/

#include<stdio.h>

main()
{
    //freopen("score.in","r",stdin);
    //freopen("doggy.txt","w",stdout);
    int ncase,n,k;
    int a,b;
    scanf("%d",&ncase);
    while(ncase--)
    {
        scanf("%d%d",&n,&k);
        double score[n][4];
        double temp;//排序暫存用
        for(a=0; a<n; a++)
        {
            for(b=0; b<3; b++)
            {
                scanf("%lf",&score[a][b]);
            }
            score[a][3]=score[a][0]+score[a][1]+score[a][2];
        }
        //bubble_sort
        for(a=n-1; a>0; a--)
        {
            for(b=0; b<a; b++)
            {
                if(score[b][3]<score[b+1][3])
                {
                    temp=score[b][3];
                    score[b][3]=score[b+1][3];
                    score[b+1][3]=temp;
                    temp=score[b][2];
                    score[b][2]=score[b+1][2];
                    score[b+1][2]=temp;
                    temp=score[b][1];
                    score[b][1]=score[b+1][1];
                    score[b+1][1]=temp;
                    temp=score[b][0];
                    score[b][0]=score[b+1][0];
                    score[b+1][0]=temp;
                }
            }
        }
        double avg1=0,avg2=0,avg3=0;
        for(a=0; a<n; a++)
        {
            avg1+=score[a][0];
            avg2+=score[a][1];
            avg3+=score[a][2];
        }
        avg1/=n;
        avg2/=n;
        avg3/=n;
        for(a=0; a<k; a++)
        {
            printf("%.0f %.0f %.0f %.0f\n",score[a][0],score[a][1],score[a][2],score[a][3]);
        }
        printf("%.2f %.2f %.2f",avg1,avg2,avg3);
        if(ncase>0)printf("\n\n");
    }
    return 0;
}
