#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, i;
	float fact;
	
	cin >> n;
	fact = 1;
	for(i=1; i<=n; i++)
		fact = fact*i;	
	cout << n << "! = " << fact << "\n";
	
	return 0;
}
