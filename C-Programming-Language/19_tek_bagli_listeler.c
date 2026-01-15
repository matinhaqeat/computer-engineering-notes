#include <stdio.h>

/*
Bagli Listeler (Linked Lists), elemanlarin dinamik olarak
eklenip silinebildigi veri yapilaridir.
Elemanlar dugum (node) seklindedir ve pointer'lar ile baglanir.

Tek Bagli Liste:
 - Her dugum veri + sonraki dugumun adresini tutar
 - Sadece ileri yonlu gezilebilir
 - Ekleme ve silme islemleri kolaydir

Cift Bagli Liste:
 - Her dugum veri + onceki ve sonraki dugumun adresini tutar
 - Ileri ve geri yonlu gezilebilir
 - Daha fazla bellek kullanir
*/

/// Tek Bagli Liste (Singly Linked List)

struct Node
{
    int data;            // Dugumde tutulan veri
    struct Node *next;   // Sonraki dugumun adresi
};

typedef struct Node Node;

int main()
{
    Node d1, d2, d3;     // 3 adet dugum tanimlanir
    Node *bas;           // Ilk dugumun adresini tutan pointer

    // Dugumleri baslatma ve birbirine baglama
    d1.data = 4;
    d2.data = 8;
    d3.data = 12;

    bas = &d1;
    d1.next = &d2;
    d2.next = &d3;
    d3.next = NULL;

    // Tek tek elemanlara erisim
    printf("1. eleman: %d\n", d1.data);
    printf("1. eleman (bas ile): %d\n", bas->data);
    printf("2. eleman: %d\n", bas->next->data);
    printf("3. eleman: %d\n", bas->next->next->data);
    printf("\n");

    // Tum elemanlari yazdirma
    Node *temp = bas;
    printf("Listenin tum elemanlari:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    // Ikinci elemana erisim
    temp = bas;
    for (int i = 0; i < 1; i++)
        temp = temp->next;

    printf("\n2.eleman: %d\n", temp->data);

    // Ikinci ve ucuncu eleman arasina eleman ekleme
    Node d8;
    d8.data = 123;
    d8.next = d2.next;
    d2.next = &d8;


    // Baska bir notasyon:
    // bas->next esittir (*bas).next


    // Baska bir ekleme ornegi
    Node eklenen;
    eklenen.data = 999;

    temp = bas->next;          // 2. dugum

    eklenen.next = temp->next;
    temp->next = &eklenen;

    // Listenin sonuna eleman ekleme
    Node eklenen2;
    eklenen2.data = 1000;
    eklenen2.next = NULL;

    temp = bas;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = &eklenen2;

    // 3. elemani silme
    // (once 2. elemanin uzerine gelinir, sonra bag koparilir)
    temp = bas;
    for (int i = 0; i < 1; i++)
        temp = temp->next;

    temp->next = temp->next->next;

    /*
      Not:
      Bu ornek statik dugumler ile yapilmistir.
      Gercek bagli listelerde dugumler malloc ile olusturulur
      ve silme islemlerinde free kullanilir.
    */

    return 0;
}
