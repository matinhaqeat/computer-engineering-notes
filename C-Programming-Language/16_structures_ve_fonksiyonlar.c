#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

///struct'ler ve fonksiyonlar:
//1. Struct değişkenleri fonksiyon parametresi olarak verilebilir.
//2. Fonksiyonlar struct tipinde değer döndürebilir.


struct student
{
    char ad[50];
    char soyad[50];
    int  NO;
    int cinsiyet;
    float genel_ortalama;
}ogrenci1, ogrenci2, ogrenci3;  // Bu noktada 'struct student' tipinde değişkenler de tanımlanabilir

///1.fonksiyon: yazdirma:
void ogrenci_struct_yazdir(struct student ogr) {
    printf("NO: %0.10d\n", ogr.NO);
    printf("Ad: %s\n", ogr.ad);
    printf("Soyad: %s\n", ogr.soyad);
    printf("Cinsiyet: %s\n", ogr.cinsiyet ? "Erkek" : "Kadin");
    printf("GPA: %.2f\n\n", ogr.genel_ortalama);
}


///2.fonksiyon: random:
struct student ogrenci_random()
{
    struct student ogr;
    ogr.NO = rand()%1000000000;
    ogr.cinsiyet = rand()%2;
    ogr.genel_ortalama = ((float)rand() / RAND_MAX)* 4.0f;

    //ad yaratma;
    int ad_length = rand()%6+5; //5-10 karekter
    for(int i=0; i<ad_length; i++)
    {
        ogr.ad[i] = rand()%26+'a';
    }
    ogr.ad[ad_length] = '\0';   // string sonu

    //soyad yaratma:
    int soyad_length = rand()%6+5; //5-10 karekter
    for(int i=0; i<soyad_length; i++)
    {
        ogr.soyad[i] = rand()%26 + 'a';
    }
    ogr.soyad[soyad_length] = '\0';
    return ogr;
}

int main()
{

    strcpy(ogrenci1.ad, "ahmet");
    strcpy(ogrenci1.soyad, "YILMAZ");
    ogrenci1.NO = 243605829;
    ogrenci1.cinsiyet = 1;
    ogrenci1.genel_ortalama = 3.77;

    //yazdirma:
    ogrenci_struct_yazdir(ogrenci1);

    //random:
    srand(time(NULL));
    ogrenci2 = ogrenci_random();
    ogrenci_struct_yazdir(ogrenci2);
}
