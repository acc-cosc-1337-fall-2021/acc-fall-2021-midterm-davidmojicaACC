#include "question2.h"

using std::cout; using std::cin; using std::string;

int main()
{
    int number1;
    int number2;
    int vars = true;
    int choice;

    do{
		
		cout<<"1-GCD\n";
		cout<<"2-Exit\n";
		cin>>choice;
		if(choice == 1)
		{
            int gcd;
			cout<<"Enter the first number: ";
            cin>>number1;
            cout<<"\nEnter a second number: ";
            cin>>number2;
            gcd = find_gcd(number1, number2);
            if(gcd >= 1 && gcd <=200)
            {
                cout<<"\nThe GCD is: "<<gcd<<"\n";
            }else{
                cout<<"\nThe GCD in not in range, please try again.\n";
            }
            
		}
		if(choice == 2)
		{
			vars = false;
		}
	}
	while(vars);

    return 0;
}