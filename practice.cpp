#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	vector<int>::const_iterator iter;
	vector<int> scores;
	scores.push_back(10);
	scores.push_back(14);
	scores.push_back(19);
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout<<*iter<<endl;
	}
	int score;
	cout<<"gimme: ";
	cin>>score;
	iter = find(scores.begin(), scores.end(), score);
	cout<<*iter<<endl;
	cout<<scores.size()<<endl<<scores.capacity()<<endl;
	return 0;
}
