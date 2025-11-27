#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

int main() {
    PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_ASYNC);
    cout << " MR Max Kaya Haii..." << endl;
    return 0;
}
