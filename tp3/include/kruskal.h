#ifndef KRUSKAL_H
#define KRUSKAL_H

#include "arete.h"

class Kruskal
{
private:
    int m_ordre;
    int m_nbArete;
    std::vector<Arete*> m_vecArete;

public:
    //Constructeur par defaut
    Kruskal();

    //Destructeur
    ~Kruskal();

    //Getters et Setters
    int getOrdre() { return m_ordre; }
    void setOrdre(int ordre) { m_ordre = ordre; }

    int getNbArete() { return m_nbArete; }
    void setNbArete(int nbArete) { m_nbArete = nbArete; }


    std::vector<Arete*> getVecArete() { return m_vecArete; }
    void setVecArete(std::vector<Arete*> vecArete) { m_vecArete = vecArete; }

    //Methodes
    void lireFichier();
    t_arete* kruskal(t_arete *graphe, int ordre, int s, int n);

};

#endif // KRUSKAL_H
