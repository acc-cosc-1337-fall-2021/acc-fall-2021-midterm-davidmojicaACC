#include "question3.h"
using std::cout;using std::cin;using std::string;using namespace std;

int main()
{
    int choice;
	int num;
	char varification;
	bool vars = true;
	do{
		
		cout<<"1-Ingredients\n";
		cout<<"2-Exit\n";
		cin>>choice;
		if(choice == 1)
		{
            vector<double> ingredients;
			cout<<"Enter number of cookies: ";
			cin>>num;
            ingredients = get_cookie_ingredients(num);
			cout<<"Cups of Sugar "<<ingredients.at(0)<<"\n";
            cout<<"Cups of Butter "<<ingredients.at(1)<<"\n";
            cout<<"Cups of Flour "<<ingredients.at(2)<<"\n";
		}
		if(choice == 2)
		{
			cout<<"Are you sure you want to exit? (y/other char)\n";
			cin>>ws>>varification;
			if(varification == 'Y'|| varification  == 'y')
			{
				vars = false;
			}else{
				vars = true;
			}
		}
	}
	while(vars);
    return 0;
}
