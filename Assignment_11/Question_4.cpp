#include<iostream>
using namespace std;
class shape
{
	protected:
	double d1,d2;
	   public:
	     void set_data(double a,double b)
		 {   
		   d1=a;
		   d2=b;
		 }
		 virtual void display_area()=0;  
};
class triangle : public shape
{
	public:
		 void display_area() 
		  {
		  	double area = 0.5*d1*d2;
		  	 cout<<"Area of triangle "<<area<<endl;
		  }
};
class rectangle : public shape
{
	public:
		void display_area()
		 {
		 	double area=d1*d2;
		 	cout<<"Area of rectangle "<<area<<endl;
		 }
};
int main()
{
	triangle t1;
	t1.set_data(9.3,2.6);
	t1.display_area();
	rectangle r1;
	r1.set_data(8.4,3.4);
	r1.display_area();
	return 0;
}
