#include <stdio.h>
int main()
{
    int number;

    printf("Enter an marks obtained by Kid: ");
    scanf("%d", &number);

    if (number > 85 )
    {
        printf(" This kid got Grade A %d.\n", number);
    }
    else if (number >70)
    {
        printf(" This kid got Grade B %d.\n", number);
    }
    else if (number >55)
    {
        printf(" This kid got Grade C %d.\n", number);
    }
    else if (number >40)
    {
        printf(" This kid got Grade D %d.\n", number);
    }
    else
    {
        printf(" This kid gor Grade F %d.\n", number);
    }


    return 0;
}