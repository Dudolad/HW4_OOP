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

//int main()
//{
//	char C = 0;
//		string S, S0;
//	    cout << "Enter a character: ";
//	 	cin >> C;
//	 	cout << "Enter a string: ";
//		cin.ignore();
//	    getline(cin, S);
//	    cout << "Enter a substring: ";
//	    cin >> S0;
//	 	for (int i = 0; i < S.length(); i++)
//	 	{
//	 		if (S[i] == C) {
//	 			S.insert(i+1, S0);
//	 			i += S0.length();
//	 		}
//	 	}
//	 	cout << "Result: " << S << endl;
//	 
//	 	return 0;
//}

//int main()
//{
//	string S, S0;
//		cout << "Enter a string: ";
//		getline(cin, S);
//		cout << "Enter a substring: ";
//		cin >> S0;
//
//		int count = 0;	
//		int pos = S.find(S0);
//	
//		
//		while (pos != -1) {
//			count++;
//			pos = S.find(S0, pos + S0.length());
//		}
//		cout << "Count: " << count << endl;
//		return 0;
//}

//int main()
//{
//		string S, S0;
//
//		cout << "Enter a string: ";
//		getline(cin, S);
//
//		cout << "Enter a substring: ";
//		cin >> S0;
//
//		int pos = S.find(S0);
//
//		if (pos != -1)
//		{
//			S.erase(pos, S0.length());
//		}
//
//		cout << "Result: " << S << endl;
//		return 0;	
//}

//int main()
//{
//	string S, S0;
//	cout << "Enter a string: ";
//	getline(cin, S);
//	
//	cout << "Enter a substring: ";
//	cin >> S0;
//	
//	int pos = S.find(S0);
//	
//	while (pos != -1)
//	{
//		S.erase(pos, S0.length());
//		pos = S.find(S0);
//	}
//	
//	cout << "Result: " << S << endl;
//	return 0;
//}

//int main()
//{
//    string S, S1, S2;
//
//    cout << "Enter string S: ";
//    getline(cin, S);
//
//    cout << "Enter string S1: ";
//    cin >> S1;
//
//    cout << "Enter string S2: ";
//    cin >> S2;
//
//    int pos = S.find(S1); 
//    if (pos != -1) {
//        S.replace(pos, S1.length(), S2);
//    }
//
//    cout << "Result: " << S << endl;
//    return 0;
//}

//int main()
//{
//	string S, S1, S2;
//	
//	cout << "Enter string S: ";
//	getline(cin, S);
//	
//	cout << "Enter string S1: ";
//	cin >> S1;
//	
//	cout << "Enter string S2: ";
//	cin >> S2;
//	
//	int pos = S.find(S1); 
//	while (pos != -1) {
//		S.replace(pos, S1.length(), S2);
//		pos = S.find(S1);
//	}
//	
//	cout << "Result: " << S << endl;
//
//	return 0;
//}

int main()
{
	string S;

	cout << "Enter a string: ";
	getline(cin, S);

	string result;

	for (int i = 0; i < S.length(); i+= 2)
	{
		result = +S[i];
	}

	for (int i = S.length() - 1; i >= 0; i--)
	{
		if (i % 2 == 1) {
			result += S[i];
		}
	}
	cout << "Result: " << result << endl;
	return 0;
}