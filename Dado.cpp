//
// Created by borgesbsb on 8/20/17.
//

#include "Dado.h"

Dado::Dado(int valor) : valor(valor) {}

Dado::~Dado() {}

int Dado::getValor() const {
    return valor;
}

void Dado::setValor(int valor) {
    Dado::valor = valor;
}
