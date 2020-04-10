#include "LL.h"

using namespace std;

int addLL(LL L1, LL L2);

///////////////////////////////////////////////////////////////////////////////////////////

int main() {
	LL L1, L2;

	int size, total;


	cout << "Number Length : ";
	cin >> size;

	cout << "Enter " << size << " numbers for Linked List #1- \n";
	for (int i = 0; i < size; i++) {
		int temp;
		cout << "Data : ";
		cin >> temp;
		L1.insertNode(temp);
	}

	cout << "Enter " << size << " numbers for Linked List #2- \n";
	for (int i = 0; i < size; i++) {
		int temp;
		cout << "Data : ";
		cin >> temp;
		L2.insertNode(temp);
	}

	total = addLL(L1, L2);

	cout << "Total = " << total << endl;

	system("pause");
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////

int addLL(LL L1, LL L2) {
	int total = 0, index = 0;

	int a, b, c = 0;

	Node* temp1 = L1.head;
	Node* temp2 = L2.head;

	//Loop through each node
	while (temp1 != NULL) {
		a = temp1->data;
		b = temp2->data;

		

		//>9
		if (a + b + c > 9) {
			total += (pow(10, index)) * ((a + b + c) - 10);
			c = 1;
		}
		//<=9
		else
		{
			total += pow(10, index)* (a + b + c);
			c = 0;
		}

		index++;

		temp1 = temp1->nextNode;
		temp2 = temp2->nextNode;
	}

	if (c != 0) {
		total += pow(10, index);
	}

	return total;
}