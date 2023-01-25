#include "stdafx.h"
#include <iostream>
using namespace std;
#define N 3
#define M 3

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, arr[N][M], s=0;
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
			if(j==M-i-1)
				s = s + arr[i][j];

	cout << "s = " << s << "\n";

	return 0;
}
