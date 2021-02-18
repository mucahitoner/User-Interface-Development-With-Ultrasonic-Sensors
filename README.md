Temelinde insan makine etkileşiminin yer aldığı projemiz ultrasonik sensörlerden oluşan panelimiz yardımıyla el komutlarının algılanmasının gerektiği noktalarda önemli bir rol oynar. Örneğin işaret dilini kullanan bireyler için değerlendirilebileceğimiz projemiz, işaret dili hareketleri ile sanal ortama bireyler konuşmalarını aktarabilir ya da aramada bulunabilir. Bir nevi klavye girdisi olarak da düşünebiliriz.

Kullanılan Malzemeler;

>PIC18F45K22

>HC-06 Bluetooth Modülü

>12 Adet HC-SR04 Ultrasonik Mesafe Sensörü

Sistem Akış Şeması ve Panelimiz

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/sistem-ak%C4%B1%C5%9F-%C5%9Femas%C4%B1.png" width="100%"/>

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/ultrasonik-sens%C3%B6r-paneli.jpg" width="100%"/>

Belirlenen El Hareketleri ve Kriterleri

Uluslararası işaret dili alfabesinden seçilen 4 hareket ile dur ve tamam dahil olmak üzere 6 tip hareket için çalışıldı. 3 farklı mesafede, belli bir konuma bağlı kalmaksızın ve farklı el tiplerinde çalışıldı.

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/elhareketleri.png" width="100%"/>

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/elhareketlerimesafesi.png" width="100%"/>

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/belirlenen%20konumlar.png" width="100%"/>

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/el-tipleri.jpg" width="100%"/>

Eğitim verilerinden model elde edebilmek için çok katmanlı yapay sinir ağından yararlanıldı. El verilerini tanıtabilmemiz aşağıda belirlenen binary karşılıkları kullanıldı.

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/hareketlerin-binary-kar%C5%9F%C4%B1l%C4%B1klar%C4%B1.png" width="100%" />

Kullandığımız yapay sinir ağları özellikleri de şöyledir;
1.	Yapay sinir ağı 15 nöron sayısına ve tansig tansfer fonksiyonuna sahiptir.
2.	Yapay sinir ağı 20 nöron sayısına ve pureline tansfer fonksiyonuna sahiptir.
3.	Yapay sinir ağı 20 nöron sayısına ve logsig tansfer fonksiyonuna sahiptir.


Elde edilen performans sonuçları;

<img src="https://github.com/mucahitoner/User-Interface-Development-With-Ultrasonic-Sensors/blob/main/img/performans-y%C3%BCzdeleri.jpg" width="100%"/>

Çalışma Videosu
Çok yakında! Coming Soon!
