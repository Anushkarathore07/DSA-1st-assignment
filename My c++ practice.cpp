#include <iostream>
using namespace std;

int getMin (int min[], int n) {
    int min =INT_MAX;
    for (int i=0; i<n; i++) {
        if (num[i]<min) {
            min =num [i] 
        }
    }
    return min;
}
int getMax (int max[], int n) {
int max =INT_MIN;
for (int i=0;i<n;i++){
    if (num[i]>max) {
        max= num[i];
    }
}
return max;
}
int main() {
    int size;
    cin>>size;
    int num[100];
    for (int i=0; i<size; i++) {
        cin>> num[i]; 
    }
    cout<<"Maximum value is"<<getMax, size<<endl;
    cout<<"Manimum value is"<<getMin, size<<endl;
}