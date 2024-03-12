#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int upperCount = 0, lowerCount = 0, specialCount = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
	{
        if (isupper(str[i])) 
		{
            upperCount++;
        } else if (islower(str[i]))
		{
            lowerCount++;
        } else if (!isspace(str[i])) 
		{
            specialCount++;
        }
        i++;
    }

    printf("Special characters: %d\n", specialCount);
    printf("Uppercase characters: %d\n", upperCount);
    printf("Lowercase characters: %d\n", lowerCount);
   
    return 0;
}

