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
		int a;
		int b;
	
	public:
		alan()
		{
			cout<<"sayı 30'dan büyük";
		}
		alan(int d,int c)
		{
			cout<<d*c;
		}
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	int c,d;
	
	cout<<"2 sayı ver : ";
	cin>>c>>d;
	
	if(c*d>30)
	{
		alan a1();
	}
	
	else
	{
		alan a1(c,d);
	}
	
	
	return 0;
}
