#include <iostream>

using namespace std;

int main()
{
	double n1, n2;

	cin>>n1>>n2;

	cout.precision(2);
	cout.setf(ios::fixed);
	cout<< n1/n2 << endl;

	return 0;
}