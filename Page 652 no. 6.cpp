#include <iostream>
#include <string>
using namespace std;

struct divisionSales{
	string division;
	double firstQuarter,
	       secondQuarter,
	 	   thirdQuarter,
	 	   fourthQuarter,
	 	   total,
		   average;
};

void show(divisionSales data);

int main(){
	
	divisionSales north;
	north.division = "North";
	north.firstQuarter;
	north.secondQuarter;
	north.thirdQuarter;
	north.fourthQuarter;
	north.total;
	north.average;
	
	divisionSales south;
	south.division = "South";
	south.firstQuarter;
	south.secondQuarter;
	south.thirdQuarter;
	south.fourthQuarter;
	south.total;
	south.average;
	
	divisionSales east;
	east.division = "East";
	east.firstQuarter;
	east.secondQuarter;
	east.thirdQuarter;
	east.fourthQuarter;
	east.total;
	east.average;
	
	divisionSales west;
	west.division = "West";
	west.firstQuarter;
	west.secondQuarter;
	west.thirdQuarter;
	west.fourthQuarter;
	west.total;
	west.average;
	
	divisionSales array[] = {north, south, east, west};
	
	for (int i = 0; i < 4; i++){
		show(array[i]);
	}
	return 0;
}

void show(divisionSales data){
	cout << "Division: " << data.division << endl;

	cout << "Please enter the sales for the first quarter: $ ";
	cin >> data.firstQuarter;

	cout << "Please enter the sales for the second quarter: $ ";
	cin >> data.secondQuarter;

	cout << "Please enter the sales for the third quarter: $ ";
	cin >> data.thirdQuarter;

	cout << "Please enter the sales for the fourth quarter: $ ";
	cin >> data.fourthQuarter;

	if(data.firstQuarter < 0 || data.secondQuarter < 0 || data.thirdQuarter < 0 || data.fourthQuarter < 0){
		cout << "Sorry, invalid data, please enter positive values only";
	} else 
	{
		data.total = data.firstQuarter + data.secondQuarter + data.thirdQuarter + data.fourthQuarter;
		data.average = data.total / 4;
		cout << "The total of the sales is: $ " << data.total << endl;
		cout << "The average of the sales is: $ " << data.average << endl;
	}
	cout << endl;
}
