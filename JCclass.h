//
//  JCclass.h
//  Cifrado Julio Cesar
//
//  Created by Abel Dia on 4/14/20.
//  Copyright © 2020 Abel Dia. All rights reserved.
//
//https://repl.it/repls/RespectfulVerifiableGraph

#ifndef JCclass_h
#define JCclass_h

using namespace std;

class cifradoJC
{
    int clave;
    string word;
    string alfabeto;
    string resultado;
    public:
        cifradoJC(string, int);
        //cifradoJC(int);
        string cifrar();
        string descifrar();
        //void elegir();
};
cifradoJC::cifradoJC(string _word, int _clave)
{
    word.assign(_word);
    clave = _clave;
    alfabeto = "abcdefghijklmnopqrstuvwxyz";
}
/*cifradoJC::cifradoJC(int _clave)
{
    clave = _clave;
    alfabeto = "abcdefghijklmnopqrstuvwxyz";
}*/

#endif /* JCclass_h */
