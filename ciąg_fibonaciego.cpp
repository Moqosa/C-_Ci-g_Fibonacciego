#include "iostream"
#include "iomanip"
using namespace std;

long double fib[100000];
int n;
int main() {
    cout<<"Ile liczb fibonaciego mam wyznaczyc:"<<endl;
    cin>>n;

    fib[0]=0;
    fib[1]=1;
    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    cout<<setprecision(100000);
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"wyraz numer"<<i+1<<": "<<fib[i];
    }

    system("pause");
    return 0;
}
