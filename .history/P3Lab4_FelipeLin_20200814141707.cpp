#include <iostream>
#include <vector>
using namespace std;
class Jugador
{
    friend class Juego;

private:
    string nombre;
    int puntuacion;
    vector<char> mano;

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
    void Jugar(int cant_jugadores)
    {
        vector<Jugador> jugadores;
        char baraja[52] = {"A|<>", "2|<>", "3|<>", "4|<>", "5|<>", "6|<>", "7|<>", "8|<>", "9|<>", "10|<>", "J|<>", "Q|<>", "K|<>",
                           "A|<3", "2|<3", "3|<3", "4|<3", "5|<3", "6|<3", "7|<3", "8|<3", "9|<3", "10|<3", "J|<3", "Q|<3", "K|<3",
                           "A|O?", "2|O?", "3|O?", "4|O?", "5|O?", "6|O?", "7|O?", "8|O?", "9|O?", "10|O?", "J|O?", "Q|O?", "K|O?",
                           "A|-#", "2|-#", "3|-#", "4|-#", "5|-#", "6|-#", "7|-#", "8|-#", "9|-#", "10|-#", "J|-#", "Q|-#", "K|-#"};

        if (cant_jugadores >= 2)
        {
            for (int i = 0; i < cant_jugadores; i++)
            {
                string nombre;
                cout << "Ingrese su nombre: " << endl;
                Jugador new_player();
                jugadores.push_back()
            }
        }
    }
};
int main()
{
}