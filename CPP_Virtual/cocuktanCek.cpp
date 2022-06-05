#include <iostream>
#include <conio.h> 
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

//virutuallerden kalýtým alan bir alt sýnýf koy ama virtulalleri overload yapma 
//mainde iki yeri de çaðýr ve pointeri alt sýnýfa baðla
//sonra okut istediðini özgürsün

//static gibi düþün iþe yaradýðý yerler aktif olarak tek kullanýmdan oluþmalý kullanýþlý ama spesifik kullanýþlý

class HGV
{
	 public:
		int s1 = 31;
		int s2 = 3131;
	public:
		virtual void HG()
		{
			cout<<s1<<" "<<s2;
		}
	
};

class HGD: public HGV
{
	public:
		degis(int s3=1,int s4=2)
		{
			s1 = s3;
			s2 = s4;
		
		}
		
};

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	HGV *v1;
	HGD  v2;
	
	v1 = &v2;
	
	//v2.degis(34,4567);
	//v2.degis();
	v2.HG();
	
	return 0;
}
