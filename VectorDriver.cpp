// VectorDriver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VectorDriver.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);
	
	cout << " add numbers "; //step 2
	add_numbers(sample_vector);
	print(sample_vector);

	cout << " print even "; //step 1
	print_even(sample_vector);
	cout << "";
	
	cout << " is present "; //step 3
	is_present(sample_vector, 0);

	vector<short>myvector(0); //step 4
	for (int i = 0; i < 5; i++)
	{
		short temp2 = rand() % 20;
		myvector.push_back(temp2);
	}
	cout << "newly created vector\t";
	print(myvector);
	cout << "\n";
	sort(myvector.begin(), myvector.end());
	cout << " sorted vector: " << endl;
	print(myvector);
	cout << "" << endl;
	

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}

