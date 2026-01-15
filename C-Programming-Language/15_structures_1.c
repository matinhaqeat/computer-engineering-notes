#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/*
Yapılar, farklı veri tiplerine sahip değişkenleri bir araya
getirip tek bir isimle kullanmamızı sağlayan kullanıcı tanımlı
veri türüdür (Record olarak da bilinir).

- Yapılar diziler gibi bellekte sürekli kalır.
- Yapı içindeki elemanlara üye (member) denir; her biri farklı tipte olabilir.
- Kendi veri tipinizi üretmeyi sağlar.
- Nesne tabanlı programlamanın temelini oluşturur ve
  C#, Java gibi dilleri öğrenmede yardımcı olur.
*/

//struct deyimi:
struct student
{
    char ad[50];
    char soyad[50];
    long long  NO;
    int cinsiyet;
    float genel_ortalama;
};


int main()
{

    //'struct student'tipinden bir degisken tanimlamak
    struct student ogrenci1;
    //ogrenci1'in struct'in uyelere erisim
    strcpy(ogrenci1.ad, "ahmet");
    strcpy(ogrenci1.soyad, "YILMAZ");
    ogrenci1.NO = 24360582923;
    ogrenci1.cinsiyet = 1;
    ogrenci1.genel_ortalama = 3.77;


    //ogrenci1.in belgileri yazdirmak:
    printf("ogrencinin adi:         %s\n",ogrenci1.ad);
    printf("ogrencinin soyadi:      %s\n",ogrenci1.soyad);
    printf("ogrencinin NO'su:       %lld\n",ogrenci1.NO);
    printf("ogrencinin GPA'si:      %.2f\n",ogrenci1.genel_ortalama);


    struct student ogrenci2;
    strcpy(ogrenci2.ad, "zehra");
    strcpy(ogrenci2.soyad, "DEMIR");
    ogrenci2.NO = 25678582189;
    ogrenci2.cinsiyet = 0;
    ogrenci2.genel_ortalama = 2.53;


    ogrenci1 = ogrenci2 ;
    //struct tipindeki bir değişkenin değeri aynı tipteki bir başka struct değişkenine atanabilir
    // if(ogrenci1==ogrenci2)...         ==> yanlistir
    // if(ogrenci1.NO==ogrenci2.NO)...   ==> uyeler karsilastirilabilir
}
