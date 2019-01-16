#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int convertirStringToInt(string v){
    //proceso para convertir una cadena en entero

    int i;
    std::istringstream(v) >> i;
    return i;

}

int main()
{
    string s;
    int suma = 0;
    ifstream f( "data.txt" );
    if ( f.is_open() )
    {
        // getline( f, s );

        while( !f.eof() )
        {
            getline( f, s );
            if (suma == 2){
                suma = convertirStringToInt(s) + suma;
            }

            cout << s << endl;

        }
    }else{
        cerr << "Error de apertura del archivo." << endl;
    }
    cout << suma << endl;
    return 0;
}
