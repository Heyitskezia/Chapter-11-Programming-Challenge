#include <iostream>
using namespace std;


struct monthlyBudget
{
    float  housing,
           utilities,
           householdExpenses,
           transportation,
           food,
           medical,
           insurance,
           entertainment,
           clothing,
           miscellaneous;
 
    monthlyBudget(float h = 0, float u = 0, float he = 0, float t = 0, float f = 0,
				  float m = 0, float i = 0, float e = 0, float c = 0, float misc = 0)
    {
        housing = h;
        utilities = u;
        householdExpenses = he;
        transportation = t;
        food = f;
        medical = m;
        insurance = i;
        entertainment = e;
        clothing = c;
        miscellaneous = misc;

    }
};
void getAmount(monthlyBudget &);
void displayAmount(monthlyBudget &, monthlyBudget &);

int main()
{
    monthlyBudget utlty(500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00);
    monthlyBudget user;
    getAmount(user);
    displayAmount(user, utlty);
 
    return 0;
}
void getAmount(monthlyBudget &user)
{
	cout << "Hello! This program will calculate your monthly budget :)";
    cout << "\n\nPlease input your monthly expenses\n";
    
    cout  << endl << "1. Housing: ";
    cin >> user.housing;
    
	cout << "2. Utilities: ";
    cin >> user.utilities;
    
	cout << "3. Household Expenses: ";
    cin >> user.householdExpenses;
    
	cout << "4. Transportation: ";
    cin >> user.transportation;
    
	cout << "5. Food: ";
    cin >> user.food;
    
	cout << "6. Medical: ";
    cin >> user.medical;
    
	cout << "7. Insurance: ";
    cin >> user.insurance;
    
	cout << "8. Entertainment: ";
    cin >> user.entertainment;
    
	cout << "9. Clothing: ";
    cin >> user.clothing;
    
	cout << "10. Miscellaneous: ";
    cin >> user.miscellaneous;
}
void displayAmount(monthlyBudget &user, monthlyBudget &utlty)
{
    cout << endl << "This is your total expenses\n";
    
	cout << endl <<  "Housing: " << "$ " << user.housing << endl;
    if (user.housing > utlty.housing)
    {
        cout << "You have overreached your housing budget\n";
}
    else
    {
        cout << "You have not overreached your housing budget\n";
    }
    cout << "\nUtilities: " << "$ "<< user.utilities << endl;
    if (user.utilities > utlty.utilities)
    {
        cout << "You have overreached your utilities budget\n";
}
    else
    {
        cout << "You have not overreached your utilities budget\n";
    }
    cout << "\nHousehold Expenses: " << "$ " << user.householdExpenses << endl;
    if (user.householdExpenses > utlty.householdExpenses)
    {
        cout << "You have overreached your household budget\n";
}
    else
    {
        cout << "You have not overreached your utilities budget\n";
    }
    cout << "\nTransportation: " << "$ " << user.transportation << endl;
    if (user.transportation > utlty.transportation)
    {
        cout << "You have overreached your transportation budget\n";
    }
    else
    {
        cout << "You have overreached your transportation budget\n";
}
    cout << "\nFood: " << "$ " << user.food << endl;
    if (user.food > utlty.food)
    {
        cout << "You have overreached your food budget\n";
    }
    else
    {
        cout << "You have not overreached your food budget\n";
}
    cout << "\nMedical:: " << "$ " << user.medical << endl;
    if(user.medical > utlty.medical)
    {
        cout << "You have overreached your medical budget\n";
    }
    else
    {
        cout << "You have not overreached your medical budget\n";
    }
    cout << "\nInsurance: " << "$ " << user.insurance << endl;
    if (user.insurance > utlty.insurance)
    {
        cout << "You have overreached your insurance budget\n";
    }
    else
    {
        cout << "You have not overreached your insurance budget\n";
    }
    cout << "\nEntertainment: " << "$ " << user.entertainment << endl;
    if (user.entertainment > utlty.entertainment)
    {
        cout << "You have overreached your entertainment budget\n";
}
    else
    {
        cout << "You have not overreached your entertainment budget\n";
    }
    cout << "\nClothing: " << "$ " << user.clothing << endl;
    if (user.clothing > utlty.clothing)
    {
        cout << "You have overreached your clothing budget\n";
    }
    else
    {
        cout << "You have not overreached your clothing budget\n";
    }
    cout << "\nMiscellaneous: " << "$ " << user.miscellaneous << endl;

    if (user.miscellaneous > utlty.miscellaneous)

    {
        cout << "You have overreached your miscelaneous budget\n";
    }
    else
    {
        cout << "You have not overreached your miscelaneous budget\n";
}
    float userBudget = user.housing + user.utilities + user.householdExpenses + user.transportation + user.food + user.medical + user.insurance + user.entertainment + user.clothing + user.miscellaneous;
    float utltyBudget = utlty.housing + utlty.utilities + utlty.householdExpenses + utlty.transportation + utlty.food + utlty.medical + utlty.insurance + utlty.entertainment + utlty.clothing + utlty.miscellaneous;

    cout << endl << "This is your expenses this month: $ " << userBudget;
    
    if(userBudget > utltyBudget)
    {
        cout << ". You have overreached your monthly budget\n";
    }
    else
    {
        cout << ". You have not overreached your monthly budget\n";
    }
}

