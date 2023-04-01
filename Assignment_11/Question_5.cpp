#include<iostream>
#include<cmath>
using namespace std; 
class Photon{
	protected:
		 double wavelenght;
    public:
    	Photon(double wavelenght):wavelenght(wavelenght/pow(10,-10))
    	{ }
};
class calculate_photoEnergy : public Photon{
	double E;
	   public:
	   	  calculate_photoEnergy(double value_in_angstrom):Photon(value_in_angstrom)
	   	  {
	   	  	
		  }
	    void calphotoEnergy()
	    {
	    	E=(6.626*(pow(10,-34))*3*(pow(10,8)))/wavelenght;
	    	cout<<"Photo Energy = "<<E<<endl;
		}
};
int main()
{
	calculate_photoEnergy pt1(0.5);
	pt1.calphotoEnergy();
	return 0;
}
