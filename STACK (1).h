#define MAX_STACK_SIZE  7

class Node{
	public:
	int info;
	Node *next;
};

class STACK{
	private:
	Node *stack;
	Node *peek;
	int counter = 0;

	public:
	STACK();
	~STACK();
	void push(int data);
	int pop();
	int top();
	bool isEmpty();
	bool isFull();

};