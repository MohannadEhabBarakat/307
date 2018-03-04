#include <iostream>
#include <type_traits>

 using namespace std;

int main()
{
    cout
    << is_null_pointer< decltype(nullptr) >::value<<'\n'
    <<is_null_pointer< char* >::value << '\n';
}
