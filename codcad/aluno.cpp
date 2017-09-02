#include <iostream>

using namespace std;

int main()
{
	double tpedro, tpaulo;

	cin>>tpedro>>tpaulo;

	if(tpedro <= tpaulo)
		cout << "Pedro" << endl;
	else
		cout << "Paulo" << endl;

	return 0;
}