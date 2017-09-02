#include <iostream>

using namespace std;

int main() 

{

	double n1, n2, f;

	cin>>n1>>n2;

	f = (n1+n2)/2;

	if(f >= 7)
		cout << "Aprovado" << endl;
	else if(f >=4)
			cout << "Recuperacao" << endl;
		else
			cout << "Reprovado" << endl;

	return 0;
}