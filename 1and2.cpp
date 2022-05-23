#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Animal
{
public:
    string name;
    string feature;
    string sound;
public:
    Animal( string name)
    {
        this->name=name;
        feature = " ";
        sound = " ";
    }

    void get_sound()
    {
        cout << "sound : " <<  sound << endl;
    }
    void get_action()
    {
        cout << "action : " << feature << endl;
    };

};
class Farm_Animal : public Animal
{
public:
    vector <string> resourse;
    Farm_Animal( string name) : Animal(name)
    {

    }

public:
    void get_resourse(string res)
    {
        int Size = resourse.size();
        int r = 0;
        for (int i = 0; i < Size; i++) {
            if (resourse[0] == res) {
                cout << "from object " << name << " was received " << res << endl;
                r++;
                break;
            }
        }
        if(r == 0)
        {
            cout <<"getting the resource is not possible" << endl;
        }
    }
};
