#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int>A){
    int N = A.size();
    int inter = 0;
    for(int e = 0; e <= N-2; e++){
        for(int h = e+1; h <= N-1; h++){
           int DI = e+A[e];
           int DD = h-A[h];
            if(DI >= DD){
                inter++;
            }
        }
    }
    return inter;
}

int main(){
    vector<int> entrada {1,5,2,1,4,0};
    cout<<solution(entrada) << endl;
}