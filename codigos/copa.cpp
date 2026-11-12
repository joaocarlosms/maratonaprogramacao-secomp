

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n = 0;
    int qnt = 0;
    int M = 0;
    int cont = 0;
    
    int* arr[M];
    
    cin >> n;
    cin >> qnt;
    
    for(int i = 0; i < n; i++) {
        cin >> M;
        
        if(arr[M] != 0) {
            cont++;
        }
    }
    
    cout << M-qnt;
        
    return 0;
}

