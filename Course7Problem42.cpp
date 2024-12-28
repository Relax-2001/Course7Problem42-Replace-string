#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

string ReplaceStringUsingBuiltInFunction(string UserString , string StringToReplace , string ReplaceTo)
{

	short Pos = 0;

	Pos = UserString.find(StringToReplace);

	while (Pos != std::string::npos)
	{
		UserString.replace(Pos, StringToReplace.length() , ReplaceTo);
		Pos = UserString.find(StringToReplace);
	}

	return UserString;
}

int main()
{

	string UserString = "Hi, I'm Mahmoud from Syria , Syria is a nice country";;
	string StringToReplace = "Syria";
	string ReplaceWith = "USA";

	cout << "String before repacement:\n";
	cout << UserString << "\n";

	cout << "\n\nString after replacement:\n";
	cout << ReplaceStringUsingBuiltInFunction(UserString , StringToReplace , ReplaceWith) <<"\n";
	
	return 0;
}