/*�g�@�ӵ{��Ū�J�@�����n�æL�Xn�տ�X�C��i�տ�X�O1��i���Ʀr�AInput format:
�Ĥ@�欰test case T.
���U��T��A�C�欰�@�����n�C
Output format:
��X�Ʀr�T���ΡA��i�欰1��i������ơA��Ƥ����H�ťծ�}�C
�C���output�����H�Ŧ��}*/

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
    //�̫�@�մ���
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
