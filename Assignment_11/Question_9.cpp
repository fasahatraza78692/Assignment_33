#include<iostream>
using namespace std;
class volume{
	protected:
		double d1,volume;
	public:
		void set_data(int d1)
		 {
		 	this->d1=d1;
		 }
		virtual void display_volume()=0;
};
class cube : public volume
{
	public:
		 void display_volume()
		  {
		  	volume=d1*d1*d1;
		  	cout<<"Volume of Cube "<<volume<<endl;
		  }
};
class sphere : public volume
{
	public:
		 void display_volume()
		  {
		  	volume=4.0/3*3.14*d1*d1*d1;
		  	cout<<"Volume of Sphare "<<volume<<endl;
		  }
};
int main()
{
	cube c1;
	c1.set_data(4.0);
	c1.display_volume();
	sphere s1;
	s1.set_data(3.0);
	s1.display_volume();
	return 0;
}
