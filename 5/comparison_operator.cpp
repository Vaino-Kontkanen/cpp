/*Write a program which asks the user whether they prefer coffee or tea, 
and how many sugar cubes they put in. The program's output depends on 
the user's answers:
Coffee, 0-2 cubes: "Coffee certainly is invigorating!"
Coffee, 3+ cubes: "Well, coffee can taste pretty intense..."
Tea, 0-2 cubes: "Tea can have a soothing effect!"
Tea, 3+ cubes: "Guess you enjoy your tea overly sweet?"
Otherwise: "An error occurred in the program!"
The sugar cubes are handled as an integer variable and the drink 
as a character variable ('c'/'t'). Uppercase can be ignored.*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char drink;
    int sugar;
    cout<<"Do you drink coffee or tea? (k/t) ";
    cin>>drink;
    cout<<"With how many cubes of sugar? ";
    cin>>sugar;
    if(drink=='c')
    {
        if(sugar>0 && sugar<3){		
        	cout<<"Coffee certainly is invigorating!" <<endl;
		}else if(sugar>3){
        	cout<<"Well, coffee can taste pretty intense..." <<endl;
		}else{
        	cout<<"An error occurred in the program!"<<endl;
		}
    }
    else if(drink=='t')
    {
		if(sugar>=0 && sugar<3){
        	cout<<"Tea can have a soothing effect!"<<endl;
	 	}else if(sugar>3){
        	cout<<"Guess you enjoy your tea overly sweet?"<<endl;
	 	}else{
        	cout<<"An error occurred in the program!"<<endl;
	 	}
    }
    else
    cout<<"An error occurred in the program!"<<endl;
    return 0;
}