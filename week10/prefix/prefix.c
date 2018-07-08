/*Problem Description
���@�Ӱ}�CA[1..N]�A���1&lt;=i&lt;=N�A�ڭ̩w�qprefix sump
P[i]=A[1]+A[2]+�K+A[i]�C�ڭ̥i�H��²�檺�p��D�X�Ҧ���prefix sum�C����
�AP[0]=0; �M��Ѥp��j�̧ǭp��P[i]=P[i-1]+A[i]�F�`�N��l�}�CA���w�q�q1�}�l
�C
�p�⧹������A���1&lt;=i&lt;=j&lt;=N�A�p�G�n�p��sum(i,j)=A[i]+A[i+1]+�K+A[j]�A�ڭ�
�i�H�Τ@�Ӵ�k�ӧ����Ӥ����]�@�Ӱj��p��C
���D�n�p��h��sum(i,j)�C
Input Format
�Ĥ@��O��ƶqN�P�d�߼�K�A1&lt;=N&lt;=100000�AK&lt;1000�C�ĤG�榳N�Ӿ�ơA
���U�Ӧ�K��d�ߡA�C�@�榳��Ӿ��i �Pj�A1&lt;=i,j&lt;=N�C�C�Ӹ�Ƴ��b[-
1000,1000]���d�򤺡C*/

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
