#include <iostream>
#include <cstring>

using namespace std;

class Cow
{
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow &operator = (const Cow &c);
    void Showcow() const;
};

Cow::Cow()
{
    strcpy(name, "null");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    if (strlen(nm)> 20)
    {
        cout << "Overflow, initialized to null.";
        strcpy(name, "null");
        hobby = new char[1];
        hobby[0] = '\0';
        weight = 0.0;
    }
    else
    {
        strcpy(name, nm);
        hobby = new char[strlen(ho) + 1];
        strcpy(hobby, ho);
        weight = wt;
    }
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    cout << name << " destroyed.\n";
    delete [] hobby;
}

Cow &Cow::operator = (const Cow &c)
{
    strcpy(name, c.name);
    delete [] hobby;
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

void Cow::Showcow() const
{
    cout << "Name: " << name << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Weight: " << weight << endl;
}

int main()
{
    {
        cout << "It's a default cow\n";
        Cow cow1;
        cow1.Showcow();

        cout << "It's the second cow\n";
        Cow cow2("Bobo Co", "eating grass", 4.6);
        cow2.Showcow();

        cout << "It's the third cow\n";
        Cow cow3("Tom", "sleep", 8.5);
        cow3.Showcow();

        cout << "Now, the first one imitates the third one\n";
        cow1 = cow3;
        cow1.Showcow();

        cout << "A new cow wants to be the second one\n";
        Cow cow4(cow2);
        cow4.Showcow();

        cout << "Ok, I get 4 cows now.";

        return 0;
    }
}
