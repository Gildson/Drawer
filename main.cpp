#include <iostream>
#include <screen.cpp>
#include <ctype.h>

using namespace std;

int main ()
{
    int nl, nc, x, y;
    char brush1;
    cout << "Defina o tamanho da tela (LinhaxColuna) " << endl;
    cin >> nl >> nc;
    Screen tela(nl, nc);
    cout << "Defina o formato do pincel " << endl;
    cin >> brush1;
    tela.setBrush(brush1);
    cout << "Difina o local do desenho" << endl;
    cin >> x >> y;
    tela.setPixel(x, y);
    return 0;
}
