#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
    int N;
    setlocale(LC_ALL,"Rus");
    printf("Номер задачи: \n");
    scanf("%d", &N);
    while(N)
    {

        if (N == 7)
        {
            int n, s=0;
            printf("Введите число\n");
            scanf("%d", &n);
            while (n)
            {
                s+=1;
                n &= n-1;
            }
            printf("%4d", s);

        }
        if (N==6)
        {
            int n, i, k, s=1;
            printf("Введите число\n");
            scanf("%d", &n);

            for (i=1; i<n; i++)
            {
                for (k=0; k<i; k++)
                {
                    s+=2;
                }
            }
            k=s;
            printf("%4d", s);
            for (i=1; i<n; i++)
            {
                s+=2;
                k+=s;
                printf("+%4d", s);
            }
            printf("=%4d", k);
        }


        printf("\nНомер задачи: \n");
        scanf("%d", &N);
    }
}
