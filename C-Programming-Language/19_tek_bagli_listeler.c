#include <stdio.h>
/*
Bağlı listeler (Linked Lists), elemanların dinamik olarak eklenip
silinebildiği veri yapılarıdır. Elemanlar düğüm (node) şeklindedir
ve pointer’lar ile birbirine bağlanır.

Tek Bağlı Liste:
 - Her düğüm veri + sonraki düğümün adresini tutar.
 - Sadece ileri yönde gezilebilir.
 - Ekleme ve silme işlemleri kolaydır.

Çift Bağlı Liste:
 - Her düğüm veri + önceki ve sonraki düğüm adreslerini tutar.
 - İleri ve geri yönde gezilebilir.
 - Tek bağlı listeye göre daha fazla bellek kullanır.
*/


///Tek Bağlı Listeler(Singly Linked Lists):

struct Node
{
    int data;                  //stores the data
    struct Node * next;         //stores the pointer of the next Node
};
typedef struct Node Node;



int main()
{
    Node d1,d2,d3 ;            //Node cinsinden 3 variable tanimlamak
    Node *bas;                 //a pointer to store address of 1.Node

    //intialinsng and limking them togather:
    d1.data = 4;
    d2.data = 8;
    d3.data = 12;

    bas = &d1;
    d1.next = &d2;
    d2.next = &d3;
    d3.next = NULL; //veya =0

    //her elemana tek tek erisim:
    printf("%d\n",   d1.data                         );  //--> 4
    printf("%d\n",   (*bas).data                     );  //--> 4
    printf("%d\n",   (*((*bas).next)).data           );  //--> 8
    printf("%d\n",   (*((*((*bas).next)).next)).data );  //--> 12
    printf("\n\n");



    //tum elemanlari yazdirma:
    Node*temp;
    temp = bas;
    while(temp!=NULL)    //veya while(temp)
    {
        printf("%d\n",(*temp).data);
        temp = (*temp).next ;
    }



    //ikinci elemana erisim:
    temp = &d1;
    int counter = 2;
    for(int iterator=0; iterator<counter; iterator++)
        temp = (*temp).next ;
    printf("\n2.element of the list: %d",(*temp).data);



    //eleman eklemek(betwenn second and third(kolay):
    Node d8;
    d8.data = 123;
    d8.next = &d3;
    d2.next = &d8;


    //another notation:
    // bas->next      esittir       (*bas).next


    //eleman eklemek(betwenn second and third:
    Node eklenen;
    eklenen.data = 999;

    temp = &d1;
    temp = temp->next;//adress of 2. element

    eklenen.next = temp->next;
    temp->next = &eklenen;


    //en sonda eleman eklemek:
    Node eklenen2;
    eklenen2.data = 1000;
    eklenen2.next = NULL;

    temp = bas;
    while(temp->next)
        temp = temp->next;
    temp->next= &eklenen2;

    //3.elemani silme:
    temp = bas;
    for(int i=0; i<2; i++)
        temp = temp->next;
    temp->next=temp->next->next;


}

