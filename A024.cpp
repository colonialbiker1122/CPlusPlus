//CLACULATE AVERAGE OF NUMBERS USING ARRAY AND DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;

int main() {
    int n,i;
    float ans=0;
    int *pt;

    cout<<"Enter number of elements : ";
    cin>>n;

    pt = (int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++,pt++) {
        cout<<"Enter value of element a["<<i<<"] : ";
        cin>>*pt;
        ans = ans + *pt;
    }

    ans = ans/n;
    cout<<"Average of all numbers is : "<<ans<<endl;
    free(pt);
    return 0;
}