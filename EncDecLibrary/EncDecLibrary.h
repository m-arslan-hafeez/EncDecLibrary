#pragma once
using namespace std;
#include <string>

#ifdef ENCDECLIBRARY_EXPORTS 
#define ENCDECLIBRARY_API __declspec(dllexport)
#else
#define ENCDECLIBRARY_API __declspec(dllimport)
#endif

extern "C" ENCDECLIBRARY_API void encryptFile(const char* file_name, const char* address, int key, const char* output_file_path);
extern "C" ENCDECLIBRARY_API void decryptFile(const char* file_path, int key, const char* output_file_path, const char* file_extension);


