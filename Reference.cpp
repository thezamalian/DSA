#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void stradd(char *s1, char *s2);
void stradd(char *s1, int i);

int main()
{
	char str[80];
	char s2[88];
	strcpy(s2, "there");
	
	strcpy(str, "Hello ");
	stradd(str, s2);
	
	cout << str << "\n";
	
	stradd(str, 100);
	cout << str << "\n";
	
	return 0;
}

//concatenate two strings 
void stradd(char *s1, char *s2)
{
	strcat(s1, s2);
}

//concatenate a string with a "stringized" integer
void stradd(char *s1, int i)
{
	char temp[80];
	
	sprintf(temp, "%d", i);
	
	strcat(s1, temp);
}
