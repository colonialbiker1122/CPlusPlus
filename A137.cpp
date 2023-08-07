#include<iostream>
using namespace std;

int main() {

    char a[] = "Sumukh";

    cout<<"Given String is: "<<a<<endl;

    //String Length
    int len;
    for(len=0; a[len] != '\0' ; len++) {}
    cout<<"Length of String is: "<<len<<endl;

    //String Reverse
    char z[len+1];
    int x, y=0;
    for (x=len-1; x>=0; x--, y++) {
        z[y] = a[x];
    }
    z[len] = '\0';
    cout<<"Reverse of the string is: "<<z<<endl;

    //String copy
    char b[len+1];
    for (int i=0; i<=len; i++) {
        b[i] = a[i];
    }
    cout<<"Copied String is: "<<b<<endl;

    string c,d;
    cout<<"Enter first string: ";
    cin>>c;

    cout<<"Enter Second String: ";
    cin>>d;

    //String Concatentaion
    int l1;
    for(l1=0; c[l1] != '\0' ; l1++) {}

    int l2;
    for(l2=0; d[l2] != '\0' ; l2++) {}
    
    char ans[l1+l2+1];
    int i=0;
    for (i=0; i<l1; i++) {
        ans[i] = c[i];
    }
    for (int j=0; j<l2; j++, i++) {
        ans[i] = d[j];
    }
    ans[i] = '\0';
    cout<<"Concatenation Answer is: "<<ans<<endl;

    //String Compare
    /*int flag = 0;
    if ( l1 != l2 ) {
        cout<<"String Length not Equal. Therefore, Strings are not equal\n";
    } else {
        for (int k=0; k<l1; k++) {
            if ( c[k] != d[k]) {
                flag++;
            }
        }

        if( flag == 0) {
            cout<<"Strings are equal\n";
        } else {
            cout<<"Strings are not equal\n";
        }
    }
    */
   
    //String Compare 2
    /*
    int temp1=0, temp2=0, diff;
    for( int i=0; i<l1; i++) {
        temp1 += c[i]; 
    }

    for(int i=0; i<l2; i++) {
        temp2 += d[i];
    }

    diff = temp2-temp1;
    cout<<"Difference of strings is: "<<diff<<endl;

    if ( diff == 0) {
        cout<<"Both Strings are equal\n";
    } else if ( diff < 0) {
        cout<<"First String is greater than Seecond string\n";
    } else {
        cout<<"Second String is greater than first string\n";
    }
    */

   //String Compare 3
    int diff=0;
    if ( l1 == l2 ) {
        for(int i=0; i<l1; i++) {
            if (c[i] != d[i]) {
                diff = c[i] - d[i];
                break;
            }
        }
    } else {
        diff = l1-l2;
    }

    if ( diff == 0) {
        cout<<"Both Strings are equal\n";
    } else if ( diff > 0) {
        cout<<"First String is greater than Second string\n";
    } else {
        cout<<"Second String is greater than first string\n";
    }

    return 0;
}