#include <stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int i, j;
    for (i = 0, j = 0; str[i]; i++)
	 {
        if (!isalpha(str[i]))
		{
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing alphabets: %s\n", str);

    return 0;
}

