#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 1000

/*�r����ASCII�X
a-z:65-90
A-Z:97-122
�C�Ӥj�p�g�ۮt32
*/

main(){
    //freopen("text_ana.in","r",stdin);
    //freopen("ooops.txt","w",stdout);
    int ncase,a,b,l,mymax,lar;
    char arr[N],book[26][2],larg[N],temp;
    for(a='A';a<='Z';a++)book[a][0]=a;
    scanf("%d ",&ncase);
    while(ncase--){
        gets(arr);//�C�Ӧr���w�g�Q�s���}�C���F
        l=strlen(arr);
        for(a=0;a<l;a++)arr[a]=toupper(arr[a]);//�����ন�j�g

        for(a='A';a<='Z';a++)book[a][1]=0;//�p���O�k�s
        //for(a=0;a<l;a++)printf("%c ",arr[a]);
        for(a=0;a<l;a++){
            //�P�_input�A�æbbook���O��
            if(arr[a]>='A'&&arr[a]<='Z'){
                book[arr[a]][1]++;
            }
        }
        //for(a='A';a<='Z';a++){printf("%c %d\n",book[a][0],book[a][1]);}
        //��X�{�̦h�����ơAmymax���X�{�̤j����
        mymax=lar=0;
        for(a='A';a<='Z';a++){
            if(book[a][1]>mymax)mymax=book[a][1];
        }
        //printf("%d��\n",mymax);
        for(a=0;a<500;a++)larg[a]=0;
        //�X�{�̦h�����[�J�s�}�Clarg�íp�⦳�X�ӳ̤j��
        for(a='A';a<='Z';a++){
            if(book[a][1]==mymax){
                larg[lar]=book[a][0];
                lar++;
            }
        }
        //for(a=0;a<lar;a++)printf("%c ",larg[a]);
        //�N�s�}�Clarg�Ѥp��j�@�ƦC
        for(a=lar;a>0;a--){
            for(b=0;b<lar;b++){
                if(larg[b]>larg[b+1]){
                    temp=larg[b+1];
                    larg[b+1]=larg[b];
                    larg[b]=temp;
                }
            }
        }
        //�L�X���G
        for(a=1;a<=lar;a++)printf("%c",larg[a]);
        if(ncase>0)printf("\n");
    }

    return 0;
}
