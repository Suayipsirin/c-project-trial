#include <iostream>
using namespace std;

int main()
{
    int i,j,sayi,sayac=0;
    cout<<"istedigin sayiya kadar olan asal sayilari gormek icin bir sayi gir: ";
         
     cin>>sayi;
    
    for(i=2;i<=sayi;i++)
    {
                        for(j=1;j<=i;j++)
                        {
                           if(i%j==0)
                           {
                                     sayac=sayac+1;
                           }
                        }
                        if(sayac==2)
                        {
                                   cout<<i<<endl;
                        }
                        sayac=0;
                        
    }
    return 0;
}
