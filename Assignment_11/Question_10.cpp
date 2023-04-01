#include<iostream>
using namespace std;
class shape{
	protected:
		double d1,d2;
	public:
		void set_data(double d1,double d2=0)
		 {
		 	this->d1=d1;
		 	this->d2=d2;
		 }
		virtual void display_area()=0;
};
class square : public shape
{
	public:
		 void display_area() 
		  {
		  	double area=d1*d1;
		  	cout<<"Area of Square "<<area<<endl;
		  }
};
class parallelogram : public shape
{
	public:
		 void display_area() 
		  {
		  	double area=d1*d2;
		  	cout<<"Area of Parallelogram "<<area<<endl;
		  }
};
int main()
{
	square s1;
	s1.set_data(4.0);
	s1.display_area() ;
	parallelogram p1;
	p1.set_data(3.0,4.1);
	p1.display_area() ;
	return 0;
}
