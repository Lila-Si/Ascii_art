#include <unistd.h>

void    printElement(char element, int nb)
{
    while (nb > 0)
    {
        write(1, &element, 1);
        nb--;
    }
}

void    clockHead(void)
{
    int    space_ext = 4;
    int    space_int = 6;

    printElement(32, 7); /* 32 == space */
    printElement(45, 4); /* 45 == - */
    printElement('\n', 1);

    while (space_ext > 0)
    {
        printElement(32, space_ext);
        printElement(45, 2);
        printElement(32, space_int);
        printElement(45, 2);
        printElement('\n', 1);
        space_ext -= 2;
        space_int += 4;
    }
    printElement(32, 1);
    printElement(124, 1); /* 124 == | */
    printElement(32, 7);
    printElement(42, 1); /* 46 == * */
    printElement(32, 6);
    printElement(124, 1);
    printElement('\n', 1);
}

void    clockTail(void)
{
    printElement(32, 2);
    printElement(45, 2);
    printElement(32, 5);
    printElement(124, 1);
    printElement(92, 1); /* 92 == \ */
    printElement(32, 3);
    printElement(45, 2);
    printElement('\n', 1);

    printElement(32, 4);
    printElement(45, 2);
    printElement(32, 3);
    printElement(124, 1);
    printElement(32, 2);
    printElement(45, 2);
    printElement('\n', 1);

    printElement(32, 7);
    printElement(45, 4);
    printElement('\n', 1);
}

int main(void)
{
    clockHead();
    clockTail();
}