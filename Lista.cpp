//
// Created by borgesbsb on 8/20/17.
//

#include "Lista.h"

template<class T>
Lista<T>::Lista(vector<T> *items) : items(items) {}

template <class T>
Lista<T>::~Lista() {}

template <class T>
vector<T> *Lista<T>::getItems() const {
    return items;
}
template <class T>
void Lista<T>::setItems(vector<T> *items) {
    Lista::items = items;
}


