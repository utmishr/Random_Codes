//(A*B - C^D)/E % M

#include <iostream>
using namespace std;

using lli = long long;
lli mod = 1000000007;


lli binpow(lli a, lli b, lli mod) {
    if (b == 0) return 1;
    
    if (b % 2) {
        return (a * binpow(a, b - 1, mod)) % mod;
    } else {
        lli temp = binpow(a, b / 2, mod);
        return (temp * temp) % mod;
    }
}

int main() {
    lli a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    a%=mod;
    b%=mod;
    c%=mod;
    e%=mod;
    
    
    lli x1 = (a*b)%mod;
    lli x2 = binpow(c,d,mod);
    
    lli x3 = (x1-x2)%mod;
    lli x4 = binpow(e,mod-2,mod);
    
    lli ans = (x3*x4)%mod;
    
    cout<<((ans%mod)+mod)%mod<<endl;
    
    return 0;
}


Vivek Gupta
  4:01 PM
#include <iostream>
using namespace std;

using lli = long long;
lli mod = 1000000007;


lli binpow(lli a,lli b,lli mod){
    if(b==0)return 1;
    if(b%2){
        return a*binpow(a,b-1,mod)%mod;
    }else{
        lli temp = binpow(a,b/2,mod);
        return temp*temp%mod;
    }
}

int main() {
    lli a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    a%=mod;
    b%=mod;
    c%=mod;
    e%=mod;
    
    
    lli x1 = (a*b)%mod;
    lli x2 = binpow(c,d,mod);
    
    lli x3 = (x1-x2)%mod;
    lli x4 = binpow(e,mod-2,mod);
    
    lli ans = (x3*x4)%mod;
    
    cout<<((ans%mod)+mod)%mod<<endl;
    
    return 0;
}
