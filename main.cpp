extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
}
#include <iostream>

using namespace std;

int main() {
    cout << "result" << endl;
    cout << avcodec_configuration() << endl;
    return 0;
}
