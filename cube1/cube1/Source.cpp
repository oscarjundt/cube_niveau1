#include <iostream>

using namespace std;

int main() {
	//je declare les variable a et res
	int a;
	int res;
	//je demande a l'utilisateur d'initiaiser la variable a
	cin >> a;
	//je caclule le cube de la variable a
	res = a * a*a;
	//je l'affiche
	cout << "le cube de " << a << " est: " << res << endl;
}