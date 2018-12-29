#include "cost.hpp"
#include <math.h>

double cost::mse(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<x.size(); i++){
        sum+=(y[i]-x[i])*(y[i]-x[i]);
    }
    return sum/x.size();
}

double cost::msle(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i< y.size(); i++){
        sum+=log(1+x[i])+log(1+y[i]);
    }
    return sum/y.size();
}

double cost::l1(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=abs(y[i]-x[i]);
    }
    return sum;
}

double cost::l2(vector<double> x, vector<double> y){
  double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=(y[i]-x[i])*(y[i]-x[i]);
    }
    return sum;
}

double cost::mae(vector<double> x, vector<double> y){
    return cost::l1(x,y)/y.size();
}

double cost::mape(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=(abs((y[i]-x[i])/y[i])*100);
    }
    return sum/y.size();
}

double cost::klDivergence(vector<double> x, vector<double> y){//Kullback Liebler
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=y[i]*log(y[i])-y[i]*log(x[i]);
    }
    return sum/y.size();
}

double cost::crossEntropy(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i < y.size(); i++){
        sum+=y[i]*log(x[i]) + (1-y[i])*log(1-x[i]);
    }
    return -sum/y.size();
}

double cost::negLogLikelihood(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=log(x[i]);
    }
    return sum/y.size();
}

double cost::poisson(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=(x[i]-y[i]*log(x[i]));
    }
    return sum/y.size();
}

double cost::cosineProximity(vector<double> x, vector<double> y){
    double quot=0;
    double div1=0;
    double div2=0;
    for(int i=0; i<y.size(); i++){
        quot+=x[i]*y[i];
        div1+=y[i]*y[i];
        div2+=x[i]*x[i];
    }
    return -quot/(sqrt(div1)*sqrt(div2));
}

double cost::hinge(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=max(0.0, 1-y[i]*x[i]);
    }
    return sum/y.size();
}

double cost::squaredHinge(vector<double> x, vector<double> y){
    double sum=0;
    for(int i=0; i<y.size(); i++){
        sum+=pow((max(0.0, 1-y[i]*x[i])),2);
    }
    return sum/y.size();
}