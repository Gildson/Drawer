#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ctype.h>
#include <iostream>

using namespace std;

class Screen
{
private:
    int nlin, ncol;
    char brush;
    vector < vector <char> > tela1;
public:
    Screen(int _nlin, int _ncol);
    void setPixel(int x, int y);
    //void clear();
    void setBrush(char _brush);
};

#endif // SCREEN_H
