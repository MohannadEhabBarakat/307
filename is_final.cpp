#include <iostream>
#include <type_traits>

 using namespace std;

class m {};
class n final {};

int main()
{
    cout
    << is_final<m>::value << '\n'
    << is_final<n>::value << '\n';
}
