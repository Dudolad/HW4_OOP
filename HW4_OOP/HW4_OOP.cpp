#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//int main()
//{
// 	char C = 0;
//	string S, S0;
//    cout << "Enter a character: ";
// 	cin >> C;
// 	cout << "Enter a string: ";
//	cin.ignore();
//    getline(cin, S);
//    cout << "Enter a substring: ";
//    cin >> S0;
// 	for (int i = 0; i < S.length(); i++)
// 	{
// 		if (S[i] == C) {
// 			S.insert(i, S0);
// 			i += S0.length();
// 		}
// 	}
// 	cout << "Result: " << S << endl;
// 
// 	return 0;
//}   

int main()
{
	char C = 0;
		string S, S0;
	    cout << "Enter a character: ";
	 	cin >> C;
	 	cout << "Enter a string: ";
		cin.ignore();
	    getline(cin, S);
	    cout << "Enter a substring: ";
	    cin >> S0;
	 	for (int i = 0; i < S.length(); i++)
	 	{
	 		if (S[i] == C) {
	 			S.insert(i+1, S0);
	 			i += S0.length();
	 		}
	 	}
	 	cout << "Result: " << S << endl;
	 
	 	return 0;
}