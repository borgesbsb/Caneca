//
// Created by borgesbsb on 8/20/17.
//

#ifndef CANECA_LISTA_H
#define CANECA_LISTA_H
#include <vector>
using namespace std;


template<class T>
class Lista {
public:
    Lista(vector<T> *items);

    virtual ~Lista();

    vector<T> *getItems() const;

    void setItems(vector<T> *items);

private:
    vector<T> *items;




};




#endif //CANECA_LISTA_H
