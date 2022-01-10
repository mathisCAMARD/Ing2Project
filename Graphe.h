#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED

#include <vector>
#include <string>
#include "Sommet.h"
#include "Arrete.h"

class Graphe
{
private :
///liste des sommets (vecteur de pointeurs sur Sommet)
    int m_orientation;
    std::vector<Arrete*> m_arrete;
    std::vector<Sommet*> m_sommets;
public :
    /* La construction du réseau peut se faire à partir d'un fichier
    dont le nom est passé en paramètre
    Le fichier contient : orientation (0 ou 1), ordre, taille, liste des arcs */
    Graphe(std::string nomFichier);
    /*destructeur*/

    /*méthode d'affichage*/
    void afficher() const;
    /*parcours kruskal
    entrée = le numéro du sommet initial (on pourrait passer un pointeur sur ...)
    retour : le tableau de prédecesseurs (pour retrouver les chemins)
    */
    std::vector<const Arrete*> Kruskal();
     ~Graphe();

     int getOrientation();

};

#endif // GRAPHE_H_INCLUDED
