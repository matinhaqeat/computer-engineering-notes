#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>

// C dilinde fonksiyonlar:

// Diziler fonksiyona gönderildiğinde referans (adres) ile aktarılır,
// bu yüzden fonksiyon içinde yapılan değişiklikler orijinal diziyi etkiler.



/// 1. fonksiyon: toplama
int add(int a, int b)
{
    return a+b;
}

/// 2. fonksiyon: dizi elemanlarını toplama
int add_list(int my_list[],int length)
{
    int sum=0;
    for(int i=0; i<length; i++)
        sum += my_list[i];
    return sum;
}

/// 3. fonksiyon: dizinin tüm elemanlarını 2 ile çarpma
void double_my_list(int the_list[], int length)
{
    for(int i=0; i<length; i++)
        the_list[i] *=2;
}

/// 4. fonksiyon: ekrana selamlama yazdırma
void greeting()
{
    printf("hello every one and welcome to our applicatin\n");
    printf("i hope my application is usfull for u!\n");
}

/// 5. fonksiyon: diziyi ters çevirme
void swap_list(int my_list[], int length)
{
    int temp;
    for(int i=0; i<length/2; i++)
    {
        temp = my_list[i];
        my_list[i]=my_list[length-i-1];
        my_list[length-i-1]=temp;
    }
}

/// 6. fonksiyon: diziyi ekrana yazdırma
void print_list(int dizi[], int length)
{
    for(int i=0; i<length; i++)
    {
        printf("%d\t",dizi[i]);
    }
}


int main (int argc, char *argv[])
{
    int dizi[]={1,4,6,23,56,78};

    printf("4.ftn: greetings:\n");
    greeting();

    printf("6.ftn: printing the list: ");
    print_list(dizi,6);

    printf("\n3.fnt:double the list:");
    double_my_list(dizi, 6);
    print_list(dizi, 6);
}
