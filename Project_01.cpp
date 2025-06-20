#include<bits/stdc++.h>
using namespace std;

enum Suits{ clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Cards{
    private:
    int number;
    Suits suit;

    public:
    Cards(){
        // no arguments
    }
    Cards(int n, Suits s): number(n), suit(s){
        // two arguments defined
    } 
    void display();
    bool isEqual(Cards);
};

void Cards::display(){
    if(number >= 2 && number <= 10){
        cout << number << " of ";
    }
    else{
        switch(number){
            case jack:
            cout << " jack of ";
            break;
            case queen:
            cout << " queen of ";
            break;
            case king:
            cout << " king of ";
            break;
            case ace:
            cout << " ace of ";
            break;

            default:
            cout << " NOTHING " << endl;
            break;
        }
    }
    switch (suit)
    {
    case clubs:
    cout << "clubs" << endl;;
    break;
    case diamonds:
    cout << "diamonds" << endl;;
    break;
    case hearts:
    cout << "hearts" << endl;
    break;
    case spades:
    cout << "spades" << endl;
    break;
    
    default:
    cout << " NOBODY CARES " << endl;
    break;
    }
}

bool Cards::isEqual(Cards c2){
    return( number==c2.number && suit==c2.suit) ? true : false;
}
int main(){
    Cards temp, chosen, prize;
    int position;

    Cards card1(7, clubs );
    cout << " Card 1 is the " << endl;
    card1.display();

    Cards card2(jack, hearts );
    cout << " Card 2 is the " << endl;
    card2.display();

    Cards card3( ace, spades );
    cout << " Card 3 is the " << endl;
    card3.display();

    prize = card3;

    cout << " I'm swapping card 1 and card 3 " << endl;
    temp = card3; card3 = card1; card1 = temp;

    cout << " I'm swapping card 2 and card 3 " << endl;
    temp = card3; card3 = card2; card2 = temp;

    cout << " I'm swapping card 1 and card 2 " << endl;
    temp = card2; card2 = card1; card1 = temp;

    cout << " Now, where (1,2 or 3) is the ";
    prize.display();
    cout << " ?";
    cin >> position;

    switch(position){
        case 1:
        chosen = card1;
        break;
        case 2:
        chosen = card2;
        break;
        case 3:
        chosen = card3;
        break;

        default:
        cout << " NAAAHHHH ";
        break;
    }
    if(chosen.isEqual(prize)){
        cout << " That's Right!! You win !! " << endl;
    }
    else{
        cout << " Sorry. You lose. " << endl;
    }
    cout << " You chose the ";
    chosen.display();
    cout << endl;
  return 0;
}
