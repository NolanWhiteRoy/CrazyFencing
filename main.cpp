#include <iostream>

using namespace std; 

double area (int N, double h[], double w[])
{
    int a;
    double area = 0;
    for( a = 0; a < N+1; a = a + 1 ){
      area = ((h[a]+h[a+1])/2)*w[a] + area;
    }
   return area;
}

int main()
{

    int N = 0;
    cin >> N;
    if (N==0){
    cout << 0;
    return 0;
}
    
    double h[10001];
    double w[10001];
    for (int i=0;i<N+1;i++){
    cin >> h[i];
}
for (int i=0;i<N;i++){
    cin >> w[i];
}

    double A;
    A = area (N, h, w);
    cout << A;
    return 0;
}