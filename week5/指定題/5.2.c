/*�g�@�ӵ{��Ū�J�@�����n�C�����L�X1��n�A�A�L�Xn-1��1�C
Input format:
�Ĥ@�欰���굧��T�C���U�Ӫ�T��A�C��ߤ@�����n�C
Output format:
��C�ӿ�J��n�A���L�X1��n�A�L�Xn-1��1�A�C�ӼƦr�@��C
�C��տ�X�������H�@�Ŧ�j�}�C*/

#include<stdio.h>
main(){
    int times;
    scanf("%d",&times);
    int a,b,t;
    for(a=1;a<times;a++){
        scanf("%d",&b);
        for(t=1;t<=b;t++){
            printf("%d\n",t);
        }
        for(t=b-1;t>0;t--){
            printf("%d\n",t);
        }
        printf("\n");
    }
    scanf("%d",&b);
    for(t=1;t<=b;t++){
        printf("%d\n",t);
    }
    for(t=b-1;t>1;t--){
        printf("%d\n",t);
    }
    printf("1");

    return 0;
}
