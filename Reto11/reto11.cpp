#include<iostream>
#include<vector>

using namespace std;

int solution(int A, int B, int K){
    int cont = 0;
    for(int i = A; i <= B; i++){
        if(i%K == 0){
            cont = cont+1;

       }
    }
    return cont;
}

int main(){
    int A,B,K;
    cout << "Captura el valor de A, parcero: " << endl;
    cin >> A;
    cout << "Captura el valor de B, parcero: " << endl;
    cin >> B;
    cout << "Captura el valor de K, parcero: " << endl;
    cin >> K;
    cout<< "Tu resultado es" << endl;
    int result;
    result = solution(A,B,K);
    cout<< result<<endl;

}