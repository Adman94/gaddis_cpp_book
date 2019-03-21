#include <iostream>
#include <string>

using namespace std;

void displayReport(string movieName, int adultTickets, int childTickets) {
	
	float theaterEarings, grossProfit, netProfit, distributorCost;
		grossProfit = (adultTickets * 10) + (childTickets * 6);
		theaterEarings = (0.20 * grossProfit);
		distributorCost = grossProfit - theaterEarings;
		netProfit = grossProfit - distributorCost;
			
		cout << "Movie Name: \"" << movieName << "\"\n" << "Adult Tickets Sold: " 
						  << adultTickets
						  << "\n" << "Child Tickets Sold: "
						  << childTickets
						  << "\n" << "Gross Box Office Profit: ";
						  printf("%.2f", grossProfit);
						  cout << "\n" << "Net Box Office Profit: ";
						  printf("%.2f", netProfit);
						  cout << "\n" << "Amount Paid to Distributor: ";
						  printf("%.2f", distributorCost);
						 cout << endl;

}	

int main() {
	string movieName;
	int adultTickets, childTickets;

	cout << "Enter the name of the movie: ";
	getline(cin, movieName);
	cout << "Enter the number of adult tickets sold: ";
	cin >> adultTickets;
	cout << "Enter the number of child tickets sold: ";
	cin >> childTickets;
	displayReport(movieName,adultTickets,childTickets);
}

