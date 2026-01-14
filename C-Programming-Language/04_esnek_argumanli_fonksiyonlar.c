#include <stdio.h>
#include <stdarg.h>

// Esnek argümanlı fonksiyonlarda,
// kaç tane argüman gönderildiğini fonksiyonun kendisi bilemez.
// Bu yüzden argüman sayısı ayrıca parametre olarak verilmelidir.


/*
parameter  --> fonksiyon tanımındaki değişken
argument   --> fonksiyona gönderilen değer
prototype  --> main'den önce yapılan fonksiyon bildirimi

va_list    --> değişken sayıda argüman için liste tanımlar
va_start   --> argüman listesini başlatır
va_arg     --> argümanları tek tek okur
va_end     --> argümanlara erişimi sonlandırır
*/

int sum(int counter, ...)
{
    va_list elements;
    va_start(elements, counter);

    int total = 0;
    for (int i = 0; i < counter; i++)
    {
        total += va_arg(elements, int);
    }

    va_end(elements);
    return total;
}

int main()
{
    // sum fonksiyonu çağrılırken,
    // ilk parametre argüman sayısını belirtir,
    // devamında bu sayıya karşılık gelen değerler gönderilir.
    printf("%d\n", sum(4, 1, 2, 3, 4));

    return 0;
}
