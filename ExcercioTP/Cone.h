#ifndef CONE_H
#define CONE_H

class Cone
{
	private:
		double raio;
		double altura;
	public:
		Cone();
		void setRaio(double);
		void setAltura(double);
		double getRaio()const;
		double getAltura()const;
		double calculaGeratriz()const;
		double calculaAreaLateral()const;
		double calculaAreaTotal()const;
		double calculaVolume()const;
		
};
#endif // !CONE_H

