#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    switch(letter){
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
        case 'i':
        printf("vowel");
        break;
        case 'o':
        printf("vowel");
        break;
        case 'u':
        printf("vowel");
        break;
        default:
        printf("Not vowel");
    }
}