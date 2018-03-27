#include "kruskal.h"

Kruskal::Kruskal()
{
}

Kruskal::~Kruskal()
{
}

/*
void Kruskal::lireFichier ()
{
    std::string m_nomFichier;
    if(m_nomFichier == "")
    {
        std::cerr << "Le nom de fichier n'a pas de correspondance" << std::endl;
    }

    std::ifstream fichier(m_nomFichier, std::ios::in);

    if(fichier == NULL)
    {
        std::cerr << "Le fichier n'existe pas" << std::endl;
    }

    try
    {
        //Recuperation du nombre de sommets indiqués en debut du fichier
        fichier >> ordre;
        fichier >> nbArete;

        //Dans le cas où l'allocation echoue
        if( !allocationMatrice() )
        {
            return false;
        }

        //Recuperation de la matrice
        for(int i = 0 ; i < ordre; i ++)
        {
            for(int j = 0; j < ordre; j ++)
            {
                for(int k = 0; k < ordre; k++)
                {
                    fichier >> m_matrice[i][j][k];
                }
            }
        }
    }
    catch(...)
    {
        fichier.close();
        std::cerr << "Le format du fichier ne correspond pas" << std::endl;
    }

    fichier.close();
}

t_arete* Kruskal::kruskal(t_arete *graphe, int ordre, int s, int n)
{
// Variables locales
    t_arete *arbre;
//tableau d’arêtesde poids minimum à retourner
    int *connexe;
//tableau dynamique des numéros de sommets connexes de l’arbre
    int indiceA = 0, indiceG = 0;
//indices de l’arbre et du graphe initialisés à 0
    int x, s1, s2;
//numéros de sommets intermédiaires
    t_arete u;
// arête reliant 2 sommets x1 et x2
// Allouer l’arbre de«ordre-1» arêtes...
// Allouer le tableau connexe de «ordre» sommets...
// Initialiser les connexités indicées sur les numéros de sommets
    for (x=0; x<ordre; x++)
        connexe[x] = x;
// Trier le graphe par ordre croissant des poids de ses « n » arêtes...

    //tant que les arêtes de l’arbre et du graphe ne sont pas toutes traitées
    while(indiceA<ordre-1&&indiceG<n)
    {
        u=graphe[indiceG];
// retourner l’arête u numéro indiceG du graphe
        s1 = connexe[u.x] ;
        s2 = connexe[u.y] ;
// les sommets s1, s2 de l’arête u
// Tester si les sommets s1 et s2 de l’arête u forment un cycle dans l’arbre
        if(s1==s2)
// cycle si s1 et s2 connexes
            indiceG++;
// passer à l’arête suivante du graphe
        else
        {
            // pas de cycle
//insérer l’arête u à la position «indiceA» de l’arbre
            arbre[indiceA] = u;
            indiceA++;
            indiceG++;
// passer à l’arête suivante de l’arbre et du graphe
// Indiquer que les sommets s1 et s2 sont connexes
            for (x=0; x<ordre; x++)
                if(connexe[x]==s1)
                    connexe[x]=s2;
        }
    }
//Le graphe est non connexe si le nombre d’arêtes de l’arbre < nombre de sommets-1
    if (indiceA<ordre-1)
    {
        printf("Le graphe n'est pas connexe\n");
    }
    return arbre; // retourner l’arbre de poids minimum
}*/
