/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bondinho.cpp
 * Author: 12289319686
 *
 * Created on 12 de Novembro de 2026, 15:44
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    
    int N, X, Y;
    int *carta;
    
    cin>>N;
    cin>>X;
    cin>>Y;
	
	if(N == X) {
		cout << Y;
	} else if(N == Y) {
		cout << X;
	} else if(X == Y) {
		cout << N;
	}  

    
    return 0;
}

