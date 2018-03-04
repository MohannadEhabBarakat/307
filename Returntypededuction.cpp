//Idea of the code retrieved from
//https://github.com/AnthonyCalandra
// /modern-cpp-features#binary-literals
#include<iostream>
using namespace std;

template <typename temp>
auto& func(temp& t) {
  return t;
}

int main(){
// Returns a reference to a deduced type.
auto m = [](auto& z) -> auto& {
    return func(z);
    };
int x = 123;
// reference to `m`
int& y = m(x);
}
