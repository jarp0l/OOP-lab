/*
 * Task #3:
 * Write a program in CPP to sort the list of n strings in alphabetical order
 * using the concept of STL.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> alphaSort(vector<string> v){
	sort(v.begin(), v.end());
	return v;
}

void printNames(vector<string> names){
    for(auto itr : names){
        cout << itr << endl;
    }
}

int main()
{   
	int n;
	vector<string> names;
	string input;

	cout << "Enter number of names: ";
	cin >> n;

    cout << "\nEnter the names: " << endl;

    while(n){
        cin >> input;
        names.push_back(input);
        n--;
    }

	names = alphaSort(names);

	cout << "\nSorted names: " << endl;
	printNames(names);

	return 0;
}