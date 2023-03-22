#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities




double sum = 0;

// double *getProb(double w[], int n)
// {
//     double *p;
//     p = new double[n];
//     for(unsigned int i=0; i<n; i++)
//         sum += w[i];


//     for(unsigned int i=0; i<n; i++)
//     {
//         p[i] = w[i]/sum;
//         cout <<"P"<<i+1<<"="<<p[i]<<endl;      
//     }
//     return p;
// }

void getProb(double w[], int n)
{
    for(unsigned int i=0; i<n; i++)
        sum += w[i];

    for(unsigned int i=0; i<n; i++)
    {
        w[i] = w[i]/sum;
        cout <<"P"<<i+1<<"="<<w[i]<<endl;      
    }
}



int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    double *p;
    int n = sizeof(w)/sizeof(w[0]);
    // p = getProb(w, n);
    getProb(w, n); // this case is changing all the w values as well

    
    return 0;
}
