#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i, j;
    for (i = 0, j = 0; str[i]; i++)
	 {
        if (str[i] != ' ')
		{
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Result after removing spaces: %s\n", str);

    return 0;
}

