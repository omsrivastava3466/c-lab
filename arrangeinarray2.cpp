# include <iostream>
# include <vector>
using namespace std;
void squaresortedarray(vector<int>&arr){
    vector<int>ans;
    int leftptr=0;
    int rightptr=4;
    while(leftptr<=rightptr){
        if(abs(arr[leftptr])<abs(arr[rightptr])){
            ans.push_back(arr[rightptr]*arr[rightptr]);
            rightptr--;
        }
        else{
            ans.push_back(arr[leftptr]*arr[leftptr]);
            leftptr++;
        }
    }
    int n=0;
    while(n<5){
        cout<<ans[n]<<" ";
    n++;
    }
}
int main(){
    vector<int>arr={12,5,-6,-13,9};
    squaresortedarray(arr);
    return 0;
}