//Ū�J4���a,b,c,d�íp��H(a,b),(c,d)�����I������ΩҧΦ����P��
#include<stdio.h>
#include<stdlib.h>
main(){
    int a,b,c,d;
    int width,height;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    width=abs(a-c);
    height=abs(b-d);

    printf("%d",height*2+width*2);
    return 0;
}
