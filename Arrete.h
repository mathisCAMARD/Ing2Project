#ifndef ARRETE_H_INCLUDED
#define ARRETE_H_INCLUDED

#include "Sommet.h"

class Arrete
{
    public:
        Arrete(Sommet*,  Sommet*, double);
        void afficher() const;
        double getIndiceA() const;
        Sommet*getEx1();
        Sommet*getEx2();


    private:
        Sommet* m_ex1;
        Sommet* m_ex2;
        double m_indiceA;

};

#endif // ARRETE_H_INCLUDED
