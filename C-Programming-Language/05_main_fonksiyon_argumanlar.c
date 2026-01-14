#include <stdio.h>

/*
main fonksiyonunun argümanları (argc, argv)

argc (argument count):
- Komut satırından gönderilen argüman sayısını tutar

argv (argument vector):
- Komut satırından gönderilen argümanları tutan string dizisidir
- argv[0] her zaman programın adını tutar
- argv[1]'den itibaren kullanıcı tarafından gönderilen argümanlar bulunur
*/

int main(int argc, char *argv[])
{
    printf("Argument count (argc): %d\n\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}

/*
Örnek çalıştırma:

./program 10 hello 3.14

argc = 4
argv[0] = ./program
argv[1] = 10
argv[2] = hello
argv[3] = 3.14

Not:
- argv içindeki tüm değerler char* (string) tipindedir
- Sayısal işlemler için atoi(), atof() gibi fonksiyonlar kullanılmalıdır
*/
