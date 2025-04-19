#include <stdio.h>      // Standart giriş/çıkış fonksiyonları için
#include <stdlib.h>     // Genel amaçlı fonksiyonlar için
#include <unistd.h>     // sleep() fonksiyonu için

int main() {
    int sayi1, sayi2, secim;

    printf("Bir sayi giriniz: ");      // Kullanıcıdan ilk sayıyı ister
    scanf("%d", &sayi1);

    printf("ikinci sayi giriniz: ");   // Kullanıcıdan ikinci sayıyı ister
    scanf("%d", &sayi2);

    do {
        // İşlem menüsü
        printf("\nSecim yapiniz:\n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Carpma\n");
        printf("4. Bolme\n");
        printf("5. Cikis\n");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                // Toplama işlemi
                printf("%d + %d = %d\n", sayi1, sayi2, sayi1 + sayi2);
                break;
            case 2:
                // Çıkarma işlemi
                printf("%d - %d = %d\n", sayi1, sayi2, sayi1 - sayi2);
                break;
            case 3:
                // Çarpma işlemi
                printf("%d * %d = %d\n", sayi1, sayi2, sayi1 * sayi2);
                break;
            case 4:
                // Bölme işlemi (sıfıra bölme kontrolü ile)
                if (sayi2 != 0) {
                    printf("%d / %d = %.2f\n", sayi1, sayi2, (float)sayi1 / sayi2);
                } else {
                    printf("Hata! Sifira bolunemez.\n");
                }
                break;
            case 5:
                // Çıkış animasyonu
                printf("Cikis yapiliyor...\n\n");
                for (int i = 5; i >= 1; i--) {
                    printf("%d\n", i);
                    sleep(1); // 1 saniye bekle /? 1 saniye bekle (Windows'ta <windows.h>kutuphanesini kullan ve Sleep(1000); yaz) /? 1 saniye bekle (Linux'ta <unistd.h> kullan ve Sleep(1000); yaz)
                }
                printf("Cikis yapildi. Tesekkurler!\n");
                break;
            default:
                // Hatalı seçim uyarısı
                printf("Hatali secim. Lutfen 1-5 arasinda bir secim yapiniz.\n");
        }

    } while (secim != 5);  // 5 seçilmedikçe döngü devam eder

    return 0;
}