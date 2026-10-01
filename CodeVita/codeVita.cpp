#include <bits/stdc++.h>
using namespace std;

struct Command {
    int existing;
    int newCube;
    string direction;
};

int main() {
    int N;
    cin >> N;

    vector<Command> commands(N);

    for (int i = 0; i < N; i++) {
        cin >> commands[i].existing
            >> commands[i].newCube
            >> commands[i].direction;
    }

    int target;
    cin >> target;

    sort(commands.begin(), commands.end(), [](Command a, Command b) {
        if (a.existing != b.existing)
            return a.existing < b.existing;

        return a.newCube < b.newCube;
    });

    map<int, pair<int, int>> pos;
    map<pair<int, int>, int> occupied;

    pos[1] = {0, 0};
    occupied[{0, 0}] = 1;

    for (auto cmd : commands) {
        if (pos.find(cmd.existing) == pos.end())
            continue;

        int x = pos[cmd.existing].first;
        int y = pos[cmd.existing].second;

        int nx = x;
        int ny = y;

        if (cmd.direction == "top")
            ny++;
        else if (cmd.direction == "down")
            ny--;
        else if (cmd.direction == "left")
            nx--;
        else if (cmd.direction == "right")
            nx++;

        if (occupied.count({nx, ny})) {
            int oldCube = occupied[{nx, ny}];
            pos.erase(oldCube);
        }

        pos[cmd.newCube] = {nx, ny};
        occupied[{nx, ny}] = cmd.newCube;
    }

    if (pos.find(target) == pos.end()) {
        cout << "-1 -1 -1 -1";
        return 0;
    }

    int x = pos[target].first;
    int y = pos[target].second;

    vector<pair<int, int>> directions = {
        {x, y + 1},
        {x, y - 1},
        {x - 1, y},
        {x + 1, y}
    };

    for (auto p : directions) {
        if (occupied.count(p))
            cout << occupied[p] << " ";
        else
            cout << "-1 ";
    }

    return 0;
}