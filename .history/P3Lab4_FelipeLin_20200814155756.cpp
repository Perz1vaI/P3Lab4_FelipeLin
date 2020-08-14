#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
class Jugador
{
    friend class Juego;

private:
    string nombre;
    int puntuacion;
    vector<char> *mano;

public:
    Jugador(string nombre, int puntuacion)
    {
        this->nombre = nombre;
        this->puntuacion = puntuacion;
    }
};

class Juego
{
public:
    static void Jugar(int cant_jugadores)
    {
        bool Game_Ready = false;
        vector<Jugador> jugadores;
        char *baraja[52] = {"A|<>", "2|<>", "3|<>", "4|<>", "5|<>", "6|<>", "7|<>", "8|<>", "9|<>", "10|<>", "J|<>", "Q|<>", "K|<>",
                            "A|<3", "2|<3", "3|<3", "4|<3", "5|<3", "6|<3", "7|<3", "8|<3", "9|<3", "10|<3", "J|<3", "Q|<3", "K|<3",
                            "A|O?", "2|O?", "3|O?", "4|O?", "5|O?", "6|O?", "7|O?", "8|O?", "9|O?", "10|O?", "J|O?", "Q|O?", "K|O?",
                            "A|-#", "2|-#", "3|-#", "4|-#", "5|-#", "6|-#", "7|-#", "8|-#", "9|-#", "10|-#", "J|-#", "Q|-#", "K|-#"};

        if (cant_jugadores >= 2)
        {
            for (int i = 0; i < cant_jugadores; i++)
            {
                if (i == 0)
                {
                    string nombre;
                    cout << "Ingrese su nombre: " << endl;
                    cin >> nombre;
                    Jugador new_player(nombre, 0);
                    jugadores.push_back(new_player);
                    Game_Ready = true;
                }
                else
                {
                    string bots;
                    bots = "boot-" + i;
                    Jugador new_player(bots, 0);
                    jugadores.push_back(new_player);
                }
            }
        }
        else
        {
            cout << "No puede jugar con menos de un jugador!" << endl;
        }
        int random_number;
        while (Game_Ready == true)
        {
            for (Jugador x : jugadores)
            {
                for (int i = 0; i < 3; i++)
                {
                    random_number = rand() % 52;
                    if (baraja[random_number] == "NA")
                    {

                        x.mano->push_back(baraja[random_number + 1]);
                    }
                    else
                    {
                        x.mano->push_back(baraja[random_number]);
                        baraja[random_number] = "NA";
                    }
                }
            }
        }
    }
};
int main()
{
    int cant_jugadores;
    cout << "Ingrese la cantidad de jugadores: ";
    cin >> cant_jugadores;
    Juego::Jugar(cant_jugadores);
}