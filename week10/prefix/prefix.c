/*Problem Description
對於一個陣列A[1..N]，對於1&lt;=i&lt;=N，我們定義prefix sump
P[i]=A[1]+A[2]+…+A[i]。我們可以用簡單的計算求出所有的prefix sum。首先
，P[0]=0; 然後由小到大依序計算P[i]=P[i-1]+A[i]；注意原始陣列A的定義從1開始
。
計算完畢之後，對於1&lt;=i&lt;=j&lt;=N，如果要計算sum(i,j)=A[i]+A[i+1]+…+A[j]，我們
可以用一個減法來完成而不必跑一個迴圈計算。
本題要計算多個sum(i,j)。
Input Format
第一行是資料量N與查詢數K，1&lt;=N&lt;=100000，K&lt;1000。第二行有N個整數，
接下來有K行查詢，每一行有兩個整數i 與j，1&lt;=i,j&lt;=N。每個資料都在[-
1000,1000]的範圍內。*/

#include<stdio.h>

main()
{
    //freopen("prefix.in","r",stdin);
    //freopen("kerker.txt","w",stdout);
    int n,k,i,j,sum;
    int a,temp;
    scanf("%d%d",&n,&k);
    int arr[n+1];
    for(a=1; a<=n; a++)
    {
        scanf("%d",&arr[a]);
    }
    while(k--)
    {
        sum=0;
        scanf("%d%d",&i,&j);
        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }
        for(a=i; a<=j; a++)
        {
            sum+=arr[a];
        }
        printf("%d",sum);
        if(k>0)printf("\n");
    }
    return 0;
}
