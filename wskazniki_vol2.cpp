#include "iostream"

using namespace std;

int main(){
    
    int waga1 = 120;
    int waga2 = 121;
    int waga3 = 122;
    int waga4 = 123;
    int waga5 = 124;
    int tab_waga[5] = {waga1, waga2, waga3, waga4, waga5};
    cout << tab_waga[0] << *tab_waga + 6 << endl;
    cout << *(tab_waga) << endl;
    cout << *(tab_waga + 1) << endl;
    cout << *(tab_waga + 2) << endl;
    cout << *(tab_waga + 3) << endl;
    cout << *(tab_waga + 4) << endl;
    cout << *(tab_waga + 5) << endl;
    
    int* pointer_tab = tab_waga;
    
    for(int i = 0; i < 5; i++){
        *pointer_tab = *pointer_tab + 1;
        pointer_tab++;
    }
    pointer_tab = tab_waga;
    
    
    for(int i = 0; i < 5; i++){
        cout << *pointer_tab << endl;
        pointer_tab++;
    }
    
    for(int i = 0; i < 5; i++){
        cout << tab_waga[i] << endl;
    }
}