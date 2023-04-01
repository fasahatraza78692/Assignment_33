#include<iostream>
using namespace std;
class same{
	int x;
	  public:
	  	same(int x):x(x)
	  	{  }
	  	void swap(same *y)
		  {
		  	int temp=x;
		  	x=y->x;
		  	y->x=temp;
		  }
		void display()
		 {
		 	cout<<x<<endl;
	     }
};
int main()
{
	same s1(5);
	same s2(8);
	cout<<"Before swapping "<<endl;
	cout<<"S1 = "; s1.display();
	cout<<"S2 = "; s2.display();
	s1.swap(&s2);
	cout<<"After swapping "<<endl;
	cout<<"S1 = "; s1.display();
	cout<<"S2 = "; s2.display();
	return 0;
}
