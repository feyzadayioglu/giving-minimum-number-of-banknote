# giving-minimum-number-of-banknote
Bu projede otomatik araç yıkama makinesinin minimum sayıda banknot para üstü vererek çalışması istenmiştir. 
Proteus uygulaması üzerinde Arduino kartı simüle edilmiştir.

Program için bizden kasadaki para bilgilerini içeren (5 TL adedi, 10 TL adedi, 20 TL adedi, 50 TL adedi, 100 TL adedi) hizmetler.txt dosyası olmasını ve bunu okutarak işlem yapmamız istendi. Bu dosyanın diğer satırlarında hizmet çeşitlerinin bilgisi verilmiştir. Txt dosyası okutulduktan sonra kullanıcıdan makineye para yüklenmesi istenip simülasyonda tanımladığımız butonlarla para yükleme işlemi ve hizmetlerden birini seçmesi beklenmiştir. İşlem seçildikten sonraysa bitiş butonuyla, yanlış seçim yapıldıysa reset butonuyla çıkılması sağlanmıştır.
Para sıkışması ve bir problem olmadığını belirten durumlarda ise kırmızı ve yeşil olmak üzere 2 adet led yakmamız ve ardından kullanıcıya para üstü verilmesi gerekmektedir. 
İlk aşamada B1, B2, B3, B4, B5 butonları makineye para atmamızı sağlıyor ve atılan toplam parayı bağlamış olduğumuz LCD ekrana yazıyor, bitiş butonuna(B6)  basıldığında ise tuttuğumuz kontrol adlı değişkeni bir arttırarak sonraki aşama için butonların işlevini değiştiriyor. Yapılan her işlemden sonra lcd.clear(); komutunu kullanarak Lcd ekranı temizliyoruz. Sonraki aşamada butonlara eklenen dört hizmeti kullanıyoruz: köpükleme(B1), yıkama(B2), kurulama(B3), cilalama(B4). Makineye atılan para hizmet tutarından küçükse yetersiz bakiye uyarısı veriyoruz, yeterli hizmet adedinin kalıp kalmadığını kontrol etmek için her uygulanan hizmet için hizmet adededini bir azaltıyoruz, eğer hizmet tükendiyse hizmet tükendi uyarısı veriyoruz. Bu aşamada bitiş butonuna(B5) bastığımızda [1,4] aralığında random bir sayı üretiliyor.  Sayının ikiye eşit olduğu durumda para sıkışıyor ve kırmızı led yanıyor, para iadesi yapılıyor. Sayının ikiden farklı olma durumunda problem olmadığını belirten yeşil led yanıyor ve kasadaki banknot sayılarına göre para üstü veriliyor. Kasada verilmesi gereken yeterli para üstü yoksa "kasada yeterli  para yoktur" uyarısı veriliyor, kullanıcının yanlış bir işlem yapması durumunda reset butonu tüm işlemleri sıfırlıyor.

<img width="507" alt="foto1" src="https://user-images.githubusercontent.com/70232321/208321432-69df6d31-ec5f-4677-9006-c0a555779eaa.png">
<img width="509" alt="foto3" src="https://user-images.githubusercontent.com/70232321/208321452-af7505d4-2c75-479d-922e-73259c8b2bbf.png">
<img width="493" alt="yetersizbakiye" src="https://user-images.githubusercontent.com/70232321/208321472-1fb0d82e-f210-40d5-8c08-dd6836c34a62.png">
