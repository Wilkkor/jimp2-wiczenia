//
// Created by kornel on 09.03.17.
//

#include "XorCypherBreaker.h"

int main()
{
    vector <char> txt={32,66,50,20,11,0,42,66,33,19,13,20,47,66,37,14,58,67,43,23,14,17,49,67,46,20,6,51,66,55,9,39,67,45,3,25,56,66,39,14,37,34,65,51,22,8,1,40,65,32,17,14,21,45,65,36,12,57,66,41,20,15,19,50,66,44,23,7,49,65,54,11,36,66,47,0,24,58,65,38,12,38};
    vector <string> slownik;
    string tmp;
    ifstream wej("slownik2");
    while(!wej.eof())
    {
        wej>>tmp;
        slownik.push_back(tmp);
    }
    cout<<XorCypherBreaker(txt,3,slownik);
}