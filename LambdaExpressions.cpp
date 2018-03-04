#include <cstddef>
#include <iostream>

using namespace std;


int main()
{
int x;

cout<<"get x: ";
//get NUM. from the user
cin>>x;

//Lambda Expressions
auto add20 = [=]{
        return x+20;
    };

cout <<"add20 " << add20()<<endl;

}

