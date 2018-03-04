#include <cstddef>
#include <iostream>

using namespace std;

    //2 functions take int and char

    void myfunc1(int x){
        cout<<x<<endl;
    }

    void myfunc1(char * x){
        cout<<x<<endl;
}

int main(){
// error -- ambiguous cann't 
//be implicitly converted
myfunc1(NULL);
// calls myfunc1(char*)
myfunc1(nullptr); 
}
