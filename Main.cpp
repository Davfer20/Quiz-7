#include "Stack.h"
#include "Queque.h"

int main()

{
    List<string> *lista = new List<string>();
    string arrayIngre[] = {"Lechuga", "Tomate", "Queso"};

    lista->add(&arrayIngre[0]);
    lista->add(&arrayIngre[1]);
    lista->add(&arrayIngre[2]);

    Stack<Ingrediente> *createBurguer(vector<Ingrediente> * pIngredientes)
    {
    }
}
