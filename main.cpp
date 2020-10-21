#include "Engenheiro.hpp"
#include "Vendedor.hpp"

void imprimirEngenheiro(Engenheiro impresso, double horasTrabalhadas){

  std::cout << "Nome: " << impresso.getNome() << std::endl;
  std::cout << "Salario Mes: " << impresso.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << impresso.getProjetos() << std::endl;
}

void imprimirVendedor(Vendedor impresso, double horasTrabalhadas){

  std::cout << "Nome: " << impresso.getNome() << std::endl;
  std::cout << "Salario Mes: " << impresso.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << impresso.quotaTotalAnual() << std::endl;
}


int main() {

  Engenheiro eng1("Joao Snow", 35, 3);
  imprimirEngenheiro(eng1, 9.5);
  std::cout << std::endl;

  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1); 
  imprimirEngenheiro(eng2, 8);
  std::cout << std::endl;
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2);
  imprimirEngenheiro(eng3, 8);
  std::cout << std::endl;

  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);
  imprimirVendedor(vend1, 6);
  std::cout << std::endl;

  Vendedor vend2("Jose Mormont", 25, 3000);
  imprimirVendedor(vend2, 8);
  std::cout << std::endl;
  
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  imprimirVendedor(vend3, 8); 
  
  return 0;	
}
