//RSA Cipher
#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;

int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}

int main() {
    int prime_numbers[100] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541};
    srand(time(0));
    int a = prime_numbers[rand() % 100];
    int b = prime_numbers[rand() % 100];
    double n = a*b;
    double fi = (a-1)*(b-1);

    int e=3;
    int temp;
    while(e<fi) {
      temp = gcd(e,fi);
      if(temp == 1)
         break;
      else
         e++;
    }

    int m;
    cout<<"Enter a number: ";
    cin>>m;
    //double c = pow(m,e);
    double c = int(pow(m,e))% int(n);

    double d = int(pow(c,d)) % int(n);

    cout<<"Message = "<<m<<endl;
    cout<<"p = "<<a<<endl;
    cout<<"q = "<<b<<endl;
    cout<<"n = pq = "<<n<<endl;
    cout<<"phi = "<<fi<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"Encrypted message = "<<c<<endl;

    return 0;
}