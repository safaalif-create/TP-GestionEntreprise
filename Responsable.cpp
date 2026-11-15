#include "Responsable.h"

Responsable::Responsable(string n, double s, int nbrs):Employe(n,s)
{
	this->nbr = 0;
	this->nmbrSubmax = nbrs;
	this->sub = new Employe *[this->nmbrSubmax];
	for (int i = 0;i < this->nmbrSubmax;i++) {
		this->sub[i] = nullptr;
	}
}

void Responsable::afficher() const
{
	this->Employe::afficher();
	for (int i = 0; i < this->nbr; i++) {
		this->sub[i]->afficher();// la recursivité
	}
}

void Responsable::AjouterEmploye(Employe*E)
{
	if (this->nmbrSubmax > this->nbr && E != nullptr) {
		this->sub[this->nbr] = E;
		this->nbr++;
	}
	else {
		cout << "Erreur" << endl;
	}
}

Responsable::~Responsable()
{
	for (int i = 0; i < this->nbr;i++) {
		delete this->sub[i];
		this->sub[i] = nullptr;
	}
	delete[] this->sub;
	this->sub = nullptr;
}
