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
    int x;
};

int distancia (Persona o1, Persona o2) {
    return abs(o1.x - o2.x);
}

Persona capPersona () {
    Persona p;
    cin >> p.nombre;
    cin >> p.x;
    return p;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        Persona a = capPersona();
        Persona b = capPersona();
        Persona c = capPersona();
    
        int dis1 = distancia(c, a);
        int dis2 = distancia(c, b);
        
        if (dis1 >= dis2) {
            cout << a.nombre << endl;
        } else {
            cout << b.nombre << endl;
        }
        
    }
    
    
    return 0;
}


