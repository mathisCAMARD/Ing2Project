#include "Sommet.h"

Sommet::Sommet(int ind, char nom, int x, int y)
       :m_indiceS{ind}, m_nom{nom}, m_x{x}, m_y{y}
{

}

int Sommet::getIndiceS() const{
    return m_indiceS;
}
