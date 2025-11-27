#include <iostream>
#include <windows.h>
#include <sapi.h>      // 🔥 IMPORTANT
using namespace std;

int main() {
    // Initialize COM
    HRESULT hr = CoInitialize(NULL);
    if (FAILED(hr)) {
        cout << "COM initialization failed!" << endl;
        return -1;
    }

    // Create voice object
    ISpVoice* pVoice = NULL;
    hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL,
                          IID_ISpVoice, (void**)&pVoice);

    if (SUCCEEDED(hr)) {
        pVoice->Speak(L"Haa... bolo Pandey ji?", SPF_IS_XML, NULL);
        pVoice->Release();
        pVoice = NULL;
    } else {
        cout << "Failed to create voice instance!" << endl;
    }

    // Cleanup
    CoUninitialize();
    return 0;
}
