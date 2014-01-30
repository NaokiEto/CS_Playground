#include <iostream>
#include <cmath>
using namespace std;

/*
 * A goverment research lab has concluded that an artificial sweetener commonly used in
 * diet soda will cause death in laboratory mice. You are desperate to lose weight but
 * cannot give up soda. You want to know how much diet soda it is possible to drink
 * without dying as a result. The input to the program is the amount of artificial
 * sweetener needed to kill a mouse (as a decimal in relation to 100 gram, so 80 grams
 * would be 0.8), the weight of the mouse, and the weight of the dieter's targeted weight.
 */

int main()
{
    const double percentdietsoda = 0.001;

    double mouse, human, artificialsweetener;

    int numofdietsoda;

    cout << "Please enter the amount of artificial sweetener needed to kill a mouse as a decimal \
in relation to 100 grams: " << endl;

    cin >> artificialsweetener;

    cout << "Please enter the weight of the mouse (in pounds): " << endl;

    cin >> mouse;

    cout << "Please enter your targeted diet weight (in pounds): " << endl;

    cin >> human;

    numofdietsoda = floor(human/mouse * artificialsweetener/percentdietsoda);

    cout << "The number of diet sodas that is safe to drink is: " << numofdietsoda << endl;

    return 0;
}
