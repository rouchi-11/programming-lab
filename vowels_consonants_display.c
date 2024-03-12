#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i, length;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    length = strlen(str);
    
    printf("Vowels: ");
    for (i = 0; i < length; i++) {
        if (strchr("aeiouAEIOU", str[i]))
		 {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    
    printf("Consonants: ");
    for (i = 0; i < length; i++)
	 {
        if (!strchr("aeiouAEIOU", str[i]))
		{
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}

