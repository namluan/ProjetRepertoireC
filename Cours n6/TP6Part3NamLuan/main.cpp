#include <iostream>
#include <iomanip>
#include "Ex13/FilleB.h"
#include "Ex13/MereA.h"

// EXO 12
class Time {
    private:
        int heures, minutes, secondes;

    public:

        Time() : heures(0), minutes(0), secondes(0) {}

        Time(int h, int m, int s) : heures(h), minutes(m), secondes(s) {
            normalize();
        }

        void display() const {
            std::cout << std::setw(2) << std::setfill('0') << heures << ":"
                      << std::setw(2) << std::setfill('0') << minutes << ":"
                      << std::setw(2) << std::setfill('0') << secondes << std::endl;
        }

        int getHours() const { return heures; }
        int getMin() const { return minutes; }
        int getSec() const { return secondes; }


        void addTime(const Time& t1, const Time& t2) {
            heures = t1.heures + t2.heures;
            minutes = t1.minutes + t2.minutes;
            secondes = t1.secondes + t2.secondes;
            normalize();
        }

    private:
        void normalize() {
            if (secondes >= 60) {
                minutes += secondes / 60;
                secondes %= 60;
            }
            if (minutes >= 60) {
                heures += minutes / 60;
                minutes %= 60;
            }
        }
};

// EXO 14
class Forme {
    public:
        virtual ~Forme() {}
        virtual double aire() const = 0;
    };

    class Triangle : public Forme {
    private:
        double base;
        double hauteur;

    public:
        Triangle(double b, double h) : base(b), hauteur(h) {}

        double aire() const override {
            return 0.5 * base * hauteur;
        }
};

class Cercle : public Forme {
    private:
        double rayon;

    public:
        Cercle(double r) : rayon(r) {}

        double aire() const override {
            return 3,14159 * rayon * rayon;
        }
};

class Rectangle : public Forme {
    private:
        double longueur;
        double largeur;

    public:
        Rectangle(double l, double L) : longueur(l), largeur(L) {}

        double aire() const override {
            return longueur * largeur;
        }
};

class Carre : public Forme {
    private:
        double cote;

    public:
        // Constructeur
        Carre(double c) : cote(c) {}

        // Redéfinition de la fonction aire
        double aire() const override {
            return cote * cote;
        }
};

int main() {

    //EXO 12

    Time t1;
    Time t2(2, 45, 50);
    Time t3(1, 20, 30);

    std::cout << "t1: ";
    t1.display();
    std::cout << "t2: ";
    t2.display();
    std::cout << "t3: ";
    t3.display();

    Time t4;
    t4.addTime(t2, t3);
    std::cout << "t4 (t2 + t3): ";
    t4.display();

    std::cout << "t4 -> Heures: " << t4.getHours() << ", Minutes: " << t4.getMin()
              << ", Secondes: " << t4.getSec() << std::endl;

    // EXO 13
    MereA mereA;
    FilleB filleB;

    filleB.display();
    mereA.display();

    // EXO 14
    Forme* formes[4];

    formes[0] = new Cercle(5.0);
    formes[1] = new Rectangle(4.0, 6.0);
    formes[2] = new Triangle(4.0, 5.0);
    formes[3] = new Carre(3.0);

    for (int i = 0; i < 4; i++) {
        std::cout << "L'aire de la forme " << i + 1 << " est : " << formes[i]->aire() << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        delete formes[i];
    }

    return 0;
}
