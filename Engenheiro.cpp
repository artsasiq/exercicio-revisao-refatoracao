#include "Empregado.hpp"
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(){
    setNome("sem nome");
    setSalarioHora(0);
    setProjetos(0);
}

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos){
    setNome(nome);
    setSalarioHora(salarioHora);
    setProjetos(projetos);
}

void Engenheiro::setProjetos(int projetos){
    _projetos = projetos;
}

int Engenheiro::getProjetos(){
    return _projetos;
}
