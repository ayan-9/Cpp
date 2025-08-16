#include<iostream>

using namespace std;
union money
{
    int rice;
    char car;
    float pkr_price;
};

int main(){

    union money m1;
    m1.car = 'c';
    m1.rice = 1000;

    cout << m1.car << endl;
    cout << m1.rice << endl;

    return 0;
}