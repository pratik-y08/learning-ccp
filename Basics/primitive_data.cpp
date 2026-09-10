#include <iostream>
#include<limits>
using namespace std;
int main(){
    cout<< "Size of short: "<<sizeof(short)<<endl;
    cout<< "Size of int: "<<sizeof(int)<<endl;
    cout<< "Size of float: "<<sizeof(float)<<endl;
    cout<< "Size of double: "<<sizeof(double)<<endl;
    cout<< "Size of long: "<<sizeof(long)<<endl;
    cout<< "Size of long long: "<<sizeof(long long)<<endl;
    cout<< "Size of boolean: "<<sizeof(bool)<<endl;
    
    
    cout << numeric_limits<int>::min()<<endl;
    cout << numeric_limits<int>::max()<<endl;
    
    cout << numeric_limits<long long>::max()<<endl;
    cout << numeric_limits<long long>::min()<<endl;

    cout << numeric_limits<bool>::min()<<endl;    
    cout << numeric_limits<bool>::max()<<endl;    

    
    cout << numeric_limits<float>::min()<<endl;    
    cout << numeric_limits<float>::max()<<endl;

    return 0;
}

