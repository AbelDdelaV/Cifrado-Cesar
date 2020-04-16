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

void cifradoJC::cifrar()
{
    for ( int i = 0; i < word.length(); i++)
    {
        if ( isalpha(word[i]))
        {
            for (int j = 0; j < clave; j++)
            {
                if (word[i] != alfabeto.length())
                    word[i] ++;
                else
                    word[i] = alfabeto[0];
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
            for (int j = 0; j < clave; j++)
            {
                if (word[i] != alfabeto.length())
                    word[i] --;
                else
                    word[i] = alfabeto[0];
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

#endif /* JCfunction_h */
