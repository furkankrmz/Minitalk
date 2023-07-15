# Minitalk
Bu projenin amacı, UNIX sinyallerini kullanarak küçük bir veri değişim programı kodlamaktır.
Sunucu ve istemci yürütülebilir dosyalar üretmelisiniz.
İstemci, bir parametre olarak geçirilen bir dizeyi sunucuya iletmeli (sürecin kimliğiyle referans alınmalı(referenced by its process ID)) ve sunucu bunu görüntülemelidir.
YALNIZCA SIGUSR1 ve SIGUSR2 sinyallerini kullanmalısınız.<br/>
### İzin Verilen Fonksiyonlar

- [`malloc`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`free`](https://man7.org/linux/man-pages/man3/free.3.html)
- [`write`](https://man7.org/linux/man-pages/man2/write.2.html)
- [`getpid`](https://man7.org/linux/man-pages/man2/getpid.2.html)
- [`signal`](https://man7.org/linux/man-pages/man2/signal.2.html)
- [`sigemptyset & sigaddset`](https://man7.org/linux/man-pages/man3/sigsetops.3.html)
- [`sigaction`](https://man7.org/linux/man-pages/man2/sigaction.2.html)
- [`pause`](https://man7.org/linux/man-pages/man2/pause.2.html)
- [`kill`](https://man7.org/linux/man-pages/man2/kill.2.html)
- [`sleep`](https://man7.org/linux/man-pages/man3/sleep.3.html)
- [`usleep`](https://man7.org/linux/man-pages/man3/usleep.3.html)
- [`exit`](https://man7.org/linux/man-pages/man3/exit.3.html)
