#include <stdio.h>

int main() {
    float batarya_sicakligi;
    float batarya_sicakligi;
    int sarj_yuzdesi;
    char kapi_durumu;
    int fren_pedali;

    printf("--- ELEKTROMOBİŞL GÜVENLİK KONTROLÜ ---\n");

    printf("Batarya Sıcaklığı (C): ");
    scanf("%f", &batarya_sicakligi);

    if (batarya_sicakligi < -100 || batarya_sicakligi > 200) {
        printf("SONUÇ: HATA: Mantıksız sıcaklık değeri! (-100 ile 200 arasonda olmalı)\n");
        return 1;
    }

    printf("Şarj Yüzdesi (%%): ");
    scanf("%d", &sarj_yuzdesi);

    if (sarj_yuzdesi < 0 || sarj_yuzdesi > 100) {
        printf("SONUÇ: HATA: Hatalı sensör verisi! Şarj %%0-%%100 arasında olmalı)\n");
        return 1;
    }

    printf("Kapı Durumu (A: Açık, K: Kapalı): ");
    scanf(" %c", &kapi_durumu); 

    if (kapi_durumu != 'A' && kapi_durumu != 'K') {
        printf("SONUÇ: HATA: Geçersiz karakter! (Sadece 'A' veya 'K' giriniz)\n");
        return 1;
    }

    printf("Fren Pedalı (1:Basılı, 0:Değil): ");
    scanf("%d", &fren_pedali);

    if (batarya_sicakligi > 60) {
        printf("SONUÇ: KRİTİK HATA: Motor Aşırı Isındı! Sürüş Engellendi.\n");
    } 
    else if (sarj_yuzdesi < 10) {
        printf("SONUÇ: UYARI: Batarya Kritik Seviyede! Şürüş Başlatılamaz.\n");
    } 
    else if (kapi_durumu == 'A') {
        printf("SONUÇ: HATA: Kapılar Açık! Lütfen Kapatınız.\n");
    } 
    else if (fren_pedali == 0) {
        printf("SONUÇ: BİLGİ: Güvenlik için frene basarak tekrar deneyin.\n");
    } 
    else {
        printf("SONUÇ: BAŞARILI: SİSTEM HAZIR. MOTOR BAŞLATILIYOR...\n");
    }

    return 0;
}