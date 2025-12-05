#include<iostream>
using namespace std;

class hero {

  public:       
    int health;
  
    char level;

    void print() {
        cout << level << endl;
    }

};

int main()
{

    hero didi;

    cout << "health is : " << didi.health << endl;
    cout << "level is : " << didi.level << endl;

return 0;
}