#include<iostream>
using namespace std;
int main()
{
float sonuc=0;
int toplam=0;
int ikionceki=1;
int bironceki=1;
float altinoran=0;
altinoran=bironceki/ikionceki;
cout << "n=2 iken sonuc " << altinoran << endl;
 for(int n=3; n<1000000;n++){
 	 
 	toplam=bironceki;
 	bironceki=ikionceki+bironceki;
 	ikionceki=toplam;
 	sonuc=altinoran;
 	altinoran=bironceki/ikionceki;
 	cout << "n= " << n << "iken " << "altinoran" << altinoran << endl; 
 	
 	if(sonuc== 1.618033988749894){
 		cout << "altin orana yakinsamasi icin " << n << "adet deger girilmelidir" << endl;
 		cout << "altin oran sayisina en az hatayla yakinlasmak icin fibonacci dizisinin son elemaný" << bironceki<< "olmalýdýr" << endl;
	 }
 	
 	
 }
 system("PAUSE");
 return 0;
}
