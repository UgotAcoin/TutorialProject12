//example of memset/memcpy, buffers, and the sizeof function

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{

/*	cout << "int " << sizeof(int) << endl;
	cout << "int " << sizeof(char) << endl;
	cout << "int " << sizeof(double) << endl;
	cout << "int " << sizeof(float) << endl;	*/

/*	int myBuffer[10000];
	cout << sizeof(myBuffer) << endl;	*/

	const int BUFFER_SIZE = 100;
	int myBuffer[BUFFER_SIZE];
	int myBuffer2[BUFFER_SIZE];

	memset(myBuffer, 0, sizeof(int) * BUFFER_SIZE);
	memset(myBuffer2, 1, sizeof(int) * BUFFER_SIZE);

	memcpy(myBuffer, myBuffer2, sizeof(int) * BUFFER_SIZE);

	for (int i = 0; i < BUFFER_SIZE; i++) {
		cout << myBuffer[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < BUFFER_SIZE; i++) {
		cout << myBuffer2[i] << " ";
	}

	printf("\nEnter any key to quit...\n");
	_getch();
	return 0;
}