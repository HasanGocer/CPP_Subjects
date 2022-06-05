#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
#include <math.h>

using namespace std;

class musteri
{
	private:
		string musteriIsim;
		string musteriNo;
		string musteriSiparis;
		int fiyat;
		int adet;
	
	public:
		void MusteriIsimEkle(string mIsim)
		{
			musteriIsim=mIsim;
		}
		
		void MusteriNoEkle(string mNo)
		{
			musteriNo=mNo;
		}
		
		void MusteriSiparisEkle(string mSiparis)
		{
			musteriSiparis= mSiparis;
		}
		
		void MusteriFiyatEkle(int mFiyat)
		{
			fiyat=mFiyat;
		}
		
		void MusteriAdetEkle(int mAdet)
		{
			adet=mAdet;
		}
		
		void yazdir()
		{
			cout<<"Müþteri isim :     "<<musteriIsim<<endl<<"Müþteri numarasý : "<<musteriNo<<endl<<"Müþteri sipariþi : "<<musteriSiparis<<endl<<"Ürün fiyatý :      "<<fiyat<<endl<<"ürün adedi :       "<<adet<<endl;
		}
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	musteri m1[50];
	m1[0].MusteriIsimEkle("Hasen");
	m1[0].MusteriNoEkle("31");
	m1[0].MusteriSiparisEkle("Kod");
	m1[0].MusteriAdetEkle(3);
	m1[0].MusteriFiyatEkle(93);
	
	m1[0].yazdir();
	
	
	return 0;
}
