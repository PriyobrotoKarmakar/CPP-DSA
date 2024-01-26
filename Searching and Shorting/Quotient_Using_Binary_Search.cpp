#include<iostream>
using namespace std;
int getquotient(int divident, int divisor){
    int start = 0;
    int end = divident;
    long int mid = start + (end - start)/2;
    int ans;
    while(start<=end){
        if(mid*divisor==divident){
            return mid;
        }
        else if(mid*divisor>divident){
            end = mid-1;
        }
        else if(mid*divisor<=divident){ 
            ans = mid;
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int getremainder(int quotient, int divisor, int divident){
    int rem;
    rem = divident-(quotient*divisor);
    return rem;
}
int main(){
    int n;
    cout<<"Enter the divident: ";
    cin>>n;
    int k;
    cout<<"Enter the divisor: ";
    cin>>k;
    int quotient = getquotient(abs(n),abs(k));
    int rem = getremainder(quotient,abs(k),abs(n));
    //for nagative values
    if(n<0 && k<0){
        n = abs(n);
        k = abs(k);
    }
    else if(k<0){
        quotient = quotient*(-1);
    }
    else if(n<0){
        quotient = quotient*(-1);
        rem = rem*(-1);
    }
    cout<<"Divident: "<<n<<endl<<"Divisor: "<<k<<endl<<"Quotient: "<<quotient<<endl<<"remainder: "<<rem<<endl;
}
