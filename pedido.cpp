#include "pedido.hpp"


Pedido::~Pedido() {
  std::list<Produto*>::iterator it = m_produtos.begin();

  for(it = m_produtos.begin();it != m_produtos.end(); it++){
    delete *it;
  }
}

void Pedido::setEndereco(const std::string& endereco) {
  this->m_endereco = endereco;
}

float Pedido::calculaTotal() const {
  std::list<Produto*>::const_iterator it = m_produtos.begin();
  float totalPedido = 0;
  float valorUnitarioProduto = 0;
  float qtdProduto = 0;

  for(it = m_produtos.begin();it!=m_produtos.end();it++)
  {
    valorUnitarioProduto = (*it)->getValor();
    qtdProduto = (*it)->getQtd();
    totalPedido += qtdProduto * valorUnitarioProduto;
  }
  return totalPedido;
}

void Pedido::adicionaProduto(Produto* p) {
  m_produtos.insert(m_produtos.end(),p);
}

std::string Pedido::resumo() const {
  std::list<Produto*>::const_iterator it = m_produtos.begin();

  std::string strResumo;

  for(it = m_produtos.begin();it!=m_produtos.end();it++){
    strResumo += (*it)->descricao();
    strResumo += '\n';
  }
  strResumo += "Endereco: ";
  strResumo += m_endereco;
  strResumo += '\n';
  return strResumo;
}