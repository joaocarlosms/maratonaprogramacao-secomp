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
    int total = 50;
    
    int alunos;
    int monitores;
    
    cin >> alunos;
    cin >> monitores;
    
    int soma = alunos + monitores;
    
    if(soma > total)
        cout << "N";
    else
        cout << "S";
    
    return 0;
}

