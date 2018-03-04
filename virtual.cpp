#include <iostream>

using namespace std;

class dataStruct{
    public:
        dataStruct()=default;
        virtual void bonus(){
		x+=5;
		cout<<"DSx "<<x<<endl;
	}
        void toggle_pass(){
		pass= !pass;
		cout<<"DSpass "<<pass;
	}
    private:
        int x=0;
        bool pass;
};

class advanced_programing:dataStruct{
    public:
        void bonus()override {
		x+=10;
		cout<<"APx "<<x<<endl;
	}
        void toggle_pass(){
		pass= !pass;
		cout<<"APpass "<<pass;
	}
        void copy()=delete;
    private:
        int x=0;
        bool pass;
};

int main(){

dataStruct DS;
advanced_programing AP;

DS.bonus();
AP.bonus();


return 0;
}
