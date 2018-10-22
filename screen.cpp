#include <iostream>
#include "screen.h"
#include <vector>
#include <ctype.h>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

void Screen::setPixel(int x, int y)
{
    vector< vector<char> > tela1 (nlin, vector<char>(ncol, ' '));
    tela1[x][y] = brush;
    for(int i=0; i<nlin; i++){
        for(int j=0; j<ncol; j++){
            cout << tela1[i][j];
        }
        cout << "\n";
    }
}

/*
void Screen::clear()
{

}
*/
