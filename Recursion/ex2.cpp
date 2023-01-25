#include "stdafx.h"
#include <iostream>
using namespace std;
void dec_byn(int a)
{
	if(a > 0)
	{
		dec_byn(a/2);
		cout << (a%2);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "n(10): ";
	cin >> n;
	cout << "n(2): ";	
	dec_byn(n);
	cout << "\n";
	return 0;
}

