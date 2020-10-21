#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
    public:  
        void setNome(std::string nome);
        std::string getNome();
        void setSalarioHora(double salarioHora);
        double getSalarioHora();
        virtual double pagamentoMes(double horasTrabalhadas);
	
    private:
        std::string _nome;
        double _salarioHora;   
};

#endif
