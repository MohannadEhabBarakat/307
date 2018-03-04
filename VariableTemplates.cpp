#include <iostream>

using namespace std;

template<class T>
// variable template
constexpr T tea = T(15);

template<class T>
void print_tea(T num){
    // tea<T> is a variable
    //template instantiation
    cout<<tea<T>*num<<"\n";
}
int main(){
    print_tea(10);
}
