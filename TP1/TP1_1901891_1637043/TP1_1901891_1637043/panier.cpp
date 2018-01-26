#include "..\..\panier.h"

Panier::Panier(int capacite)
{
	capaciteContenu_ = capacite;
	contenuPanier_ = new Produit*[capaciteContenu_];
	nombreContenu_ = 0;
	totalAPayer_ = 0;
	
}

Produit ** Panier::obtenirContenuPanier() const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::ajouter(Produit* prod) {
	if (nombreContenu_ == capaciteContenu_) 
		capaciteContenu_ *= 2;

	contenuPanier_[nombreContenu_++] = prod;
	totalAPayer_ += prod->obtenirPrix();
	
}
Panier::~Panier() {
	if (contenuPanier_ != nullptr) {
		delete[] contenuPanier_;
		contenuPanier_ = nullptr;
	}
}

void Panier::livrer() {
	delete contenuPanier_;
	totalAPayer_ = 0;
	nombreContenu_ = 0;
	capaciteContenu_ = 0;
}

void Panier::afficher() {
	for (int i = 0; i < nombreContenu_; i++) {
		cout << contenuPanier_[i]<<endl;
	}
	cout << "NOMBRE ITEM PANIER :" << nombreContenu_ << endl
		 << "CAPACITE PANIER :" << capaciteContenu_ << endl
		 << "TOTAL A PAYER :" << totalAPayer_ << endl;
}

