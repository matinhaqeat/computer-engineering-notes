#include <stdio.h>

// Intro (basics)

/*
Problem çözme sırası:
1: problemi anlama
2: çözüm yolu geliştirme
3: algorithm ve program yazma
4: tekrar tekrar test etme
*/

int main()
{
    printf("This line makes outputs!\n");

    int x;
    printf("Enter an integer: ");
    scanf("%d", &x); // this line takes input

    printf("The value of x is: %d\n", x); // outputting variables

    /***
    Escape characters:
    \0  null character / sonlandırıcı
    \n  next line
    \r  start of the same line
    \t  tab
    \v  vertical tab
    \f  form feed
    \b  backspace
    \a  alert / beep
    \"  "
    \\  \

    Data types: char / int / float / double (unsigned/short/long)

    Format specifiers:
    %d      int
    %ld     long int
    %u      unsigned int (decimal)
    %x/%X   unsigned int (hexadecimal)
    %lx     unsigned long int (hex)
    %s      string
    %c      char (one character)
    %f      float
    %lf     double
    %e      scientific notation
    ***/

    return 0;
}
