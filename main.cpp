#include <iostream>
using namespace std;

double stockPrice (int whole, int nr, int dr, int stock);
coid main ()
{
	int whole, nr, dr, stock;
	double stockVa = ;
	char Continue;
	do{
		cout << "\n Please enter the whole numner of the stock";
		cin >> whole;
		cout << "\n Enter the numerator";
		cin >> nr;
		cout << "\n Enter the denominator";
		cin >> dr;
		cout << "\n Please enter the total nuber of stocks";
		cin >> stock;
		
		stockVal = stockPrice(whole, nr, dr, stock);
		cout << "\n Price of a single stock is " << stockVal;
		cout << "\n press 'Y' to enter another stock";
		cin >> continue;
		
	}	while (continue == 'y' || continue == 'Y');
}
{
	double stockPrice;
	price = static_cast<double> ( whole * dr +nr) / (dr * stock);
	return price;
}