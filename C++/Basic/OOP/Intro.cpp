#include<iostream>
using namespace std;

class Hero{

  private:
  int health;

  public:
    char level;

  int getHealth(){
      return health;
  }

  void setHealth(int h){
       health = h;
  }

};

int main(){

  Hero h1;
  h1.level = 'A';
  h1.setHealth(70);

  cout<<"Hero health is " << h1.getHealth() <<endl;
  cout<<"Hero level is " << h1.level <<endl;


  return 0;
}

