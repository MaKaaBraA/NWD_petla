#include <iostream>

using namespace std;

int wyswietl(int n) {
    if (n == 0) {
        return 0;
    } else {
        cout << n;
        cout << "\n";
        n--;
        return wyswietl(n);
    }
}
// ? nie dziala
// |
// |
// |
// \/
/*string Znak(){
    string znak;
    cout << "Wprowadz znak : \n";
    cin >> znak;
    if (znak == "*"){
        return "*";
    }
    else{

        cout << "*";
        return Znak();
    }
} */

string choinka(int n, int licznik = 1){
    if(n == 0){
        return "";
    }
    else{
        for(int i = 0; i < n; i++){
            cout << " ";
            for(int j = 0; j<n; j++){

            }
        }
    }
}






































int NWD(int a, int b){
    if(b == 0)
        return a;
    else
        return NWD(b, a % b);
}






int main() {
    int a;
    int b;

    cout << "Podaj dwie wartosci";
    cin >> a >> b;

    cout << "NWD(" << a << "," << b << ") = " << NWD(a, b);

    system("pause");
    NWD(a, b);
    return 0;
}


