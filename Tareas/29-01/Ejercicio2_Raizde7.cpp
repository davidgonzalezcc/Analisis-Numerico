#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	
long double n = 7;
long double E;
long double x = 2.5;
long double y = 0;

int vec[4] = {-5,-7,-32,-80};
	
E = pow(10,vec[0]);

y = 0.5*(x+(n/x));
cout<<"----"<<endl;
cout<<setprecision(9)<<y<<endl;
cout<<"---"<<endl;

for(int i = 0; i<4;i++)
{
	E = pow(10,vec[i]);
	cout<<vec[i]<<endl;
	while(fabs(x-y)>E)
	{
		x = y;
		y = 0.5*(x+n/x);
		cout<<y<<" ";
	}
	cout<<endl;	
}
}
