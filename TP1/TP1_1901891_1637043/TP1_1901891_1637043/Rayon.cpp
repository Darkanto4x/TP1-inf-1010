#include "..\..\Rayon.h"

Rayon::Rayon()
{
	categorie_ = "inconnue";
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;

}

Rayon::Rayon(string cat) {
	categorie_ = cat;
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

string Rayon::obtenirCategorie() const
{
	return categorie_;
}

Produit ** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}
void Rayon::modifierCategorie(string cat) {
	categorie_ = cat;
}

void Rayon::ajouterProduit(Produit* produit) {
	int nombreCapaciteInital = 5;
	if (capaciteProduits_ == 0)
		capaciteProduits_ = nombreCapaciteInital;

	if (nombreProduits_ == capaciteProduits_)
		capaciteProduits_ += 5;
	produit = new Produit;
	tousProduits_[nombreProduits_++] = produit;
	
}
void Rayon::afficher() {
	cout << categorie_ << endl;
	for (int i = 0; i < nombreProduits_; i++) {
		cout << tousProduits_[i];
	}
	cout << capaciteProduits_ << endl <<
		nombreProduits_ << endl;
}

