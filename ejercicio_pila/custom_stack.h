#ifndef CUSTOM_STACK_H
#define CUSTOM_STACK_H

#include <vector>
using namespace std;

class CustomStack {
    private:
        vector<int> datos;
    public:
        CustomStack();
        ~CustomStack();
        
        bool empty();

        int size();

        int top();

        void push(int valor);

        void pop();
};
#endif
