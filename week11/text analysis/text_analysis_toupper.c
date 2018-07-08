#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 1000

/*ダASCII絏
a-z:65-90
A-Z:97-122
–糶畉32
*/

main(){
    //freopen("text_ana.in","r",stdin);
    //freopen("ooops.txt","w",stdout);
    int ncase,a,b,l,mymax,lar;
    char arr[N],book[26][2],larg[N],temp;
    for(a='A';a<='Z';a++)book[a][0]=a;
    scanf("%d ",&ncase);
    while(ncase--){
        gets(arr);//–じ竒砆皚い
        l=strlen(arr);
        for(a=0;a<l;a++)arr[a]=toupper(arr[a]);//场锣Θ糶

        for(a='A';a<='Z';a++)book[a][1]=0;//璸だ狾耴箂
        //for(a=0;a<l;a++)printf("%c ",arr[a]);
        for(a=0;a<l;a++){
            //耞inputbook暗癘腹
            if(arr[a]>='A'&&arr[a]<='Z'){
                book[arr[a]][1]++;
            }
        }
        //for(a='A';a<='Z';a++){printf("%c %d\n",book[a][0],book[a][1]);}
        //т瞷程Ω计mymax瞷程Ω计
        mymax=lar=0;
        for(a='A';a<='Z';a++){
            if(book[a][1]>mymax)mymax=book[a][1];
        }
        //printf("%dΩ\n",mymax);
        for(a=0;a<500;a++)larg[a]=0;
        //瞷程Ω穝皚larg璸衡Τ碭程
        for(a='A';a<='Z';a++){
            if(book[a][1]==mymax){
                larg[lar]=book[a][0];
                lar++;
            }
        }
        //for(a=0;a<lar;a++)printf("%c ",larg[a]);
        //盢穝皚largパ逼
        for(a=lar;a>0;a--){
            for(b=0;b<lar;b++){
                if(larg[b]>larg[b+1]){
                    temp=larg[b+1];
                    larg[b+1]=larg[b];
                    larg[b]=temp;
                }
            }
        }
        //挡狦
        for(a=1;a<=lar;a++)printf("%c",larg[a]);
        if(ncase>0)printf("\n");
    }

    return 0;
}
