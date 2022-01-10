#include <iostream>
#include <queue>
#include <fstream>
#include "graphe.h"
#include <algorithm>

/* La construction du réseau peut se faire à partir d'un fichier
dont le nom est passé en paramètre
Le fichier contient : orientation (0 ou 1), ordre, taille, liste des arcs */
Graphe::Graphe(std::string nomFichier)
{
    std::ifstream ifs{nomFichier};
    if (!ifs)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );

    ifs >> m_orientation;
    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture orientation du graphe");

    int ori = getOrientation();
    if (ori == 1)
        throw std::runtime_error("Cet outil ne permet pas de traiter des graphes orientés");

    if (ori == 0)
    {
///boucle de création des sommets
        int ordre;
        ifs >> ordre;
        if ( ifs.fail() )
            throw std::runtime_error("Probleme lecture ordre du graphe");

        for (int i=0; i<ordre; ++i)
        {
            int indiceS, x, y;
            char nom;

            ifs >> indiceS >> nom >> x >> y;

            m_sommets.push_back(new Sommet{indiceS, nom, x, y});
        }

///boucle de lecture des arcs

        int taille;
        ifs >> taille;
        if ( ifs.fail() )
            throw std::runtime_error("Probleme lecture taille du graphe");

        for (int i=0; i<taille; ++i)
        {
            int ex1, ex2;
            double indiceA;

            ifs >> indiceA >> ex1 >> ex2;

            m_arrete.push_back(new Arrete(m_sommets[ex1], m_sommets[ex2], indiceA));
        }
    }
}
/*destructeur*/
Graphe::~Graphe()
{
    for (auto s : m_sommets)
        delete s;
    for (auto it : m_arrete)
        delete it;
}
/*méthode d'affichage*/
void Graphe::afficher() const
{

}

int Graphe::getOrientation()
{
    return m_orientation;
}
