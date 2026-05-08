#include <iostream>
#include <vector>
#include "custom_stack.h"

using namespace std;

CustomStack::CustomStack(){

}

CustomStack::~CustomStack(){

}

bool CustomStack::empty(){
    return datos.empty();
}

int CustomStack::size(){
    return datos.size();
}

int CustomStack::top(){
    if (empty()){
        cout<<"La pila esta vacia"<<endl;
        return -1;
    }
    return datos.back();
}

void CustomStack::push(int valor){
    datos.push_back(valor);
}

void CustomStack::pop(){
    if(empty()){
        cout<<"La pila esta vacia"<<endl;
    }
    datos.pop_back();
}