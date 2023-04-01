#include<iostream>
using namespace std;
class shape
{
	protected:
	double d1,d2;
	   public:
	     void set_data(double a,double b=0)
		 {   
		   d1=a;
		   d2=b;
		 }
		 virtual void display()=0;  
};
class triangle : public shape
{
	public:
		 void display() 
		  {
		  	double area = 0.5*d1*d2;
		  	 cout<<"Area of triangle "<<area<<endl;
		  }
};
class rectangle : public shape
{
	public:
		void display()
		 {
		 	double area=d1*d2;
		 	cout<<"Area of rectangle "<<area<<endl;
		 }
};
class circle : public shape
{
	public:
		void display()
		 {
		 	double area = 3.14*d1*d1;
		 	cout<<"Area of circle "<<area<<endl;
		 }
};
int main()
{
	triangle t1;
	t1.set_data(4.0,3.6);
	t1.display();
	rectangle r1;
	r1.set_data(5.1,3.8);
	r1.display();
	circle c1;
	c1.set_data(2.0);
	c1.display();
	return 0;
}
