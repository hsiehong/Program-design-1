#include<stdio.h>

main(){
    int ncase;
    scanf("%d",&ncase);
    int yy,mm,dd;
    while(ncase--){
        scanf("%d/%d/%d",&yy,&mm,&dd);
        if(yy<2000||mm>12||dd>31||mm<=0||dd<=0)printf("No");
        else if((mm==4||mm==6||mm==9||mm==11)&&dd>30)printf("No");
        else if(mm==2){
            if((yy%4==0&&yy%100!=0)||yy%400==0){
                if(dd>29)printf("No");
                else{printf("Yes");}
            }
            else{
                if(dd>28)printf("No");
                else{printf("Yes");}
            }
        }
        else{
            printf("Yes");
        }
        if(ncase>0)printf("\n");
    }
    return 0;
}
