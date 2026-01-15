#include <stdio.h>

// Dosyalar
// Metin dosyasi: .txt
// Ikili (binary) dosyalar

/// Metin dosyalari:
/*
Kisa genel bakis:
 - FILE *pfile = fopen("dosya_adi.txt","mod");   --> dosyayi pointer ile acar
 - w    ---> sadece yazma, dosya varsa siler
 - r    ---> sadece okuma, dosya yoksa hata verir
 - a    ---> sona ekleme, dosya yoksa olusturur
 - w+   ---> okuma + yazma, dosyayi sifirlar
 - r+   ---> okuma + yazma, dosya var olmali
 - a+   ---> okuma + yazma, sona ekler

Kullanilan fonksiyonlar:
 - fopen
 - fclose
 - fprintf
 - fscanf
 - fgetc
 - fputc
 - fgets
 - rewind
 - fseek
 - ftell
 - feof

 - EOF -> dosya sonu (End Of File, -1)
*/

int main ()
{
    FILE *p_dosya = fopen("text_file.txt","w");

    // Dosyanin acilip acilmadigini kontrol etme
    if(!p_dosya)
    {
        printf("Dosya acilamadi!");
        return 1;
    }

    // Dosyaya string yazma (satir sonu(\n) manuel eklenir)
    fputs("Merhaba Dunya!\n", p_dosya);
    fputs("Bursa Teknik Universitesi\n", p_dosya);

    // Formatli cikti yazma
    fprintf(p_dosya, "3 arti 4 esittir: %d\n", 3 + 4);

    // Birir harf yazma:
    for(char i = 'A'; i <= 'Z'; i++)
    {
        fputc(i, p_dosya);
    }

    fclose(p_dosya);
}

/*
Ek bilgi: Konsola yazma
puts("merhaba");           // yeni satira gecer
fputs("merhaba", stdout);  // yeni satira gecmez
*/
