#include<iostream>
using namespace std;

template <typename temp>
//generalize the return type
decltype(auto) func(temp& t) {
  return t;
}

int main(){
// Returns a reference to a deduced type.
//generalize the return type
auto m = [](auto& z) -> decltype(auto) {
    return func(z);
    };
//generalize the 'x' type
decltype(auto) x = 123;
// reference to `m`
int& y = m(x);
}
