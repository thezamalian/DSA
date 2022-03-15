#include <stdio.h>
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	multiset <string> s;
	multiset <string>::iterator it;

	s.insert("dipta");
	s.insert("nabil");
	s.insert("arnob");
	s.insert("sabbir");

	for(it = s.begin(); it  != s.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}
