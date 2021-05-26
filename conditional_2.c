#include <stdio.h>
int main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Food Item Burger\nPrice- Rs 129", number);
    }
    else if (number == 2)
    {
        printf("Food Item Sandwich\nPrice- Rs 149", number);
    }
    else if (number == 3)
    {
        printf("Food Item Pasta\nPrice- Rs 179", number);
    }
    else if (number == 4)
    {
        printf("Food Item pizza\nPrice- Rs 239", number);
    }
    else if (number == 5)
    {
        printf("Food Item French Fries\nPrice- Rs 99", number);
    }
    return 0;
}