#include <bits/stdc++.h> 
using namespace std; 

void Bal(string expr) 
{ 
	stack<char> s; 
	char x; 

	for (int i = 0; i < expr.length(); i++)
	{ 
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{ 
			s.push(expr[i]); 
			continue; 
		} 

		if (s.empty()) 
		{
			cout << "exp is not Balanced";
			break;
		}

		switch (expr[i])
		{ 
		case ')': 

			x = s.top(); 
			s.pop(); 
			if (x == '{' || x == '[') 
			cout << "exp is not Balanced";
			else
			cout << "exp is Balanced";
			break; 

		case '}': 


			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '[') 
			cout << "exp is not Balanced";
			else
			cout << "exp is Balanced";
			break; 

		case ']': 

		
			x = s.top(); 
			s.pop(); 
			if (x == '(' || x == '{') 
			cout << "exp is not Balanced";
			else
			cout << "exp is Balanced";
			break; 
		} 
	} 

} 

int main() 
{ 
	string express;
	cout << "expression enter karo\n"; 
	cin>>express;
	Bal(express); 
	return 0; 
}
