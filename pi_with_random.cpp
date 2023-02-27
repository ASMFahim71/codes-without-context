#include<bits/stdc++.h>
using namespace std;
double pi(int n)
{
	int point_circle=0;
	srand((unsigned)time(NULL));
	for (int i=1;i<=n;i++) 
    {
        double x =(double) rand()/RAND_MAX;
        double y= (double) rand()/RAND_MAX; 
        double distance = x*x + y*y;
        if(distance<=1) point_circle++;
    }
    return point_circle;
}
int main()
{
	int n;
	cin>>n;
	cout<<(4*pi(n))/n<<endl;
	return 0;
}
