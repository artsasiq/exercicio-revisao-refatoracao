#include "Empregado.hpp"

#define HORAS_DE_TRABALHO_ESPERADAS_POR_DIA 8

void Empregado::setNome(std::string nome){
  _nome = nome;
}

std::string Empregado::getNome(){
  return _nome;
}

void Empregado::setSalarioHora(double salarioHora){
  _salarioHora = salarioHora;
}

double Empregado::getSalarioHora(){
  return _salarioHora;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
  double t = horasTrabalhadas;
	  
  //Cálculo de hora extra (+50% se horasTrabalhadas > HORAS_DE_TRABALHO_ESPERADAS_POR_DIA)
  if (horasTrabalhadas > HORAS_DE_TRABALHO_ESPERADAS_POR_DIA) {
    double x = horasTrabalhadas - HORAS_DE_TRABALHO_ESPERADAS_POR_DIA;
    t += x / 2;
  }

  return t * _salarioHora;
}
