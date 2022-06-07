#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

class AnaClass
{
	public:
		virtual void SayiIste() = 0;	
};

class Devlet : public AnaClass
{
	public:
		void SayiIste()
		{
			int s1;
			cin>>s1;
			cout<<s1+31<<endl;
		}
};
class Ozel : public AnaClass
{
	public:
		void SayiIste()
		{
			int s1;
			cin>>s1;
			cout<<s1-31<<endl;
		}	
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	Devlet d1;
	d1.SayiIste();
	
	Ozel o1;
	o1.SayiIste();
	
	return 0;
}
