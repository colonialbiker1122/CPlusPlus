//I/O Operations on binary files
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    float height[4] = {125.3, 123.6, 128.4, 130.2};

    ifstream if1;
    ofstream of1;

    of1.open("file09.txt");
    of1.write((char *) & height, sizeof(height));
    of1.close();

    float recheight[4];
    int i;
    if1.open("file09.txt");
    if1.read((char *) & recheight, sizeof(recheight));
    for(i=0; i<4; i++) {
        cout<<recheight[i]<<endl;
    }
    if1.close();
    return 0;
}