#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1, num2;
    double divisione;

    printf("inserisci num1\n");
    scanf("%d", &num1);
    printf("inserisci num2\n");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        divisione = num1 / num2;
    }
    else
        divisione = num2 / num1;

    if (num1 == 0 && num2 == 0)
    {
        return -1;
    }
}