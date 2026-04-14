#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    int result = 1;
    cout << N << " to power number: ";
    
    for (int i = 0; i <= M; i++){
        cout << result;
        if (1 < M){
            cout << ", ";
        }
        result *= N; 
    }

    // TODO

    cout << endl;

    return 0;
}
