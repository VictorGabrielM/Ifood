#include "japonesa.hpp"

std::string Japonesa::descricao() const {
  std::string description;
  description += std::to_string(m_qtd);
  description += "X Comida japonesa - ";
  description += Item;
  description += ", ";
  description += std::to_string(qtdSuchi);
  description += " sushis, ";
  description += std::to_string(qtdTemaki);
  description += " temakis e ";
  description += std::to_string(qtdHots);
  description += " hots.";
   
  return description;
}

Japonesa::Japonesa(const std::string& combinado,
                   int sushis,
                   int temakis,
                   int hots,
                   int qtd,
                   float valor_unitario) {
  this->Item = combinado;
  this->qtdSuchi = sushis;
  this->qtdTemaki = temakis;
  this->qtdHots = hots;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;
}