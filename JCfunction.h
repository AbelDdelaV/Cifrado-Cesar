//
//  JCfunction.h
//  Cifrado Julio Cesar
//
//  Created by Abel Dia on 4/14/20.
//  Copyright © 2020 Abel Dia. All rights reserved.
//

#ifndef JCfunction_h
#define JCfunction_h

using namespace std;

string cifradoJC::cifrar()
{
    double pos;
    for ( int i = 0; i < word.length(); i++)
    {
        if ( isalpha(word[i]))
        {
            pos = alfabeto.find(word[i]);
            resultado += alfabeto[pos + clave];
        }
    }
    return resultado;
}
string cifradoJC::descifrar()
{
    string resultado2;
    double pos;
    for ( int i = 0; i < resultado.length(); i++)
    {
        if ( isalpha(resultado[i]))
        {
            pos = alfabeto.find(resultado[i]);
            resultado2 += alfabeto[pos - clave];
        }
    }
    return resultado2;
}
/*void cifradoJC::elegir()
{
    int elegir;
    cout << "\nCifrar => 1\nDescifrar => 2\n" << endl;
    cin >> elegir;
    switch (elegir)
    {
        case 1:
            cifrar();
            break;
        case 2:
            descifrar();
            break;
    }
    
}
*/
#endif /* JCfunction_h */
