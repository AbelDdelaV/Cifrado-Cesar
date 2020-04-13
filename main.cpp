//
//  main.cpp
//  Cifrado Julio Cesar
//
//  Created by Abel Dia on 4/11/20.
//  Copyright © 2020 Abel Dia. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class cifradoJC
{
    string clave;
    string word;
    public:
        cifradoJC(string, string);
    
        void cifrar();
        void descifrar();
        void elegir();
};
cifradoJC::cifradoJC(string _word, string _clave)
{
    word.assign(_word);
    clave.assign(_clave);
}
void cifradoJC::cifrar()
{
    for ( int i = 0; i < word.length(); i++)
    {
        if ( isalpha(word[i]))
        {
            for (int j = 0; j < stoi(clave); j++)
            {
                if (word[i] != 'z')
                    word[i] ++ ;
                else
                    word[i] = 'a';
            }
        }
    }
    cout << "\n" << word << endl << endl;
}
void cifradoJC::descifrar()
{
    for ( int i = 0; i < word.length(); i++)
    {
        if ( isalpha(word[i]))
        {
            for (int j = 0; j < 3; j++)
            {
                if (word[i] != 'z')
                    word[i] -- ;
                else
                    word[i] = 'a';
            }
        }
    }
    cout << "\n" << word << endl << endl;
}
void cifradoJC::elegir()
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
int main()
{
    string a;
    string b;
    cout << "Ingrese la palabra: ";
    getline(cin, a);
    cout << "Ingrese la clave: ";
    cin >> b;
        
    cifradoJC p (a, b);
    p.elegir();
}


