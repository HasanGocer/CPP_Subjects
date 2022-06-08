#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
#include <math.h>

using namespace std;

class kronometre
{
	private:
		clock_t baslangic;
		clock_t bitis;
	
	public:
		float KacSaniye()
		{
			baslangic=clock();
			cout<<"yazý yazýn : ";
			string HG;
			getline(cin,HG);
			bitis=clock();
			return (bitis-baslangic)/CLOCKS_PER_SEC;
		}
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	kronometre HG;
	float saniye = HG.KacSaniye();
	cout<<saniye;
	
	return 0;
}
