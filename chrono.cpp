#include<iostream>
#include<chrono>
#include <ctime>

using namespace std;

int main(){
auto time = chrono::high_resolution_clock::now();
std::time_t time2 = chrono::system_clock
::to_time_t(time);
std::cout<<std::ctime(&time2)<<"\n";
}



