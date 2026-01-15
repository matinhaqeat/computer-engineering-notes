#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

///typedef_kullanimi:
// 'struct student' yerine sadece 'Student' diyebilmek için typedef kullanılabilir
typedef struct{
    char ad[50];
    char soyad[50];
    int  NO;
    int cinsiyet;
    float genel_ortalama;
}student;

struct number
{
    long h_number;
    long W_number;
    long P_number;
};
typedef struct number NUM;
// 'struct number' yerine typedef ile artık 'NUM' da kullanılabilir (ikisi de geçerli)!


///struct icinde struct:
typedef struct{
    char email [25];
    long number;
}iletisim;

typedef struct{
    char name[15];
    char title[15];
    iletisim contact;
}worker;


int main()
{
    //struct icinde struc:
    worker isci1;
    strcpy(isci1.name,"ali");
    strcpy(isci1.title,"on basi");
    strcpy(isci1.contact.email,"ali_on_basi@gmail.com");
    isci1.contact.number = 5514812420;

}
