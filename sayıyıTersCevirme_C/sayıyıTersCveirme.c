#include <stdio.h>

int main() {
    int sayi, tersSayi = 0, kalan;

   
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

  
    while (sayi != 0) {
        kalan = sayi % 10;           
        tersSayi = tersSayi * 10 + kalan; 
        sayi = sayi / 10;         
    }

 
    printf("Ters cevrilen sayi: %d\n", tersSayi);

    return 0;
}

