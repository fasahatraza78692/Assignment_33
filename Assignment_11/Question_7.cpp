#include<iostream>
using namespace std;
class Matrix
{
  protected:
	int a,b,c,d;
	  public:
	  	void set_data(int a1,int b1,int c1,int d1)
	  	 {
	  	 	a=a1;b=b1;c=c1;d=d1;
		 }
	  	virtual void cal_determinant()=0;
};
class calculate_determinant : public Matrix
{
	public:
	   	void cal_determinant()
	   	 {
	   	 	int dt = a*d-b*c;
	   	 	cout<<"Determinant = "<<dt<<endl;
		 }
};
int main()
{
	calculate_determinant m1;
	m1.set_data(4,2,3,4);
	m1.cal_determinant();
	return 0;
}
