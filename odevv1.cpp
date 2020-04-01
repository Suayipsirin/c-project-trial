#include <iostream>
using namespace std; //komut satýrýndan sayý al bu sayýya kadar olan tamsayýlarý bastýr.

void ciftler(int target) {
  int toplam = 0;
  for(int i=0;i<=abs(target);i++) {
    if (i % 2 == 0) {
      toplam += i;
    }
  }
  // negatiflerle ugrasmaya gerek yok cunku simetrigi olacak
  // atiyorum 5 verirse 9, -5 verirse -9 olacak
  // o yuzden illa yapmak istiyorsan ==> toplam*(target/abs(target))
  int sonuc = toplam*(target/abs(target));
  cout << target << " e kadar olan cift tamsayilarin toplami: " << sonuc << endl;
}

void tekler(int target) {
  int toplam = 0;
  for(int i=0;i<=target;i++) {
    if (i % 2 != 0) {
      toplam += i;
    }
  }
  // burayi da sen yap ornegin negatif sayilar icin.
  // bu comment'i sil, yerine yukaridaki gibi negatifleri handle edecek
  // kodu yaz sonra commit push
  cout << target << " e kadar olan tek tamsayilarin toplami: " << toplam << endl;
}

int main(){

  //setlocale(LC_ALL,"Turkish"); //türkçe karakter
  // türkçe karakterle uğraşmayalım gerek yok
  int toplam;
  int i;
  int a;
  cout <<" bir sayi giriniz: " << endl;
  cin >> a;

  ciftler(a);
  tekler(a);

  return 0;
}
	


