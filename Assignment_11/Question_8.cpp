#include<iostream>
using namespace std;
class proof
{
	protected:
		int height,base,hypo;
	public:
		void set_data(int hypo1,int base1,int height1)
		  { height=height1;base=base1;hypo=hypo1; }
};
class compute:public proof
{
	public:
		void isRightangle_triangle()
		 {
		 	if(hypo*hypo==base*base+height*height)
		 	  cout<<"Yes";
		 	else
		 	  cout<<"No";
		 }
};
int main()
{
	compute p1;
	p1.set_data(10,6,8);
	p1.isRightangle_triangle();
	return 0;
}
