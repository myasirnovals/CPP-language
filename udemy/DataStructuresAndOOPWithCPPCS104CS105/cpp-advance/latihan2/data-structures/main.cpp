#include <iostream>

#include "cstdlib"
#include "ctime"

using namespace std;

enum CardSuits {
    Club, Diamond, Heart, Spade
};

enum CardElements {
    Ace, Two, Three, Four, Five, Six, Sevem, Eight, Nine, Ten, Jack, Queen, King
};

string GetSuitString(CardSuits suits) {
    string s;

    switch (suits) {
        case Club:
            s = "Club";
            break;
        case Diamond:
            s = "Diamond";
            break;
        case Heart:
            s = "Heart";
            break;
        case Spade:
            s = "Spade";
            break;
    }

    return s;
}

string GetElementStrings(CardElements elements) {
    string e;

    switch (elements) {
        case Ace:
            e = "Ace";
            break;
        case Two:
            e = "Two";
            break;
        case Three:
            e = "Three";
            break;
        case Four:
            e = "Four";
            break;
        case Five:
            e = "Five";
            break;
        case Six:
            e = "Six";
            break;
        case Sevem:
            e = "Sevem";
            break;
        case Eight:
            e = "Eight";
            break;
        case Nine:
            e = "Nine";
            break;
        case Ten:
            e = "Ten";
            break;
        case Jack:
            e = "Jack";
            break;
        case Queen:
            e = "Queen";
            break;
        case King:
            e = "King";
            break;
    }

    return e;
}

int GenerateRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int mySuit = GenerateRandomNumber(0, 3);
    int myElemen = GenerateRandomNumber(0, 12);

    CardSuits suit = static_cast<CardSuits>(mySuit);
    CardElements elements = static_cast<CardElements>(myElemen);

    cout << "Your card is : ";
    cout << GetElementStrings(elements);
    cout << " of " << GetSuitString(suit) << endl;

    return 0;
}
