#include <MLP.h>

double frand(){
    return (2.0*(double)rand() / RAND_MAX) - 1.0;
}

//return new perceptron object with # inputs +1 for bias
perceptron::perceptron(int inputs, double bias){
    this->bias = bias;
    weights.resize(inputs+1);
    generate(weights.begin(),weights.end(),frand);
}

//run perceptron x = vector with input values
double perceptron::run(vector<double> x){
    x.push_back(bias);
    double sum = inner_product(x.begin(),x.end(),weights.begin(), (double)0.0);
    return sigmoid(sum);
}

//write sigmoid activation function
void perceptron::setWeights(vector<double> wInit){
    weights = wInit;
}
//write function to write values to weights
double perceptron::sigmoid(double x){
    return 1.0/(1.0 + exp(-x));
}