/*#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
	printf_s("The is the Caesar cypher task. It has been implemented by Yanaki Krastev, student number 471221120\n");
    printf_s("Dear user, do you want to encrypt or decrypt a message? Type 'e' for encrypt and 'd' for decrypt: \n");
    char answer[100];
    scanf_s("%s", &answer, 99);

    while (true) {
        if (strcmp(answer, "e") == 0) {
            break;
        }
        else if (strcmp(answer, "d") == 0) {
            break;
        }
        else {
            printf_s("Dear user, you have not inputted 'e' or 'd'. Please, try again: ");
            scanf_s("%s", &answer, 99);
        }
    }

    char message[100], currentLetter;

    if (strcmp(answer, "e") == 0) {
        printf_s("Input message to encrypt: ");
        scanf_s("%s", message, 99);
        for (int i = 0; message[i] != '\0'; i++)
        {
            currentLetter = message[i];
            if (currentLetter >= 'a' && currentLetter <= 'z')
            {
                currentLetter = currentLetter + 3;
                if (currentLetter > 'z')
                {
                    currentLetter = currentLetter - 'z' + 'a' - 1;
                }
                message[i] = currentLetter;
            }
        }
        printf_s("The encrypted message is:\n%s", message);
    }
    else {
        printf_s("Input message to decrypt: ");
        scanf_s("%s", message, 99);
        for (int i = 0; message[i] != '\0'; i++)
        {
            currentLetter = message[i];
            if (currentLetter >= 'a' && currentLetter <= 'z')
            {
                currentLetter = currentLetter - 3;
                if (currentLetter < 'a')
                {
                    currentLetter = currentLetter + 'z' - 'a' + 1;
                }
                message[i] = currentLetter;
            }
        }
        printf_s("The decrypted message is: %s", message);       
    }
    return 0;
} 
*/