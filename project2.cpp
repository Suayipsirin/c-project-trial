#include <iostream>
using namespace std; //komut sat�r�ndan say� al bu say�ya kadar olan tamsay�lar� bast�r.
int main(){

setlocale(LC_ALL,"Turkish"); //t�rk�e karakter
int toplam;
int i;
int a;
cout <<"bir say� giriniz: " << endl;
cin >> a;

if(a >= 0){
if(a%2 == 0){
cout << a << " e kadar olan cift tamsay�lar�n toplam�: " << endl;
for( i=0; i<=a; i+=2)
{
	
	toplam +=i;
	cout << toplam << endl;
}
}
else if (a%2 != 0){
	cout << a << " e kadar olan tek tamsay�lar�n toplam�: " << endl;
	for(i=1; i<=a; i+=2)
	{
	toplam +=i;
	cout << toplam << endl;
	}
	
}
}
else if(a < 0){
	if(a%2 == 0){
		cout << a << " e kadar olan cift tamsay�lar�n toplam�: " << endl;
		for( i=0; i >= a; i-=2)
	{
		toplam +=i;
		cout << toplam << endl;
	}
}

else if(a%2 != 0){
	cout << a << " e kadar olan tek tamsay�lar�n toplam�: " << endl;
	for(i=-1; i >= a; i-=2)
	{
		toplam +=i;
		cout << toplam << endl;
	}
}
}







return 0;
}
	


