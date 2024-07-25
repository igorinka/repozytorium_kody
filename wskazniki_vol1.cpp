#include "iostream"

using namespace std;

void funkcja(int &zmienna_do_zmiany){
    zmienna_do_zmiany = 1;
}

int main(){
    int zmienna = 0;
    cout << zmienna << endl;
    funkcja(zmienna);
    cout << zmienna << endl;
    
    
    
    int data = 0;
    int* wsk_zmienna = &data;
    data++;
    cout << *wsk_zmienna << endl;
    

}