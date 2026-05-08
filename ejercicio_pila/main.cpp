#include <iostream>
#include <vector>
#include "custom_stack.h"

using namespace std;

int main (){
    CustomStack datos;
    datos.push(1);
    datos.push(2);
    datos.push(3);

    datos.pop();
    datos.top();
    cout<<datos.size() <<endl;

    return 0;
}