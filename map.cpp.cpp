#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, i, pop;
    string state;
    map<string, int> population;
    cout << "\nEnter how many states do you want?";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the name of state:";
        cin >> state;
        cout << "\nEnter the population of state:";
        cin >> pop;
        population.insert(make_pair(state, pop));
    }
    cout << "\nEnter the state you want to search:";
    cin >> state;
    cout << "State"<< "\t" << "population";
    map<string,int>::iterator itr;
    for ( itr = population.begin(); itr != population.end(); itr++)
    {
        if (itr->first == state)
        {
            cout << "\n"<< itr->first << "\t" << itr->second << endl;
            break;
        }
    }
    return 0;
}
