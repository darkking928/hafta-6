#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Polindrom olup olmadığı kontrol edilecek metni giriniz: ");
    int length = strlen(text);
    // Bu kısımda tersine çevrilen metni bir char dizisi tanımlayıp o diziye atadık.
    char reversed_text[length + 1];
    // Tersine çevirdiğimiz metnin index'ini tutmak için değişken tanımladık.
    int index = 0;
    // Kullanıcıdan aldığımız metni tersine çevirmek için kullandığımız döngü.
    for(int i = length - 1; i >= 0; i--)
    {
        reversed_text[index] = text[i];
        index++;
    }
    reversed_text[length] = '\0';
    
    if(strcmp(text, reversed_text) == 0)
    {
        printf("Girdiğiniz metin bir polindromdur\n");
    }
    else
    {
        printf("Girdiğiniz metin bir polindrom değildir.\n");
    }
}