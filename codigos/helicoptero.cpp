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
    
    int h, p, f, d;
    
    cin >> h >> p >> f >> d;
    
     int S = f - h;
     int N = f - p;
     
     if ( S < N) {
     	if(d == -1){
     		cout << "S";
		 } else{
		 	cout << "N";
		 }
	 } else {
	 	if(d == -1){
	 		cout << "S";
		 } else { 
		 cout << "N";
		 }
	 }
    
    return 0;
}

