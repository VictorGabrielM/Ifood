#include "pizza.hpp"

std::string Pizza::descricao() const {
  std::string description;
  description += std::to_string(m_qtd);
  description += "X Pizza ";
  description += sabor;
  description += ", ";
  description += std::to_string(qtdPedacos);
  description += " pedacos e ";
  if(bordaRecheada){
    return description += "borda recheada.";
  }else
  return description += "sem borda recheada.";
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  this->sabor = sabor;
  this->qtdPedacos = pedacos;
  this->bordaRecheada = borda_recheada;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;             
}