#include <iostream>
using namespace std; //komut satırından sayı al bu sayıya kadar olan tamsayıları bastır.
int main(){

setlocale(LC_ALL,"Turkish"); //türkçe karakter

int i;
int a;
cout <<"bir sayı giriniz: " << endl;
cin >> a;

cout << a << " e kadar olan tamsayılar: " << endl;
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
	


