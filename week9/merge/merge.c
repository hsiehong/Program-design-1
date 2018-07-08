/*Problem Description
Merge�O�N��ӥѤp��j�Ʀn�Ǫ��}�C�A�N���X�֦��@�ӱƦn�Ǫ��}�C�C���D
�ӹ�@�@��merge�{���A���i�ϥαƧǡC
���]��J��Ӱ}�CA�PB�A�ӼƬONA�PNB�A�ڭ̥����X�ֵ��G��bC�}�C�C��
�̨ϥε����ܼ�ia�Pib���O�N��ثe��}�C�ثe�|����X���̤p�Ȧ�m�C�C����
�̤��A[ia]�PB[ib]�A�N����p����X�A�ñN���Щ��U�@�Ӳ��ʡA����䤤�@��
�}�C�w������X�A�̫��ѤU���}�C����l�����̧ǿ�X�C
���F���ת��ߤ@�ʡA�ڭ̳W�w�A�p�G�⤸���ۦP�ɡA�b�Ĥ@�}�C���������ӳQ
��@����p����X�C
Input Format
�Ĥ@��O���굧��T�C�C������T��G�Ĥ@��O��ӼƦrNA�P
NB�A1<=NA,NB<=1000�C�ĤG�榳NA�ӱƦn�Ǫ���ơA�ĤT�榳NB�ӱƦn�Ǫ���
�ơC
Output Format.
�C���������X���A�Ĥ@���X��ӹL�{������h�֦������j�p�����A��
�G���X�X�᪺֫�}�C���e�A�p�GNA+NB<=6�h��X�X�᪺֫��Ӱ}�C�A�_�h��
�X�e�T�ӻP��T�ӡC*/

#include<stdio.h>

main(){
    //freopen("merge.in","r",stdin);
    //freopen("out.txt","w",stdout);
    int ncase,na,nb;//�����ơA�ⵧ����Ӽ�
    int x,y;
    int ia,ib,ic,com;//�s�JC�}�C��m����
    int a,b,c;
    scanf("%d",&ncase);
    while(ncase--){
        com=0;
        x=y=0;
        scanf("%d%d",&na,&nb);
        int NA[na],NB[nb],NC[na+nb];
        for(a=0;a<na;a++){
            scanf("%d",&NA[a]);
       }
        for(b=0;b<nb;b++){
            scanf("%d",&NB[b]);
       }
       ia=ib=ic=0;
       while(ia!=na&&ib!=nb){
            if(NA[ia]<=NB[ib]){
                NC[ic++]=NA[ia++];
                com++;
            }
            else{
                NC[ic++]=NB[ib++];
                com++;
            }
       }
       int ra=ia,rb=ib;
       if(ia==na){
        for(c=ia+ib;c<na+nb;c++){
            NC[c]=NB[rb++];
        }
       }
       else{
        for(c=ia+ib;c<na+nb;c++){
            NC[c]=NA[ra++];
        }
       }
       printf("%d\n",com);
       if(na+nb<=6){
        for(a=0;a<na+nb;a++){
            printf("%d",NC[a]);
            if(a!=na+nb-1)printf(" ");
        }printf("\n");
       }
       else{
        printf("%d %d %d %d %d %d",NC[0],NC[1],NC[2],NC[na+nb-3],NC[na+nb-2],NC[na+nb-1]);
        printf("\n");
       }
    }
return 0;
}
