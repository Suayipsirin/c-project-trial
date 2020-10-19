#include <iostream>
#include <math.h>
using namespace std; //komut satirindan sayi al bu sayiya kadar olan tamsayilari bastir.

int  mutlak(int sayi) {

	if(sayi<0) {
		sayi=sayi*-1;
       
}
      return sayi;
}
void ciftler(int target) {
  int toplam = 0;
  for(int i=0;i<= mutlak(target);i++) {
    if(isEven(i)) {
      toplam += i;
    }
  }
  
  int sonuc = toplam*(target/mutlak(target));
  cout << target << " e kadar olan cift tamsayilarin toplami: " << sonuc << endl;
}

void tekler(int target) {
  int toplam = 0;
  for(int i=0;i<= mutlak(target);i++) {
    if(isOdd(i)) {
      toplam += i;
    }
  }
   int sonuc = toplam*(target/ mutlak(target));
  cout << target << " e kadar olan tek tamsayilarin toplami: " << sonuc << endl;
}

bool isEven(int i) {
  bool even = true;
}
int main()
{
	int number;
	while(number>=0){
		number=number-2;
	}
	   return 0;
}

bool isOdd(int i){
	bool odd = true;
	
}
int main()
{
	int number;
	while(number>=0){
		number=number-2;
	}
	return 0;
}



int main(){

 
  int toplam;
  int i;
  int a;
  cout <<" bir sayi giriniz: " << endl;
  cin >> a;

  ciftler(a);
  tekler(a);
  
  return 0;
}




	


