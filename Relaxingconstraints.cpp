#include <iostream>
#include <string>

using namespace std;

constexpr int dear(int a){
    if(a==1)return 1;
    return 0;
}

int main(){

constexpr auto a = dear(1);

return 0;
}

