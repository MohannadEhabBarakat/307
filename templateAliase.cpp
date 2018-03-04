#include <iostream>
#include <vector>

using namespace std;

template <typename type>
//make Template aliase
using My_vector = vector<type>;
//make Template aliase
using My_int = int;


int main()
{
//use the aliase to 
//intialize vector of type int
My_vector<int> x; 
//use the aliase to intialize int
My_int s= 5; 


}
