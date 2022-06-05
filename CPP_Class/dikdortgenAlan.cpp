#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
#include <math.h>

using namespace std;

class alan
{
	private:
		int boy;
		int en;
	
	public:
		alan(int e,int b)
		{
			en=e;
			boy=b;
		}
		int Aalan()
		{
			return en*boy;
		}
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	alan a1(3,4);
	int a=a1.Aalan();
	cout<<a;
	
	
	return 0;
}
