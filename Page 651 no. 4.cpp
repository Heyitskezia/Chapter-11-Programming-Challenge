#include <iostream> 
using namespace std; 


int main() 
{ 
const int numMonths = 12;
int values[numMonths];
int month, lowest, highest, rainfall, count, temperature; 
double average; 
double total = 0; 
 
string months[numMonths] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
 
for(int month = 1; month <=  numMonths; month++) {
		cout << "Enter the temperature for " << months[month-1] << ": "; 
		cin >> temperature;
	
	if ( temperature < -100 || temperature > 140 ) 
{ 
		cout << "The temperature must between =-100 and 140 Fahrenheit." << endl; 
		cout << "Please re-enter: "; 
		cin >> temperature; 
} 

total += temperature; 

} 

average = total / 12; 



		cout << "\n\nThe total temperature for the year is: " << total << " fahrenheit" << endl; 
		cout << "\nThe average monthly temperatures is: " << average << " fahrenheit" << endl; 
	


for(int month = 1; month <=  numMonths; month++) {
		cout << "\nEnter the rainfall (in inches) for " << months[month-1] << ": "; 
		cin >> rainfall;
		
	if ( rainfall < 0) 
{ 
		cout << "The rainfall must be greater than 0." << endl; 
		cout << "Please re-enter: "; 
		cin >> temperature; 
} 

total += temperature; 

} 

average = total / 12; 
highest = values[0]; 
lowest = values[0]; 


		cout << "\n\nThe total rainfall for the year is: " << total << " inches" << endl; 
		cout << "\nThe average monthly rainfall is: " << average << " inches" << endl; 
	

return 0; 
}

