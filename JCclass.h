//
//  JCclass.h
//  Cifrado Julio Cesar
//
//  Created by Abel Dia on 4/14/20.
//  Copyright © 2020 Abel Dia. All rights reserved.
//

#ifndef JCclass_h
#define JCclass_h

using namespace std;

class cifradoJC
{
    int clave;
    string word;
    string alfabeto;
    public:
        cifradoJC(string, int);
    
        void cifrar();
        void descifrar();
        void elegir();
};
cifradoJC::cifradoJC(string _word, int _clave)
{
    word.assign(_word);
    clave = _clave;
    alfabeto = "abcdefghijklmnopqrstuvwxyz";
}

#endif /* JCclass_h */
