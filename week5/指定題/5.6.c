/*�@�~5.6 �g�@�ӵ{���p���1970�~1��1���Y�@�S�w������ѼơC
�p�G������~�άO�b1970�~1��1�餧�e�h��X0�C*/

#include<stdio.h>
main()
{
    int tc;//test case
    scanf("%d",&tc);
    int a;



    int yy,mm,dd;//year,month,day

    int month[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};



    for(a=0; a<tc; a++)
    {
        int ans=0;//����
        int dyy;

        scanf("%d/%d/%d",&yy,&mm,&dd);

        if(yy<1970||mm>12||dd>31)
        {
            printf("0\n");
            continue;
        }
        if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
        {
            printf("0\n");
            continue;
        }




        if(mm==2)
        {
            if((yy%4==0&&yy%100!=0)||(yy%400==0))
            {
                if(dd>29)
                {
                    printf("0\n");
                    continue;
                }
            }
            else
            {
                if(dd>28)
                {
                    printf("0\n");
                    continue;
                }
            }
        }


        int d;
        for(d=1970; d<yy; d++)
        {
            if(d%4==0&&d%100!=0||(d%400==0))
            {
                ans=ans+366;
            }
            else
            {
                ans=ans+365;
            }
        }//�~


        int b;
        for(b=1; b<mm; b++)
        {
            ans=ans+month[b];
        }
        ans=ans+dd;

        printf("%d\n",ans);

    }

    return 0;
}
