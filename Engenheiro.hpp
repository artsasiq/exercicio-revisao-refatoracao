#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"


class Engenheiro : public Empregado{
    public:
        Engenheiro();
        Engenheiro(std::string nome, double salarioHora, int projetos);
        void setProjetos(int projetos);
        int getProjetos();

    private:
        int _projetos;

};

#endif
