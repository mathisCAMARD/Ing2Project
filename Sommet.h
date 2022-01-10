#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDED

#include <iostream>


class Sommet
{
    public:
        Sommet(int ind, char nom, int x, int y);
        int getIndiceS() const;
        int getX() const;
        int getY() const;
        char getNom() const;

    private:
        int m_indiceS;
        char m_nom;
        int m_x, m_y;
};

#endif // SOMMET_H_INCLUDED
