#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

void removeDuplicates(queue<int>& q) {
	unordered_set<int> elementos_vistos;
	queue<int> newq;

	while (!q.empty()) {
		int elemento_actual = q.front();
		q.pop();
		if (elementos_vistos.find(elemento_actual) == elementos_vistos.end()) {
			newq.push(elemento_actual);
			elementos_vistos.insert(elemento_actual);
		}
	}
    q = newq;
}

void printQueue(queue<int>& q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	queue<int> q({ 1,3,2,4,5,3,4,5,2,1,5,4,3,2,1,2,3,4,5,1,3,4,5,1,2,4,5 });
	cout << "Cola original: ";
	printQueue(q);
	q = queue<int>({ 1,3,2,4,5,3,4,5,2,1,5,4,3,2,1,2,3,4,5,1,3,4,5,1,2,4,5 });
	removeDuplicates(q);
	cout << "Cola sin elementos repetidos: "<<endl;
	printQueue(q);
}