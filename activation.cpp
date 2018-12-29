#include "activation.hpp"
#include <math.h>

double activation::sigmoid(double x){
    return 1/(1+exp(-x));
}

double activation::tanh(double x){
    return (1-exp(-2*x))/(1+exp(-2*x));
}

double activation::relu(double x){
    return fmax(0.0, x);
}

double activation::softmax(double x){
    return exp(x);
}