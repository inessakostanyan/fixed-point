#include <iostream>
#include <cmath>

double g(double x) {
    return (1.333)*x-2*std::log10(x)-(0.666);
}
int main()
{
    double e=0.0001;
    int iter=15;
    int i=1;
    double x0=4;
    double x1;
    std::cout<<"<<Պարզ իտերացիայի մեթոդ>> "<<std::endl;
    
    while(i<=iter){
        x1=g(x0);
            if(std::abs(x1-x0) < e){
                std::cout<<"իտերացիան հաջողվեց, արմատը՝ "<<x1<<std::endl;
                std::cout<<"իտերացիաների քանակ "<<i<<std::endl;
                break;
            }
        std::cout<<"մոտարկվող արժեք "<<"x"<<i<<" "<<x1<<std::endl;
        i++;
        x0=x1;
    }
    if(i>iter){
        std::cout<<"իտերացիան չհաջողվեց "<<std::endl;
    }
    return 0;
}
