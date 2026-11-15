#include "Commercial.h"

Commercial::Commercial(string n, double s,double v):Employe(n,s)
{
	this->ventes = v;
}

void Commercial::ModifierVentes(double v)
{
	this->ventes = v;
}

void Commercial::afficher() const
{
	this->Employe::afficher();
	cout << "Ventes du dernier moi:" << this->ventes << endl;
}

double Commercial::calculeSalaire() const
{ 
	double Sal = this->Employe::calculeSalaire();
	cout << "donner le taux daugmentation:";
	cin >> Commercial::taux;
	return this->id+(this->ventes*Commercial::taux);
}
Commercial::~Commercial()
{
	
}
