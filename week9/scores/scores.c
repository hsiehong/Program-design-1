/*��JN�Ӿǥͪ��T�즨�Z�A�Q�Ϊw�w�ƧǪk�ο�ܱƧǪk��X�eK�W�A�åB�p��U�쪺�������Z�C
Input Format
�Ĥ@��O���굧��T�C�C�����ꪺ�Ĥ@��O��ӼƦrN�PK�A0<K<6�BK<=N<=1000�C
N�N��Ʀr�ǥͤH�ơA����N�|����N��A�C��T�Ӿ�ƬO�@��ǥͪ��T�즨�Z�A.
Output Format.
�C���������XK��A�̧ǬO�eK�W���T�즨�Z�P�`���A
�M��b��K+1���X�o�T�쪺�������Z�|�ˤ��J��p���I�ĤG��C
�ⵧ���ꤧ����X�@�Ŧ�A�̫�@�����ꤧ�ᤣ��X�Ŧ�C
�����H���Z�ɡA�p�G�P���h�H�C�b�e�������Ӫ̡C*/

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
        double temp;//�ƧǼȦs��
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
