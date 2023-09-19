#include <iostream>
using namespace std;

int multiply(int x, int y){
    int result;
    result=x*y;
    return result;
}

int multiply(int x, int y, int z){
    int result;
    result=x*y*z;
    return result;
}

float multiply(int x, float y, int z){
    float result;
    result=x*y*z;
    return result;
}

float multiply(float x, float y){
    float result;
    result=x*y;
    return result;
}

float multiply(float x, float y, float z){
    float result;
    result=x*y*z;
    return result;
}



int main() {
    float k = 10.327, j = 11.56, l = 5.45;

     cout<<multiply(3, 4)<<endl;
     cout<<multiply(3, 4, 5)<<endl;
     cout<<multiply(3, k, 5)<<endl;
     cout<<multiply(j, l)<<endl;
     cout<<multiply(k, j, l)<<endl;
     return 0;
}
