/*�g�@�ӵ{���i�H����w�j�ƧǪk�A�åB�i�H��X�B��ɥ洫�F�X��*/

#include<stdio.h>

main(){
    int ncase,a,temp,i,j;
    int times;
    while(1){
        times=0;
        scanf("%d",&ncase);
        if(ncase==0){
            break;
        }
        int array[ncase];
        for(a=0;a<ncase;a++){
            scanf("%d",&array[a]);
        }
        for(i=ncase-1;i>0;i--){
            for(j=0;j<i;j++){
                if(array[j]>array[j+1]){
                    temp=array[j+1];
                    array[j+1]=array[j];
                    array[j]=temp;
                    times++;

                    /*for(a=0;a<ncase;a++){
                        printf("%d ",array[a]);
                    }printf("\n");*/
                }
            }
        }
        printf("%d\n",times);
    }
    return 0;
}
