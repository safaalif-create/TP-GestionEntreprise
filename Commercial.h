#pragma once
#include "Employe.h"
class Commercial : public Employe
{
private:
	double ventes;
	static double taux;
public:
	Commercial(string, double,double);
	void ModifierVentes(double);
	void afficher() const override;
	double calculeSalaire() const override;	
};

