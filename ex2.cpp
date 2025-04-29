#include <iostream>
using namespace std;

class Dog{
	private:
		string name;
	public:
		Dog(string dogName) {
		name = dogName;
		}
		void bark(){
			cout << "멍멍"<<endl;
			cout << "나는 "<<name<<"야!"<<endl;
		}
	
};
int main()
{
	
	Dog dog1("chiwawa");
	dog1.bark();
	return 0;
}
