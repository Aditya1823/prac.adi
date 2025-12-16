#include <iostream>
using namespace std;

int main(){
    int framemax;
    cin >> framemax;

    for(int frame=0; frame< framemax; frame++){
        int ack;
        cout<<"the frame is sent" << frame+1 << endl;
        cout<< "enter the ack" << endl;
        cin >> ack;
        if (ack==1)
        {
            cout<< "ack is recived and frame is sent perfectly"<< endl;
        }
        else
        {
            cout<< "the frame is sent again"<< endl;
        }
        
    }
    return 0;
}