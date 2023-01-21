#include <iostream>
#define N 2
#define M 3

int main() {
    int i, j, arr[N][M], p=0;
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			std::cout << "arr[" << i << "][" << j << "] = ";
			std::cin >> arr[i][j];
		}
	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
			if(i==0 || j==0 || i==N-1 || j==M-1)
				p = p + arr[i][j];
	std::cout << "p = " << p << "\n";


    return 0;
}
