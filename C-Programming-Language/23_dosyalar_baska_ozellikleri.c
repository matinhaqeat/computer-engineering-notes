#include <stdio.h>

/// Metin dosyalari(okuma):

//

/*
Kullanilan fonksiyonlar:

 - rewind
 - fseek
 - ftell
 - feof
*/

int main ()
{
    FILE *p_dosya = fopen("ornek_metin.txt","r");

    /// Dosyanin acilip acilmadigini kontrol etme
    if(!p_dosya)
    {
        printf("Dosya acilamadi!");
        return 1;
    }

    // feof(p_dosya): dosyanın sonuna gelindiyse 1 (true) döner


    fseek(p_dosya, 0, SEEK_SET);
    // dosya imlecini dosyanın başına götürür

    fseek(p_dosya, 7, SEEK_SET);
    // dosya imlecini dosyanın başına götürür ve 7 bayt ileri alır

    fseek(p_dosya, 12, SEEK_CUR);
    // mevcut konumdan itibaren 12 bayt ileri gider

    fseek(p_dosya, -10, SEEK_END);
    // dosyanın sonundan 10 bayt geri gider


    long boyut = ftell(p_dosya);   // dosya boyutu (bayt)
    // ftell: dosya imlecinin mevcut konumunu (bayt olarak) verir



    fclose(p_dosya);
}

/*
ek bilgiler:
char name[12];
strcpy(name, "matin");       --->Var olan bir string’i aynen kopyalar
sprint(name, "mati%d", n);  --->Formatlı veri üretir ve sonucu string’e yazar
*/
