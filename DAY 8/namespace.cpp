#include <iostream>
using namespace std;
namespace Virat
{
    void show()
    {
        cout << "Virat Kolhi is the best batsman in the world" << endl;
    }
    namespace Anushka
    {
        void show()
        {
            cout << "Anushka Sharma is the best actress in the world" << endl;
        }
    }
}
int main()
{
    Virat::show();
    Virat::Anushka::show();
    return 0;
}