#include <iostream>

using namespace std;
int main(){

auto sum2_10 = [](auto x) { return x+10; };
int three = sum2_10(3); // == 13
float foo = sum2_10(3.5); // == 13.5

}


