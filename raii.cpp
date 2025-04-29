#include <iostream>
using namespace std;

class IntWrapper {
	private:
		int* ptr;
	public:
		IntWrapper(int value) {
			ptr = new int(value);
			cout << "메모리 할당됨" << endl;
		}
		~IntWrapper() {
			delete ptr;
			cout << "메모리 해제됨" << endl;
		}
		void print() {
			cout << "값: " << *ptr << endl;
		}
};
int main(){
	{
		IntWrapper num(42);
		num.print();
	}
	
	cout << "프로그램 끝" << endl;
	return 0;
}
