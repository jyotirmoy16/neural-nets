#ifndef cost_hpp
#define cost_hpp

#include <vector>

using namespace std;

namespace cost{
    double mse(vector<double> x, vector<double> y);
    double msle(vector<double> x, vector<double> y);
    double l1(vector<double> x, vector<double> y);
    double l2(vector<double> x, vector<double> y);
    double mae(vector<double> x, vector<double> y);
    double mape(vector<double> x, vector<double> y);
    double klDivergence(vector<double> x, vector<double> y);//Kullback Liebler
    double crossEntropy(vector<double> x, vector<double> y);
    double negLogLikelihood(vector<double> x, vector<double> y);
    double poisson(vector<double> x, vector<double> y);
    double cosineProximity(vector<double> x, vector<double> y);
    double hinge(vector<double> x, vector<double> y);
    double squaredHinge(vector<double> x, vector<double> y);
}
#endif