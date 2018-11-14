#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    
    int b=A.size() - 1;
    int carry = 1;
    int tmp = 0;
    while (b >= 0) {
        tmp = (A[b] + carry) / 10;
        A[b] = (A[b] + carry) % 10;
        carry = tmp;
        
        b--;
    }
    
    if (carry > 0) {
        A.insert(A.begin(), carry);
    }
    
    auto iter = A.begin();
    while(*iter == 0) iter++;
    
    A.erase(A.begin(), iter);
    
    return A;
}

int main(int argc, char **argv) {
    vector<int> A={1,2,3,4,5,9};
    
    plusOne(A);
    
    for(int i=0;i<A.size();i++)
         cout<<A[i];
   
    return 0;
}
