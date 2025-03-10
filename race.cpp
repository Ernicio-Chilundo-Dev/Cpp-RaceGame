#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

const int DISTANCIA_FINAL = 50;

int main()
{
    srand(time(0));
    char jogarnovamete;
    do
    {
        int carro1 = 0, carro2 = 0;
        cout << "===============Simulador de Corrida===================" << endl;
        cout << "Carro VS Carro2, o carro que chegar aos " << DISTANCIA_FINAL << " metros vence!";

        while (carro1 <= DISTANCIA_FINAL && carro2 <= DISTANCIA_FINAL)
        {
            carro1 += rand() % 5 + 1;
            carro2 = rand() % 5 + 1;

            cout << "Carro1: ";
            for (int i = 0; i < carro1; i++)
                cout << "-";
            cout << u8"🚒" << endl;

            cout << "Carro2: ";
            for (int i = 0; i < carro2; i++)
                cout << "-";
            cout << u8"🚌" << endl;

            cout << "=================================================================";
        }

        this_thread::sleep_for(chrono::milliseconds(500));

        if

    } while (condition);
}