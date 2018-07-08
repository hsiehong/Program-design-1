#include <stdio.h>


#include <stdlib.h>

#include <time.h>

#include <conio.h>

#include <string.h>

int MAP[4][4], gre;

void Add(int n)

{

    srand((unsigned int)time(0)); //

    int num = rand();

    int tf = num % 2;

    int x, y, i;

    x = num % 4;

    srand((unsigned int)time(0) + (unsigned int)num);

    y = rand();

    y %= 4;

    if (tf)

        num = 2;

    else

        num = 4;

    if (n == 0)

    {

        MAP[x][y] = num;

    }

    else if (n == 1)

    {

        if (MAP[3][y] == 0)

            MAP[3][y] = num;

        else

            for (i = 0; i < 4; i++)

                if (MAP[3][i] == 0)

                {

                    MAP[3][i] = num;

                    break;

                }

    }

    else if (n == 2)

    {

        if (MAP[0][y] == 0)

            MAP[0][y] = num;

        else

            for (i = 0; i < 4; i++)

                if (MAP[0][i] == 0)

                {

                    MAP[0][i] = num;

                    break;

                }

    }

    else if (n == 3)

    {

        if (MAP[x][3] == 0)

            MAP[x][3] = num;

        else

            for (i = 0; i < 4; i++)

                if (MAP[i][3] == 0)

                {

                    MAP[i][3] = num;

                    break;

                }

    }

    else if (n == 4)

    {

        if (MAP[x][0] == 0)

            MAP[x][0] = num;

        else

            for (i = 0; i < 4; i++)

                if (MAP[i][0] == 0)

                {

                    MAP[i][0] = num;

                    break;

                }

    }

}

int Moveup(void)

{

    int i, k, t;

    int tf = 0;

    for (k = 0; k < 4; k++)

    {

        int n = 4;

        while (n--)

            for (i = 0; i < 3; i++)

                if (MAP[i][k] == 0)

                {

                    for (t = i; t < 3; t++)

                    {

                        MAP[t][k] = MAP[t + 1][k];

                        MAP[t + 1][k] = 0;

                        tf = 1;

                    }

                }

        for (i = 0; i < 3; i++)

        {

            if (MAP[i][k] == MAP[i + 1][k])

            {

                MAP[i][k] *= 2;

                gre += MAP[i][k];

                if (MAP[i][k] == 2048)

                    return 0;

                for (t = i + 1; t < 3; t++)

                {

                    MAP[t][k] = MAP[t + 1][k];

                    MAP[t + 1][k] = 0;

                    tf = 1;

                }

            }

        }

    }

    if (tf)

        Add(1);

    return 1;

}

int Movedown(void)

{

    int i, k, t;

    int tf = 0;

    for (k = 0; k < 4; k++)

    {

        int n = 4;

        while (n--)

            for (i = 3; i > 0; i--)

                if (MAP[i][k] == 0)

                {

                    for (t = i; t > 0; t--)

                    {

                        MAP[t][k] = MAP[t - 1][k];

                        MAP[t - 1][k] = 0;

                        tf = 1;

                    }

                }

        for (i = 3; i > 0; i--)

        {

            if (MAP[i][k] == MAP[i - 1][k])

            {

                MAP[i][k] *= 2;

                gre += MAP[i][k];

                if (MAP[i][k] == 2048)

                    return 0;

                for (t = i - 1; t > 0; t--)

                {

                    MAP[t][k] = MAP[t - 1][k];

                    MAP[t - 1][k] = 0;

                    tf = 1;

                }

            }

        }

    }

    if (tf)

        Add(2);

    return 1;

}

int Moveleft(void)

{

    int i, k, t;

    for (i = 0; i < 4; i++)

    {

        int n = 4;

        while (n--)

            for (k = 0; k < 3; k++)

            {

                if (MAP[i][k] == 0)

                    for (t = k; t < 3; t++)

                    {

                        MAP[i][t] = MAP[i][t + 1];

                        MAP[i][t + 1] = 0;

                    }

            }

        for (k = 0; k < 3; k++)

        {

            if (MAP[i][k] == MAP[i][k + 1])

            {

                MAP[i][k] *= 2;

                gre += MAP[i][k];

                if (MAP[i][k] == 2048)

                    return 0;

                for (t = k + 1; t < 3; t++)

                {

                    MAP[i][t] = MAP[i][t + 1];

                    MAP[i][t + 1] = 0;

                }

            }

        }

    }

    Add(3);

    return 1;

}

int Moveright(void)

{

    int i, k, t;

    for (i = 0; i < 4; i++)

    {

        int n = 4;

        while (n--)

            for (k = 3; k > 0; k--)

            {

                if (MAP[i][k] == 0)

                    for (t = k; t > 0; t--)

                    {

                        MAP[i][t] = MAP[i][t - 1];

                        MAP[i][t - 1] = 0;

                    }

            }

        for (k = 3; k > 0; k--)

        {

            if (MAP[i][k] == MAP[i][k - 1])

            {

                MAP[i][k] *= 2;

                gre += MAP[i][k];

                if (MAP[i][k] == 2048)

                    return 0;

                for (t = k - 1; t > 0; t--)

                {

                    MAP[i][t] = MAP[i][t - 1];

                    MAP[i][t - 1] = 0;

                }

            }

        }

    }

    Add(4);

    return 1;

}

int Move(void)

{

    fflush(stdin);

    char key;

    key = getch();

    int tf = 1;

    if (key == 72)

        tf = Moveup();

    else if (key == 80)

        tf = Movedown();

    else if (key == 75)

        tf = Moveleft();

    else if (key == 77)

        tf = Moveright();

    if (!tf)

    {

        system("CLS");

        printf("恭喜達到2048！\n");

    }

    return tf;

}

int Check(void)

{

    int i, k;

    for (i = 0; i < 4; i++)

    {

        for (k = 1; k < 4; k++)

            if (MAP[i][k - 1] == MAP[i][k])

                return 0;

    }

    for (i = 0; i < 4; i++)

    {

        for (k = 1; k < 4; k++)

            if (MAP[k - 1][i] == MAP[k][i])

                return 0;

    }

    system("CLS");

    printf("遊戲結束！\n");

    return 1;

}

void Print(void)

{

    printf("得分：%d\n", gre);

    printf("\t\t┏━━━┳━━━┳━━━┳━━━┓\n");

    printf("\t\t┃┃┃┃┃\n");

    printf("\t\t┃%4d┃%4d┃%4d┃%4d┃\n", MAP[0][0], MAP[0][1], MAP[0][2], MAP[0][3]);

    printf("\t\t┣━━━╋━━━╋━━━╋━━━┫\n");

    printf("\t\t┃┃┃┃┃\n");

    printf("\t\t┃%4d┃%4d┃%4d┃%4d┃\n", MAP[1][0], MAP[1][1], MAP[1][2], MAP[1][3]);

    printf("\t\t┣━━━╋━━━╋━━━╋━━━┫\n");

    printf("\t\t┃┃┃┃┃\n");

    printf("\t\t┃%4d┃%4d┃%4d┃%4d┃\n", MAP[2][0], MAP[2][1], MAP[2][2], MAP[2][3]);

    printf("\t\t┣━━━╋━━━╋━━━╋━━━┫\n");

    printf("\t\t┃┃┃┃┃\n");

    printf("\t\t┃%4d┃%4d┃%4d┃%4d┃\n", MAP[3][0], MAP[3][1], MAP[3][2], MAP[3][3]);

    printf("\t\t┗━━━┻━━━┻━━━┻━━━┛\n");

}

int main()

{

    system("COLOR 5F");

    char s[100];

    while (scanf("%s", s), strcmp(s, "0"))

    {

//將s所指向的某一塊內存中的前n個 字節的內容全部設置為ch指定的ASCII值

        memset(MAP, 0, sizeof (MAP));

        gre = 0;

        system("CLS");

        Add(0);

        Print();

        while (Move())

        {

            fflush(stdin);

            system("CLS");

            Print();

            if (Check())

                break;

        }

        printf("按任繼續遊戲！輸入0退出程序！\n");

    }

    return 0;

}
