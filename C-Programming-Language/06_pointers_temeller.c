#include <stdio.h>

int main()
{
    int number = 1234;

    // int turunden bir pointer olusturma
    int *pnumber = &number;

    // pointer kullanarak degeri degistirme
    *pnumber = 123;

    // degiskenin adresini yazdirma
    printf("%p\n", &number);

    // her byte'a erisim
    printf("Her byte'a erisim:\n");
    char* number_adress = (char*) &number;

    for (int i = 0; i < sizeof(int); i++)
    {
        printf("%d: %p:\t%d\n", i+1, number_adress+i, *(number_adress+i));
    }

    // Little-endian: en dusuk anlamli byte once (cogu sistem)
    // Big-endian: en yuksek anlamli byte once

    return 0;
}
