//
//  main.cpp
//  ProblemaMaratonPensamiento
//
//  Created by Juan Pablo Peñaloza Botero on 5/11/16.
//  Copyright © 2016 Juan Pablo Peñaloza Botero. All rights reserved.
//

#include <iostream>

using namespace std;

int funcion (int n) {
    return ((n * 3) - 4) + 2;
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        int matrix [5][5];
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> matrix[i][j];
            }
        }
        
        for (int i = 0; i < 5; i++) {
            int j, temp;
            for (int j = 0; j < 5; j++) {
                while (j > 0 && matrix[i][j] < matrix[i][j-1]){
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[i][j - 1];
                    matrix[i][j-1] = temp;
                    j--;
                }
            }
            
        }
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    
    return 0;
}


