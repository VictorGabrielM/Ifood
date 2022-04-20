#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  std::list<Pedido*>::iterator it = m_pedidos.begin();

  for(it = m_pedidos.begin();it != m_pedidos.end();it++){
    delete *it;
  }
}

void Venda::adicionaPedido(Pedido* p) {
  m_pedidos.insert(m_pedidos.end(),p);
}

void Venda::imprimeRelatorio() const {
  std::list<Pedido*>::const_iterator it = m_pedidos.begin();
  float totalVendas = 0;
  int i = 1;
  for(it = m_pedidos.begin(); it != m_pedidos.end(); it++){
    std::cout << "Pedido " << i << std::endl;
    std::cout << (*it)->resumo();
    i++;
  }

  for(it = m_pedidos.begin(); it != m_pedidos.end(); it++){
    totalVendas += (*it)->calculaTotal();
  }

  std::cout << "Relatorio de Vendas" << std::endl;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Total de vendas: R$ " << totalVendas << std::endl;
  std::cout << "Total de pedidos: " << m_pedidos.size();

}