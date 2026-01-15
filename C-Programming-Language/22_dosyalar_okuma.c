#include <stdio.h>

/// Metin dosyalari(okuma):

int main ()
{
    FILE *p_dosya = fopen("ornek_metin.txt","r");

    /// Dosyanin acilip acilmadigini kontrol etme
    if(!p_dosya)
    {
        printf("Dosya acilamadi!");
        return 1;
    }



    ///tum karekterleri birir tane okuma ve yazma:
    printf("tum karekterleri birir tane okuma ve yazma:\n");
    char c [1001];
    char temp;
    int i=0;

    while(1)
    {
        temp=fgetc(p_dosya);
        if(temp==EOF) break;
        if(i>=1000)    break;
        c[i]= (temp);
        i++;
    }
        c[i]='\0';
    printf("%s",c);
    rewind(p_dosya); // dosya imlecini dosyanın başına götürür





    ///bosluk gorune kadar okuma ve yazma:
    printf("\n\n\n\nbosluk gorune kadar okuma ve yazma:\n");
    char okunan [100];
    while(!feof(p_dosya))

    {
        fscanf(p_dosya,"%s",&okunan);
        printf("%s\n",okunan);
    }
    rewind(p_dosya);



    ///newline(\n) gorune kadar okuma ve yazma:
    printf("\n\n\n\nnewline gorune kadar okuma ve yazma:\n");
    char buffer[256];
    while(fgets(buffer, 256, p_dosya) != NULL)
    {
        printf("%s", buffer);
    }



    fclose(p_dosya);
}

