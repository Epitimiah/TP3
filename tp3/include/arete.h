#ifndef ARETE_H
#define ARETE_H

#include "../headers"
#include <iostream>
#include <vector>

class Arete
{
private:
    int m_sommetA;
    int m_sommetB;
    int m_poids;

public:
    //Constructeur par defaut
    Arete();
    //Destructeur
    ~Arete();

    //Getters et Setters
    int getSommetA() { return m_sommetA; }
    void setSommetA(int sommetA) { m_sommetA = sommetA; }

    int getSommetB() { return m_sommetB; }
    void setSommetB(int sommetB) {m_sommetB = sommetB; }

    int getPoids() { return m_poids; }
    void setPoids(int poids) { m_poids = poids; }

    //Methodes

};

#endif // ARETE_H
