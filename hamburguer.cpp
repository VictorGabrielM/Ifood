#include "hamburguer.hpp"

std::string Hamburguer::descricao() const {
  std::string description;
  description += std::to_string(m_qtd);
  description += "X Hamburguer ";
  description += tipo;
  if(artesanal){
    return description += " artesanal.";
  }else
    return description += " simples.";
   
}

Hamburguer::Hamburguer(const std::string& tipo,
                       bool artesanal,
                       int qtd,
                       float valor_unitario) {
                         
  this->tipo = tipo;
  this->artesanal = artesanal;
  this->m_qtd = qtd;
  this->m_valor_unitario = valor_unitario;                        
}