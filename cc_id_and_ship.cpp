#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        char c;
        cin>>c;
        if (c == 'b' or c == 'B') {
            cout<<"BattleShip"<<"\n";
        }
        else if (c == 'c' or c == 'C') {
            cout<<"Cruiser"<<"\n";
        }
        else if (c == 'd' or c == 'D') {
            cout<<"Destroyer"<<"\n";
        }
        else if (c == 'f' or c == 'F') {
            cout<<"Frigate"<<"\n";
        }
    }
}
