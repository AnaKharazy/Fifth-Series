#include <stdio.h>

int main ()
{
    double credit, price, remaining_money, expense;
    int end = 0, count;

    printf("\n enter the credit:");
    scanf("%lf", &credit);

    while (end == 0)
    {

        printf("\n enter the price:$");
        scanf("%lf", &price);
        count++;
        printf("\n if you wanna continue press 0 otherwise press 1:");
        scanf("%d", &end);
        expense +=price;
        remaining_money=credit - expense;
    }
    printf("expense=$ %2.lf \n remaining_money=$ %2.lf \n count=$ %d" , expense , remaining_money ,count);

    return 0;
}
