/*��һ����ʽ���攵ż����ݔ��ĵ�һ�О锵�е��L��n��ݔ��ĵڶ��О�n����
����Ȼ��ݔ�����С���һ���ǔ����е��攵���ڶ����ǔ����е�ż��������֮
�g�ÿո���_��*/

#include<stdio.h>
main()
{

    int ncase,a,k=0;
    int x,y;//��ż��Ђ��e��Ŀ
    //freopen("EvenOrOdd.in","r",stdin);
    //freopen("evenOrOdd_out.out","w",stdout);
    while(1)
    {
        x=0;y=0;
        scanf("%d",&ncase);
            if(ncase==0){
                break;
            }
            if(k!=0){
                printf("\n");
            }k++;

            x=0;
            y=0;
            int allcase[ncase];
            int oddcase[200];
            int evencase[200];
            for(a=0; a<ncase; a++)
            {
                scanf("%d",&allcase[a]);
            }
            for(a=0; a<ncase; a++)
            {
                if(allcase[a]%2!=0)
                {
                    oddcase[x]=allcase[a];
                    x++;
                }
                else
                {
                    evencase[y]=allcase[a];
                    y++;
                }
            }
            for(a=0; a<x; a++)
            {
                printf("%d",oddcase[a]);
                if(a!=x-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
            for(a=0; a<y; a++)
            {
                printf("%d",evencase[a]);
                if(a!=y-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}
