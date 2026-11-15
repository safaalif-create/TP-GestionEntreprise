#include "Employe.h"
double Employe::val = 0.0;
int Employe::compteur = 0;
Employe::Employe(string nom, double id):matricule(++compteur)
{ 
	this->nom = nom;
	this->id = id;
}

void Employe::afficher() const
{
	cout << "nom:" << this->nom << endl;
	cout << "id:" << this->id << endl;
	cout << "matricule:" << this->matricule << endl;
}

double Employe::calculeSalaire() const
{
	cout<<"donner la valeur daugmentation:" << endl;
	cin >> Employe::val;
	return this->id + ((this->id * Employe::val)/100);
}

Employe::~Employe()
{

}

