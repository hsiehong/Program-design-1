/*gcd ��J�⥿���x�Py�A�ϥ�����۰��k�p��̤j���]�ƥH�ΨϥΪ����k(
���k���l��)���ơA���]�Ĥ@�����k��x���H�C1<=x<=y<=10^9*/

#include<stdio.h>
main(){
    int tc;//test case
    scanf("%d",&tc);
    int a;
    int x,y;//input
    int s;//�l��
    int temp1,temp2,times;
    for(a=0;a<tc;a++){
        s=1;
        times=0;
        scanf("%d%d",&x,&y);
        int m=x,n=y;
        while(s!=0){
            s=x%y;
            temp1=y;
            temp2=s;
            x=y;
            y=s;
            times++;
        }
        printf("gcd(%d,%d)=%d, using %d division.\n",m,n,x,times);
    }
    return 0;
}
