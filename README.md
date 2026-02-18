# ELEKTROMOBİL GÜVENLİK KONTROL SİSTEMİ

Bu proje, bir elektromobilin kullanım öncesi güvenlik kontrolünü yapmaktadır.

## PROJENİN AMACI

Program elektromobil ile alakalı aşağıdaki verileri kullanıcıdan alır ve kontrol eder:

1. **Batarya Sıcaklığı:** 60 Derece üzerindeyse hata verir.
2. **Şarj Yüzdesi:** %10 altındaysa sürüşe izin vermez.
3. **Kapı Durumu:** Kapılar açıksa bunu belirtir.
4. **Fren Durumu:** Frene basılı değil ise uyarı verir.

Eğer herhangi bir hata yok ise sistemin hazır olduğunu yazdırır.

## KURULUM VE ÇALIŞTIRMA

Önce kodu derlemeniz gerekmektedir:

gcc main.c -o arac_kontrol


Programı çalıştırmak için:
    **Windows:**
        arac_kontrol.exe
    **Mac/Linux:**
        ./arac_kontrol

#### Örnek Çıktı

--- ELEKTROMOBIL GUVENLIK KONTROLU ---
Batarya Sicakligi (C): 45.5
Sarj Yuzdesi (%): 80
Kapi Durumu (A/K): K
Fren Pedali (1:Basili, 0:Degil): 1
SONUC: BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...
