#include<stdio.h>

//Ū�J�T�ӥ����a,b,c�C�p��æL�X�䤤���̤p��

int main()
{
    printf("��J�T��(a,b,c):\n");
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    printf("��X:\n");

    switch(a,b,c)
    {
    case 'a>b&&b>c':
        printf("%d",c);
        break;
    case 'b>a&&a>c':
        printf("%d",c);
        break;
    case 'a>c&&c>b':
        printf("%d",b);
        break;
    case 'c>a&&a>b':
        printf("%d",b);
        break;
    case 'b>c&&c>a':
        printf("%d",a);
        break;
    case 'c>b&&b>a':
        printf("%d",a);
        break;
    default:
        printf("�п�J�۲��T��\n");
    }
}
