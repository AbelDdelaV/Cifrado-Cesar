//
//  main.cpp
//  Cifrado Julio Cesar
//
//  Created by Abel Dia on 4/11/20.
//  Copyright © 2020 Abel Dia. All rights reserved.
//

#include <iostream>
#include <string>
#include "JCclass.h"
#include "JCfunction.h"

using namespace std;

int main()
{
    string a;
    int b;
    cout << "Ingrese la palabra: ";
    getline(cin, a);
    cout << "Ingrese la clave: ";
    cin >> b;
        
    cifradoJC p (a, b);
    p.elegir();
}



