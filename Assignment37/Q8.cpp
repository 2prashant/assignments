//8. Write a program to find common elements between two vectors.
/*
#include<iostream>
#include<tuple>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int value1,value2,size1,size2;
    cout<<"Enter first vector of size=";
    cin>>size1;
    vector<int> x;
    vector<int> y;
    for(int i=0; i<size1;i++)
    {
        cin>>value1;
        x.push_back(value1);
    }
    cout<<endl;
    cout<<"Enter second vector of size=";
    cin>>size2;
    for(int i=0;i<size2;i++ )
    {
        cin>>value2;
        y.push_back(value2);
    }
    cout<<endl;
    cout<<"common element"<<endl;
    for(int i=0; i<x.size();i++)
    {
        for(int j=0; j<y.size();j++)
        {
            if(x[i]==y[j])
            {
                cout<<x[i]<<" ";
                break;
            }
        }
    }
    return 0;
}
*/

// C++ program to find common elements
// between two Vectors using STL

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Get the vector
	vector<int> vector1 = { 1, 45, 54, 71, 76, 12,78 };
	vector<int> vector2 = { 1, 7, 5, 4, 6, 12 };

	// Sort the vector
	sort(vector1.begin(), vector1.end());
	sort(vector2.begin(), vector2.end());

	// Print the vector
	cout << "First Vector: ";
	for (int i = 0; i < vector1.size(); i++)
		cout << vector1[i] << " ";
	cout << endl;

	cout << "Second Vector: ";
	for (int i = 0; i < vector2.size(); i++)
		cout << vector2[i] << " ";
	cout << endl;

	// Initialise a vector
	// to store the common values
	// and an iterator
	// to traverse this vector
	vector<int> v(vector1.size() + vector2.size());
    cout<<v.size()<<endl;
	vector<int>::iterator it, st;

	it = set_intersection(vector1.begin(),
						vector1.end(),
						vector2.begin(),
						vector2.end(),
						v.begin());

	cout << "\nCommon elements:\n";
	for (st = v.begin(); st != it; ++st)
		cout << *st << ", ";
	cout << '\n';

	return 0;
}
