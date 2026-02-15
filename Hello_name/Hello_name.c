#include <stdio.h>
#include <stdlib.h>

int main()
{   char name[50];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf(" Hello, %s\n ", name);
    return 0;
}
