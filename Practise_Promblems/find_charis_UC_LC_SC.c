#include<stdio.h>
#include<string.h>

int charLCUCSC(ch);

void main(){
    char ch;
    printf("Enter the follwing Char: ");
    scanf("%c", &ch);
    printf("the entered char is %d", ch);
    charLCUCSC(ch);
}

int charLCUCSC(ch)
{
    switch (ch)
    {
    case 0:
        if (ch >=65 && ch <=91)
        printf("the char is lower case");
        break;
    case 1:
        if (ch >=97 && ch <=122)
        printf("the char is upper case");
    default:
        printf("the char is special char");
        break;
    }
    return 0;

}