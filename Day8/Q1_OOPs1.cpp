//Inheritence //
//Public Use//

#include <iostream>
using namespace std;

//base class //
class Me
{
    
    public:
    void readbooks()
    {
        cout<<"I'm a bookholic"<<endl;
    }
    void code()
    {
        cout<<"Code Sleep Repeat"<<endl;
    }
    
};
    //derived class //
    class Smile: public Me
    {
        public:
        void eat()
        {
            cout<<"Healthy foods only!!";
        }
    };
    

int main() {
	
	//creating an object of derived class //
	Smile priya;
	priya.readbooks();
	priya.code();
	
	priya.eat();
	return 0;
}
