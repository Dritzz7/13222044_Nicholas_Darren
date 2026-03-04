#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

    // 1. Inisialisasi Struktur Data
    vector<double> sensor;

    // 2. Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // 3. Proses Kalibrasi (Batch Processing)
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;  // kenaikan 10%
    }

    // 4. Penyimpanan ke File Eksternal
    ofstream outputFile("hasil_kalibrasi.txt");

    if (!outputFile.is_open()) {
        cout << "File gagal dibuka." << endl;
        return 1;
    }

    // 5. Menulis Hasil ke File
    for (int i = 0; i < sensor.size(); i++) {
        outputFile << sensor[i] << endl;
    }

    // Tutup file
    outputFile.close();

    cout << "Hasil kalibrasi berhasil disimpan ke file hasil_kalibrasi.txt" << endl;

    return 0;
}