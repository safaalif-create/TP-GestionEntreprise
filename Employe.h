#pragma once
#include<iostream>
using namespace std;
class Employe
{
protected:
	static int compteur;
	string nom;
	const int matricule;
	double id;
	static double val;
public:
	Employe(string, double);
	virtual void afficher()const;
	virtual double calculeSalaire() const;
	~Employe();
};

