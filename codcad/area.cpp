#include <iostream>

using namespace std;

int main()
{
	double l1, h1, l2, h2, a1, a2;

	cin>>l1>>h1;
	cin>>l2>>h2;

	a1 = l1 * h1;
	a2 = l2 * h2;

	if(a1 == a2)
		cout<< "Empate" << endl; 
	else if(a1 > a2)
			cout <<"Primeiro" << endl;
		else
			cout << "Segundo" << endl;

	return 0;
}