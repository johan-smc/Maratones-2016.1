//
//  main.cpp
//  ProblemaMaratonPensamiento
//
//  Created by Juan Pablo Peñaloza Botero on 5/11/16.
//  Copyright © 2016 Juan Pablo Peñaloza Botero. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

struct Persona {
    string nombre;
    int ced;
    int sal;
};

Persona capPer () {
    Persona p;
    cin >> p.nombre;
    cin >> p.ced;
    cin >> p.sal;
    return p;
}

void insertion_sort (Persona arr[], int length){
    int j;
    Persona temp;
    
    for (int i = 0; i < length; i++){
        j = i;
        
        while (j > 0 && arr[j].sal < arr[j-1].sal){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        Persona arr [10];
        for (int i = 0; i < 10; i++) {
            arr[i] = capPer();
        }
        
        insertion_sort(arr, 10);
        
        for (int i = 0; i < 10; i++) {
            cout << arr[i].nombre << endl;
        }
        
    }
    
    
    
    return 0;
}


