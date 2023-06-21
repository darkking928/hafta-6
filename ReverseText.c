#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Ters çevrilmesini istediğiniz metni girin: ");
    int leng = strlen(text);
    for(int i = leng - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}