#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct Match {
    int left;
    int right;
};

int main() {

    int n;
    cout << "Number of teams : ";
    cin >> n;

    vector<string> teams(n);

    cout << "\nEnter team names\n";

    for(int i=0;i<n;i++){
        cout << "Team " << i+1 << " : ";
        cin >> teams[i];
    }

    // Find next power of two
    int power = 1;
    while(power < n) power *= 2;

    int byes = power - n;

    queue<int> currentRound;

    // First teams receive byes
    for(int i=0;i<byes;i++)
        currentRound.push(i);

    // Remaining teams must play
    for(int i=byes;i<n;i++)
        currentRound.push(i);

    cout << "\nTournament Begins!\n\n";

    while(currentRound.size() > 1)
    {
        queue<int> nextRound;

        while(currentRound.size() >= 2)
        {
            int a = currentRound.front();
            currentRound.pop();

            int b = currentRound.front();
            currentRound.pop();

            cout << "=========================\n";
            cout << "Next Match\n";
            cout << teams[a] << "  VS  " << teams[b] << endl;

            cout << "Winner (1 or 2): ";

            int choice;
            cin >> choice;

            if(choice==1)
                nextRound.push(a);
            else
                nextRound.push(b);
        }

        // Odd team automatically advances
        if(!currentRound.empty())
        {
            nextRound.push(currentRound.front());
            currentRound.pop();
        }

        currentRound = nextRound;
    }

    cout << "\n=========================\n";
    cout << "Champion : " << teams[currentRound.front()] << endl;

    return 0;
}