#include<stdio.h>

//��J�T�ơA�çP�_�Ѧ��T�Ƭ�������T���κc�����T���欰��A�U����X1�A�w����X2�A������X3�C
//a�̤j�Ab�����Ac�̤p
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
