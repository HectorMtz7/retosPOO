#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> A){
    vector<int> orden;
    orden = sort(A.begin(), A.end());
    cout<< orden[0];
    cout<< orden[1];
    cout<< orden[2];
    cout<< orden[3];
    cout<< orden[4] << endl;
    return 5;
}

int main(){
    int faltante;
    vector <int> A = {2, 5, 4, 1, 6};
    faltante = solution(A);
    cout << "bro, te falta el número: " << faltante << endl;
}