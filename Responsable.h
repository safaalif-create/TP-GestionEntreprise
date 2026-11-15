#pragma once
#include "Employe.h"
class Responsable :public Employe
{
private:
	Employe** sub;
	int nmbrSubmax;
	int nbr;
public:
	Responsable(string, double,int);
	void afficher()const override;
	void AjouterEmploye(Employe*E);
	~Responsable();
};

