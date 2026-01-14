#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> // touper() ve tolower() için
#include <string.h>
// listeler:
int main()
{
    /** temeller **/
    int student_notes [6]={};                // tüm elemanlar sıfır
    int student_notec [6]={1,23,4};          // değer atanmış elemanlar dışında diğerleri 0
    char names [3][10]={"Matin", "ali", "ahmad"};
    char s[7] = {'d','e','n','\\','0','e','\0'};
    char c[100] = "dene\\0mggg";


    /** string yazdırma **/
    for (int i=0; i<8; i++)
    {
        printf("%c",c[i]);
    }


    /** double dizi oluşturma **/
    double numbers[10];
    srand(time(NULL));
    for (int i=0; i<10; i++)
    {
        numbers[i] = (rand()%10)/10.0 + (rand()%100);
    }


    /** dizi boyutu **/
    int my_list[]={12,34,45,5,56,34,23,23};
    int length_my_list = sizeof(my_list)/sizeof(my_list[0]);

    /** char_dizi ile ilgili bazı fonksiyonlar: **/
    char YourName[20];
    gets(YourName);     // scanf yerine strings için!
    int stringgh_length= strlen(YourName);
    strcpy(YourName,"new string");
    strcat(YourName,"this will be added to the end");
    strcmp("abiel","bol");     // sıfırdan küçük
    strcmp("abiel","abael");   // sıfırdan büyük
    YourName[0]=toupper(YourName[0]);
    YourName[1]=tolower(YourName[1]);
    printf("%s:",YourName); // %s --> string yazdırma!
}
