//#include "EncDecLibrary.h"
#include "pch.h"
//#include "fstream"
//#include "iostream"
//
//using namespace std;
//
// void encryptFile(string file_name, int key)
//{
//	ifstream file_in;
//	ofstream file_out;
//	char get_byte;
//
//	file_in.open(file_name.c_str(), ios::binary);
//	file_name = "encrypted.enc";
//
//	file_out.open(file_name.c_str(), ios::binary);
//
//	while (!file_in.eof()) {
//		file_in >> noskipws >> get_byte;
//		int convert = get_byte + key;
//		file_out << (char)convert;
//	}
//
//	file_in.close();
//	file_out.close();
//}
//
// void decryptFile(string file_name, int key, string file_type)
//{
//	ifstream file_in;
//	ofstream file_out;
//	char get_byte;
//
//	file_in.open(file_name.c_str(), ios::binary);
//	file_name = "decrypted" + file_type;
//
//	file_out.open(file_name.c_str(), ios::binary);
//
//	while (!file_in.eof()) {
//		file_in >> noskipws >> get_byte;
//		int convert = get_byte - key;
//		file_out << (char)convert;
//	}
//
//	file_in.close();
//	file_out.close();
//}
