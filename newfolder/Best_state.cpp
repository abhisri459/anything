// elements in descending order. 
#include <iostream> 
#include <vector> 
using namespace std; 
  
void print(vector<int> a, int n) 
{ 
    for (int i = 0; i <= n; i++)  
        cout << a[i] << " ";     
    cout << endl; 
} 
  
// Sorts a[] in descending order using 
// bubble sort. 
void sort(vector<int> a, int n) 
{ 
    for (int i = n; i >= 0; i--)  
        for (int j = n; j > n - i; j--)  
            if (a[j] > a[j - 1])  
                swap(a[j], a[j-1]); 
    print(a, n); 
} 
  
// Driver code 
int main() 
{ 
    int n = 7; 
    vector<int> a; 
    a.push_back(2); 
    a.push_back(4); 
    a.push_back(3); 
    a.push_back(2); 
    a.push_back(4); 
    a.push_back(5); 
    a.push_back(3); 
    sort(a, n - 1); 
    return 0; 
} 
