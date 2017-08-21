//
// Created by borgesbsb on 8/20/17.
//

#ifndef CANECA_DADO_H
#define CANECA_DADO_H


class Dado {
public:
    Dado(int valor);

    virtual ~Dado();

    int getValor() const;

    void setValor(int valor);

private:
    int valor;
};


#endif //CANECA_DADO_H
