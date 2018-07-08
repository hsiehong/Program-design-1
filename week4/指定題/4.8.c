#include<stdio.h>

//輸入三數，並判斷由此三數為邊長的三角形構成的三角行為何，銳角輸出1，鈍角輸出2，直角輸出3。
//a最大，b次之，c最小
main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int temp1,temp2;

    if(a==b&&a!=c){
        if(c>a){
            temp1=a;
            temp2=b;
            a=c;
            b=temp1;
            c=temp2;
        }
        else if(c<a){
            a=a;
            b=b;
            c=c;
        }
    }
    else if(a>b){
        if(c>=a){
            temp1=a;
            temp2=b;
            a=c;
            b=temp1;
            c=temp2;
        }
        else if(c>=b){
            temp1=b;
            b=c;
            c=temp1;
        }
    }
    else if(b>a){
        if(c<=a){
            temp1=a;
            a=b;
            b=temp1;
        }
        else if(c>=b){
            temp1=a;
            a=c;
            c=temp1;
        }
        else if(c>=a){
            temp1=c;
            temp2=a;
            a=b;
            b=temp1;
            c=temp2;
        }
    }
    if(a*a<b*b+c*c){
        printf("1");
    }
    else if(a*a>b*b+c*c){
        printf("2");
    }
    else if(a*a==b*b+c*c){
        printf("3");
    }
    return 0;
}
