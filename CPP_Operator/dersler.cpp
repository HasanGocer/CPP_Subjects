#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

class ders
{
	
	private:
		int s2;
		
	public:
		int s1;
	
	public:
		ders()
		{
			s1=31;
			s2=32;
		}
		
		ders(int a1,int a2)
		{
			s1=a1;
			s2=a2;
		}
		
		ders operator + (ders const &HG)
		{
			ders HHG;
			HHG.s1 = s1 + HG.s1;
			HHG.s2 = s2 + HG.s2;
			return HHG;
		}
		
		void yazdir()
		{
			cout<<s1<<" "<<s2;
		}
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	ders HG(23,43);
	ders HHG;
	ders hasen = HG + HHG;
	
	hasen.yazdir();
	
	return 0;
}
