#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

class IcStruct
{
	private:
		struct HG
		{
			int s1;
			int s2;
		}H1;
	
	public:
		void SayiDegis(int s1=0,int s2=0)
		{
			H1.s1 = s1;
			H1.s2 = s2;
		}
		
		void VeriIste()
		{
			cout<<H1.s1<<" "<<H1.s2;
		}
	
		
	
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	IcStruct Deneme;
	Deneme.SayiDegis(31,32);
	Deneme.VeriIste();
	
	
	return 0;
}
