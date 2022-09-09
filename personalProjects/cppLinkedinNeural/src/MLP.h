#include <algorithm>
#include <vector>
#include <iostream>
#include <random>
#include <numeric>
#include <cmath>
#include <time.h>

using namespace std;

class perceptron{
    public:
        vector<double> weights;
        double bias;
        perceptron(int inputs, double bias =1.0);
        double run(vector<double> x);
        void setWeights(vector<double> wInit);
        double sigmoid(double x);
};