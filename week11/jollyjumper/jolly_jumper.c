#include<stdio.h>
main(){
    //freopen("mm22_jolly.in","r",stdin);
    //freopen("GG.txt","w",stdout);
    int ncase,tcase;
    int num,a,b,f,dif,g,temp;
    scanf("%d",&ncase);//���굧��
    while(ncase--){
       scanf("%d ",&tcase);//�C������ƥ�
       int arr[tcase];
       //�s�J�}�C
       for(b=0;b<tcase;b++){
            scanf("%d",&arr[b]);
       }
       int flag[tcase-1];//�аO�}�C�A��tcase-1�ӭ�
       for(b=0;b<tcase-1;b++)flag[b]=b+1;//�аO�}�C�]��1~tcase-1
       int diff[tcase-1];//�t�Ȱ}�C�A��tcase-1�ӭ�
       //�p��t�Ȱ}�C�A��tcase-1�ӭ�
       for(b=0;b<tcase-1;b++){
            dif=arr[b]-arr[b+1];
            if(dif<0)dif=-dif;
            diff[b]=dif;
       }
        //�N�t�Ȱ}�C�Ƨ�
       for(b=tcase-2;b>0;b--){
            for(a=0;a<b;a++){
                if(diff[a]>diff[a+1]){
                    temp=diff[a];
                    diff[a]=diff[a+1];
                    diff[a+1]=temp;
                }
            }
       }
       //��Ӯt�Ȱ}�C�P�аO�}�C�A�����ۦP�h��jolly
       f=0;
       for(b=0;b<tcase-1;b++){
          if(flag[b]==diff[b])continue;
          else {
            f++;
            break;
          }
       }
       if(f==0)printf("Jolly");
       else printf("Not jolly");
       if(ncase>0)printf("\n");
    }
    return 0;
}
