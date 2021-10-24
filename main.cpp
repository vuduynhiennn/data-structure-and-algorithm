#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void countBeautifulNumbers(int a, int b);

int main(int argc, char** argv) {
//	cout << countBeautifulNumbers(111, 112);
	cout << 2111 / (2111 / (2111 / 2111 / 10));
//	cout << 2111 / 10;
//	i / (i / (i / i % 10));
//	countBeautifulNumbers(2323, 4399);
	return 0;
}

void countBeautifulNumbers(int a, int b) {
	int count = 0;
	
	for (int i = a; i <= b; i++) {
		cout << i << ": " << i / (i / (i / i % 10)) << endl; 
		cout << "======" << endl;
	}
//	return count;
} 

// 11 66 88 33 44 55

