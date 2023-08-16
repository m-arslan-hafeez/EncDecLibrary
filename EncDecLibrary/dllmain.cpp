#include "pch.h"
#include "EncDecLibrary.h"
#include "fstream"
#include "iostream"

using namespace std;

#pragma unmanaged
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void encryptFile(const char* file_name, const char* address, int key, const char* output_file_path)
{
	string inputFileName(file_name);
	string outputFileName(output_file_path);
	char get_byte[16];

	ifstream file_in(inputFileName.c_str(), ios::binary);
	ofstream file_out(outputFileName.c_str(), ios::binary);

	if (!file_in.is_open() || !file_out.is_open()) {
		
		return;
	}

	while (!file_in.eof()) {
		file_in >> noskipws >> get_byte;
		int convert = get_byte[16] + key;
		file_out.put((char)convert);
	}

	file_in.close();
	file_out.close();
}

void decryptFile(const char* file_path, int key, const char* output_file_path, const char* file_extension)
{
	string inputFilePath(file_path);
	string outputFilePath(output_file_path);
	ifstream file_in;
	ofstream file_out;
	char get_byte[16];

	file_in.open(inputFilePath.c_str(), ios::binary);
	outputFilePath += file_extension;
	file_out.open(outputFilePath.c_str(), ios::binary);

	while (!file_in.eof()) {
		file_in >> noskipws >> get_byte;
		int convert = get_byte[16] - key;
		file_out << (char)convert;
	}

	file_in.close();
	file_out.close();
}

