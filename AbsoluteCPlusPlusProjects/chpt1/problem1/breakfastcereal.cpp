#include <iostream>
#include <cmath>
using namespace std;

/*
 * A metric ton is 35, 273.92 ounces. This program will read the weight of a package
 * of breakfast cereal in ounces and output the weight in metric tons as well as the
 * number of boxes needed to yield one metric ton of cereal
 */

int main()
{
    float weight, tons;
    int numofboxes;
    cout << "Please input the weight of a package of breakfast cereal in ounces: " << endl;
    cin >> weight;

    // convert to tons
    tons = weight/35273.92;

    // number of boxes needed to yield at least one metric ton
    numofboxes = ceil(1.0/tons);

    cout << "The weight of a package of breakfast cereal in tons is: " << tons << endl;

    cout << "The number of boxes needed to yield at least one metric ton is: " << numofboxes << endl;

    return 0;
}
