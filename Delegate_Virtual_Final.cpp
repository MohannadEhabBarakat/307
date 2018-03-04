#include <iostream>
using namespace std;

class father{
    public:
        //Delegating constructors
        father():father(0){
		cout<<"WOOOW"<<endl;
	}
        father(int h):father( h,0){
		cout<<h<<" "<<endl;
	}
        father(int h,float age){
		cout<<age<<" "<<endl;
	}

    private:
        int h;
        float age;

};


int main(){
    father x;
    father y(6);
    father z(5,7);
}
