#include <iostream>
#include <cassert>

using namespace std;

class Polo
{
public:
    string polo()
    {
        return "Polo!";
    }
};

class Marco
{

private:
    Polo PoloObjectItem;

public:
    Marco(Polo polo) : PoloObjectItem(polo) {}

    string marco()
    {
        return "Marco! " + PoloObjectItem.polo();
    }
};

int main()
{
    Polo p;
    Marco m = Marco(p);

    assert(m.marco() == "Marco! Polo!");
    cout << m.marco() << endl;

    return 0;
}