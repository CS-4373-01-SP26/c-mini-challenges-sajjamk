#include <stdio.h>
#include <stdlib.h>

int str_len(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

char *reverse_copy(char *s)
{

    int len = str_len(s);

    char *r = malloc(len + 1);

    for (int i = 0; i < len; i++)
    {
        r[i] = s[len - 1 - i];
    }

    r[len] = '\0';
    return r;
}


void transform (char *s)
{
    char *t;

    printf("Before : %s", s);

    t = reverse_copy(s);

    printf("After : %s\n", t);

    free (t);
}



int main()
{
    char input[100];

    printf("Enter any string: ");
    fgets(input, 100, stdin);

    transform(input);
    return 0;
}
