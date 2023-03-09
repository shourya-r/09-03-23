#include <iostream> 
using namespace std;
int main(){
    

    cout<<"enter the numbers:"<<endl;
    int n;
    cin >> n;
    int numbers[n];
    
    for(int i = 0 ; i<n ; i++) {
      cin>>numbers[i];
    }
    
    for(int i = 0 ; i<n ; i++) {
      cout<<numbers[i]<<endl;
    }
    int sum = 0;
    
    for(int j = 0 ; j<n ; j++){
      sum += numbers[j];
    }
    cout<<sum;
}
    
 