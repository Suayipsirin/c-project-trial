#include <iostream>
using namespace std; //komut satýrýndan sayý al bu sayýya kadar olan tamsayýlarý bastýr.
int main(){

setlocale(LC_ALL,"Turkish"); //türkçe karakter
int toplam;
int i;
int a;
cout <<"bir sayý giriniz: " << endl;
cin >> a;

if(a >= 0){
if(a%2 == 0){
cout << a << " e kadar olan cift tamsayýlarýn toplamý: " << endl;
for( i=0; i<=a; i+=2)
{
	
	toplam +=i;
	cout << toplam << endl;
}
}
else if (a%2 != 0){
	cout << a << " e kadar olan tek tamsayýlarýn toplamý: " << endl;
	for(i=1; i<=a; i+=2)
	{
	toplam +=i;
	cout << toplam << endl;
	}
	
}
}
else if(a < 0){
	if(a%2 == 0){
		cout << a << " e kadar olan cift tamsayýlarýn toplamý: " << endl;
		for( i=0; i >= a; i-=2)
	{
		toplam +=i;
		cout << toplam << endl;
	}
}

else if(a%2 != 0){
	cout << a << " e kadar olan tek tamsayýlarýn toplamý: " << endl;
	for(i=-1; i >= a; i-=2)
	{
		toplam +=i;
		cout << toplam << endl;
	}
}
}







return 0;
}
	


