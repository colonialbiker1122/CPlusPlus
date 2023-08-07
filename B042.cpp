#include<iostream>
using namespace std;

void test(int x) {
    try{
        if(x == 1) {
            throw x;
        } else if(x == 0) {
            throw 'x';
        } else if (x == -1) {
            throw 1.0;
        }
        cout<<"End of try Block\n";
    } catch(char c) {
        cout<<"Caught Character\n";
    } catch (int i) {
        cout<<"Caught Integer\n";
    } catch(double f) {
        cout<<"Caught Float\n";
    }
    cout<<"End of Try Catch\n";
}

int main() {
    cout<<"For x == 1:\n";
    test(1);
    cout<<endl;
    cout<<"For x == 0:\n";
    test(0);
    cout<<endl;
    cout<<"For x == -1:\n";
    test(-1);
    cout<<endl;
    cout<<"For x == 20:\n";
    test(20);
    return 0;
}