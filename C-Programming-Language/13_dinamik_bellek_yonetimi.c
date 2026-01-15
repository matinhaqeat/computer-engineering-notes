#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Dinamik bellek yönetimi (Dynamic memory management):
// malloc  : memory allocation       ==> bellek tahsis eder (içerik rastgele)
// calloc  : clear allocation        ==> malloc gibi, ama içi sıfır ile doldurulur
// realloc : reallocation            ==> mevcut belleği yeniden boyutlandırır
// free    : tahsis edilmiş belleği boşaltır

// Statik dizi: boyutu program basinda belirlenir, calisma sirasinda degistirilemez
// Dinamik dizi: calisma sirasinda boyutu degistirilebilir, bellek malloc/calloc/realloc ile yonetilir



int main()
{


    /**********malloc**********/
    int dizi1[50];
    int N = 50;
    int *dizi2 = (int *) malloc (N * sizeof(int));
    // malloc, belirttiğiniz kadar byte bellek tahsis eder ve tahsis edilen belleğin ilk byte'ının adresini döndürür
    // Bu bellek başta rastgele değerler içerir, yani içeriği sıfırlanmış değildir
    for(int i=0; i<N; i++)
    {
        // Tahsis edilen belleğin her bir elemanına erişim ve değerlerini değiştirme
        *(dizi2+i) = 0;
    }
    //başarısız olursa NULL döner





    /**********calloc**********/
    int *dizi3 = (int *) calloc(N,sizeof(int));
    if(dizi3==NULL)
    // İstenen belleğin tahsis edilip edilmediğini kontrol etme
    {
        printf("calloc, istediginiz alani tahsis edemedi!\n");
        exit(1);
    }
    else
    {
        for(int i=0; i<N; i++)
        {
            *(dizi3+i) = i ;    //her elemana erisim
        }
    }
    //başarısız olursa NULL döner






    /**********realloc**********/
    dizi3 = (int*)realloc(dizi3,3*N*sizeof(int));
    // realloc iki parametre alır: bir dizi ve yeni boyut (byte cinsinden)
    // Belleği önceki adresin devamında genişletmeye çalışır
    // Eğer mümkün değilse, belleğe yeni bir adres tahsis eder ve eski blok korunur




    /**********free**********/
    free(dizi3);
    // free(dizi) tahsis edilmiş belleği boşaltır; pointer hâlâ eski adresi gösterir, bu nedenle erişim tehlikelidir
    // Güvenli kullanım için free'den sonra pointer NULL yapılabilir

    return 0;
}




    // RAM içinde:
    // - heap : dinamik diziler ve malloc/calloc/realloc ile tahsis edilen bellek
    // - stack : statik diziler ve fonksiyon içi yerel değişkenler

    // stack örnek:
    void func()
    {
        int x; // yerel değişken, fonksiyon bitince otomatik silinir
    }

    // heap örnek:
    void function()
    {
        int *p = malloc(sizeof(int)); // malloc ile heap'ten bellek alındı
        *p = 10;
        free(p); // bellek boşaltıldı
    }
