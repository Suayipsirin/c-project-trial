#include <iostream>
using namespace std; //komut sat�r�ndan say� al bu say�ya kadar olan tamsay�lar� bast�r.
int main(){

setlocale(LC_ALL,"Turkish"); //t�rk�e karakter

int i;
int a;
cout <<"bir say� giriniz: " << endl;
cin >> a;

cout << a << " e kadar olan tamsay�lar: " << endl;
if(a >= 0){

for( i=0; i<=a; i++)
{
	cout << i << endl;
	
	 
}
}
else if(a < 0){
	for(i=0; i>=a; i--)
	{
		cout << i << endl;
	}
}


}
	


