/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>


using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	const int NOMBRE_OBJETS = 15;
	Produit* tableauObjets = new Produit [NOMBRE_OBJETS];
	
    
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit

	tableauObjets[3].modifierNom("Paul");
	tableauObjets[3].modifierPrix(3.2);
	tableauObjets[3].modifierReference(100);
	tableauObjets[3].afficher();
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon1;
   
	//4-  Modifiez la catégorie  du rayon
	string cat = "Fruits et legumes";
	rayon1.modifierCategorie(cat);
   
    // 5- Ajouter 6 produits de  votre choix dans le rayon créé
	int nombreProduitAAjouter = 6;
	Produit* prod = new Produit;
	for (int i = 0; i < nombreProduitAAjouter; i++) {
		rayon1.ajouterProduit(prod);
	}
	rayon1.afficher();

    // 6- afficher le contenu du rayon
   
  
	//7-  Creez un objet de classe client à l'aide du constructeur
   

	//8-  afficher l'etat des attributs du client
   

	//9-   Le client achete 9 produits
   

	//10- Afficher le contenu du panier du client

     //11- livrer le panier du client
   
    
	//12- afficher le contenu du panier du client
    
	//13-  terminer le programme correctement
	int b; cin >> b;
    return 0;
}
