/*寫一個程式讀入一正整數n並印出n組輸出。第i組輸出是1到i的數字，Input format:
第一行為test case T.
接下來T行，每行為一正整數n。
Output format:
輸出數字三角形，第i行為1到i的正整數，兩數之間以空白格開。
每兩組output之間以空行格開*/

#include<stdio.h>

main()
{
    int tc,i,j,k,l;
    scanf("%d",&tc);
    for(k=1; k<tc; k++)
    {
        scanf("%d",&i);
        for(j=1; j<i; j++)
        {
            for(l=1; l<j; l++)
            {
                printf("%d ",l);
            }
            printf("%d\n",j);
        }
        for(j=1; j<i; j++)
        {
            printf("%d ",j);
        }
        printf("%d\n",i);
        printf("\n");
    }
    //最後一組測資
    scanf("%d",&i);
    for(j=1; j<i; j++)
    {
        for(l=1; l<j; l++)
        {
            printf("%d ",l);
        }
        printf("%d\n",j);
    }
    for(j=1; j<i; j++)
    {
        printf("%d ",j);
    }
    printf("%d",i);
    return 0;
}
