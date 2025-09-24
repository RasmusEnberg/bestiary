#include <iostream>
#include<vector>
using namespace std;


class monster
{
    
    protected :
    string name;
    int hp;
    monster(string name,int hp)
    {

    
    }
    
    public :
    virtual void attack(){cout<<"base attack";};
    virtual void describe(){cout<<"base description";}
    virtual ~ monster(){}
};

class orc:public monster
{
    public:
    string name;
    int hp;
    orc (string name,int hp) :monster("leffe",20)
    {
        this->name=name;
        this->hp=hp;
    };

    void attack()override{cout<<". orc attack | ";}
    void describe()override{cout<<"swings a club \n";}
};
class dragon:public monster
{
     public:
     string name;
     int hp;
    dragon (string name,int hp) :monster("håkan",200)
    {
        this->name=name;
        this->hp=hp;
    };
    void attack()override{cout<<". dragon attack RAWR | ";}
    void describe()override{cout<<"breathes fire \n";}
};
class goblin:public monster
{
     public:
     string name;
     int hp;
    goblin (string name,int hp) :monster("tobbe",50)
    {
        this->name=name;
        this->hp=hp;

    };
    void attack()override{cout<<". goblin attack | ";}
     void describe()override{cout<<"throws rocks \n";}
};

int main()
{
    vector<monster*> monsters;
    
    monster*monst1 =  new orc("leffe",20);
    cout<<&monst1 ;
    monst1->attack();
    monst1->describe();
    monster*monst2 = new dragon("håkan",200);
    cout<<&monst2 ;
    monst2->attack();
    monst2->describe();
    monster*monst3 = new goblin("tobbe",50);
    cout<<&monst3 ;
    monst3->attack();
    monst3->describe();

}
