#include <stdio.h>
#include <string.h>

///union(Birlikler):
/*
Birlikler (union), yapılar(struct) gibi sürekli belleğe yerleşir.
 - Yapılara(struct) göre daha az kullanılır.
 - Değişkenlerin aynı bellek alanını paylaşması için `union` kullanılır; yer, birliğin en büyük üyesi kadardır.
 - Belleğin daha verimli kullanılmasını sağlar.
 - Aynı anda sadece bir üye geçerlidir.
 - Tanımlarken `struct` yerine `union` yazılır.
*/

union test
{
    long number;
    char email[20];
};

int main() {
    union test t;
    t.number = 123456;
    printf("Number: %ld\n", t.number);

    strcpy(t.email, "ali@gmail.com");
    printf("Email: %s\n", t.email);

    // Artık t.number geçersizdir, çünkü email belleği paylaştı
    printf("Number tekrar: %ld\n", t.number);

    // Union boyutunu yazdırmak
    printf("Union boyutu: %zu byte\n", sizeof(union test));

    return 0;
}
