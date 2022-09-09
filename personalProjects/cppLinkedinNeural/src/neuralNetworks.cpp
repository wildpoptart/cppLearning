#include <iostream>
#include <MLP.h>

int main() {
    srand(time(NULL));
    rand();

    cout << "\n\n----------Logic Gate Exmaple--------\n\n";
    perceptron *p = new perceptron(2);

    p->setWeights({10,10,-15}); //AND gate

    cout << "Gate: "<<endl;
    cout <<p->run({0,0})<<endl;
    cout <<p->run({0,1})<<endl;
    cout <<p->run({1,0})<<endl;
    cout <<p->run({1,1})<<endl;
    
}