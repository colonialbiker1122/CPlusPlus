#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string key, message;
    cout<<"Enter Key: ";
    cin>>key;
    cout<<"Enter Message: ";
    cin>>message;

    int keylength = key.length(); 
    int rows = (message.length()/keylength) + (message.length()%keylength > 0 ? 1 : 0) + 1;
    
    char grid[rows][keylength];
    
    for( int i=0; i<keylength; i++) {
        grid[0][i] = key[i];
    }
    int k=0;
    for( int i=1; i<rows; i++) {
        for(int j=0; j<keylength; j++, k++) {
            grid[i][j] = message[k];
        }
    }

    for( int i=0; i<rows; i++) {
        for(int j=0; j<keylength; j++, k++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }


    int min = 0;
    char answer[message.length()-1];
    int l=0;
    for(int j=0; j<keylength; j++){
        for(int i=0; key[i]!= '\0'; i++)  {
            if( key[i] <= key[min] ) {
                min = i;
            }
        }

        for(int i=1; i<rows; i++, l++) {
            answer[l] = grid[i][min];
        }
        
        key[min] = 'z';
    }
    cout<<answer;
    return 0;
}