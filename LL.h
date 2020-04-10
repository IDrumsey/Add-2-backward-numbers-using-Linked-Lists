#pragma once
#include <iostream>

struct Node {
	int data;
	Node* nextNode;

	Node(int d) : data(d), nextNode(NULL) {};
};


class LL
{
public:
	Node* head = NULL;

	void insertNode(int x) {
		Node* newNode = new Node(x);

		if (head == NULL) {
			head = newNode;
		}
		else {
			Node* temp = head;
			while (temp->nextNode != NULL) {
				temp = temp->nextNode;
			}

			
			temp->nextNode = newNode;
		}

	}

	void printLL() {
		if (head == NULL) {
			std::cout << "Empty List!\n";
		}
		else {
			Node* temp = head;
			while (temp != NULL) {
				std::cout << temp->data << " ";
				temp = temp->nextNode;
			}
			std::cout << std::endl;
		}
		
	}
};

