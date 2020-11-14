# Görev-3
3\. görev `template` ve `vector` kullanımı ile alakalı.

Hedef: `create_matrix` isimli bir fonksiyon yazıyoruz. Bu fonksiyon girdi olarak 3 parametre almalı: `x`, `rows`, `cols`
Çıktı olarak elemanları x olan (`rows`x`cols`) boyutunda matris döndürmesi gerekiyor.
`x`'in türü belli olmadığı için `template` kullanmak gerekiyor.

Örnek: 
```
create_matrix((int)5, 2, 3)
```
Çıktı:
```
  5 5 5 
  5 5 5
```
### Yararlı Olabilecek Şeyler

`#include <vector>` diyerek gerekli kütüphaneyi kullanabilirsiniz.
Fonksiyonlar bu [sitede](http://www.cplusplus.com/reference/vector/vector/) mevcut.


Önemli olanlar şu şekilde sıralanabilir :

  ```
  (begin, end), size, (operator[], at), (front, back), push_back, erase, clear
  ```
  
  `template` kullanımı ile ilgili örnek kod: (mutlak değer döndürür)
 ```
  template <class T>
T abs(T x) {
  return (x<0) ? -x : x;
}
 ```
 
 Bu kod hangi tür girdi verirsek o tür çıktı verir.
```
abs(-5) = (int)5
abs(-5.0) = (double)5
abs('c') = (char)'c'
```

### Dikkat Edilmesi Gerekenler
* `create_matrix` fonksiyonundan önce template kullanmak için şu iki satırdan birini yazmak gerekiyor:

```
template <class T>
veya
template <typename T>
```
* Fonksiyonun döndürdüğü değer rows\*cols boyutunda bir matris. Dolayısıyla fonksiyonun türü `void` değil! Matris elde etmek için vektör içinde vektör kullanabilirsiniz.
* Fonksiyonun amacı matris döndürmek. **Ekrana yazdırsın istemiyoruz.**
