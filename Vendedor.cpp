#include "Empregado.hpp"
#include "Vendedor.hpp"

#define MESES_DO_ANO 12

Vendedor::Vendedor(){
    setNome("sem nome");
    setSalarioHora(0);
    setQuotaMensalVendas(0);
}

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas){
    setNome(nome);
    setSalarioHora(salarioHora);
    setQuotaMensalVendas(quotaMensalVendas);
}

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas){
    _quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::getQuotaMensalVendas(){
    return _quotaMensalVendas;
}

double Vendedor::quotaTotalAnual(){  
	return _quotaMensalVendas * MESES_DO_ANO;
}
