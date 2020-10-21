#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"

class Vendedor : public Empregado{
    public:
        Vendedor();
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);
        double quotaTotalAnual();
        void setQuotaMensalVendas(double quotaMensalVendas);
        double getQuotaMensalVendas();

    private:
        double _quotaMensalVendas; 

};

#endif
