#include<stdio.h>
//��J�����W�T���I���I�y�СA�L�X�����I�̻����I�A�Y���ۦP���Z���A�L�X�̥��X�{���I�y��

main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    int i=a*a+b*b;
    int j=c*c+d*d;
    int k=e*e+f*f;

    if((i>=j&&j>=k)||(i>=k&&k>=j)){
        printf("%d\n%d\n",a,b);
    }
    else if((j>=k&&k>i)||(j>i&&i>=k)){
        printf("%d\n%d\n",c,d);
    }
    else if((k>j&&j>=i)||(k>i&&i>=j)){
        printf("%d\n%d\n",e,f);
    }
    return 0;
}
