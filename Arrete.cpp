#include "Arrete.h"


Arrete::Arrete( Sommet* ex1,  Sommet* ex2, double i)
       :m_ex1{ex1},m_ex2{ex2}, m_indiceA{i}
{}



double Arrete::getIndiceA()const
{
     return m_indiceA;
}
 Sommet*Arrete::getEx1()
{
    return m_ex1;
}
 Sommet*Arrete::getEx2()
{
    return m_ex2;
}
