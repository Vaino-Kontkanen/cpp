/*Below you can find class "Dog" that is lacking a starting 
method needed for constructing objects and methods Print
Information() and Bark(). Make additions to the class so 
that it becomes possible to construct objects from class. 
Also make up the missing methods. While being constructed 
the object will be given values: age, name, race and voice. 
class Dog 
{ 
   int age; 
   string name, race, voice; 
   // constructor 
   // method PrintInformation() 
   // method Bark() 
} */
#include <iostream>
#include <string>
using namespace std;
class Dog 
{
public:
   int age;
   string name, race, voice;
   Dog(int new_age,string new_name,string new_race,string new_voice);
   void PrintInformation();
   string Bark();
};
Dog::Dog(int new_age,string new_name,string new_race,string new_voice){
    age = new_age;
    name = new_name;
    race = new_race;
    voice = new_voice;
}
void Dog::PrintInformation()
{
    cout << "Name: " << name;
    cout << "\nAge: " << age;
    cout << "\nRace: " << race;
}
string Dog::Bark()
{
    return voice;
}
int main()
{
    Dog buffy(2, "Buffy", "bulldog", "Hau!!!");
    buffy.PrintInformation();
    cout << "Dog says: " << buffy.Bark();
}