
#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int A1;
	int D1;
	int A2;
	int D2;
	
	cin >> A1;
	cin >> D1;
	cin >> A2;
	cin >> D2;
	
	if (A1 > D2 || D1 > A2){
		cout << 1;
	} else if(A1 < D2 || D1 > A2) {
		cout << -1;
	} else if(A2 < D1 || D2 > A1) {
		cout << -1;
	} else if(A2 > D1 || D2 > A1) {
		cout << 2;
	} else {
		cout << -1;
	}	
	
	return 0;
}