#include "..\..\client.h"

Client::Client(string nom, string prenom, int identifiant, string codePostal, long date)
{
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = date;
	monPanier_ = nullptr;

}

string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}

int Client::obtenirIdentifiant() const
{ 
	return identifiant_;
}

string Client::obtenirCodePostal() const
{
	return codePostal_;
}

long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

void Client::modifierNom(string nom)
{
	nom_ = nom;
}

void Client::modifierPrenom(string prenom)
{
	prenom_ = prenom;

}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}

void Client::acheter(Produit* prod) {
	int capacite = 4;
	if (monPanier_ == nullptr)
		monPanier_ = new Panier(capacite);
	monPanier_->ajouter(prod);
}
void Client::afficherPanier() {
	for (int i = 0; i < monPanier_->obtenirNombreContenu(); i++) {
		if (monPanier_ != nullptr)
			monPanier_->afficher();

	}
}


void Client::livrerPanier() {
	delete monPanier_;
	monPanier_ = nullptr;
}


