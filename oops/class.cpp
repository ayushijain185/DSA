#include<iostream>
using namespace std;
class player{
    private:
        int health;
        int score;
        bool alive;
        int age;
    public:
         int gethealth(){
            return health;
        }   
        void sethealth(int health){
           player::health=health;
        }

         int getage(){
            return age;
        }   
        void setage(int age){
           player::age=age;
        }

         int getalive(){
            return alive;
        }   
        void setalive(bool alive){
           player::alive = alive;
        }

        int getscore(){
            return score;
        }   
        void setscore(int score){
           this->score=score;
        }  
};

int main(){
    player obj;
    obj.sethealth(20);
    obj.setscore(10);
    obj.setage(30);
    obj.setalive(true);
    cout<<"health : "<<obj.gethealth()<<endl;
    cout<<"alive : "<<obj.getalive()<<endl;
    cout<<"age : "<<obj.getage()<<endl;
    cout<<"score : "<<obj.getscore()<<endl;
    cout<<endl;

    player obj1;
     obj1.sethealth(30);
    obj1.setscore(12);
    obj1.setage(25);
    obj1.setalive(false);
    cout<<"health : "<<obj1.gethealth()<<endl;
    cout<<"alive : "<<obj1.getalive()<<endl;
    cout<<"age : "<<obj1.getage()<<endl;
    cout<<"score : "<<obj1.getscore()<<endl;
}