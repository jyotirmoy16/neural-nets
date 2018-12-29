#include "activation.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> results(10, 0.0);
    double (*tanh)(double)=&activation::tanh;
    cout<<tanh(1.1)<<"\n";
    return 0;
}


