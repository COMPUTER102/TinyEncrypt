/*
* Filename: main.cpp
* Author: L.Y.
* Brief: SHA256�㷨����
*/

#include <iostream>
#include <string>

#include "sha256.hpp"

using namespace std;
/*using namespace std::cin;
using namespace std::endl;
using namespace std::string;*/

string str;

std::string char_cast_to_str(char text)
{
	//for (int i = 0, i <= t)
}

int main(int argc, char *argv[])
{
    cout << "Please enter the text to be encrypted: ";
    cin >> str;
	string message = str;                                    // �����ܵ���Ϣ
    ly::Sha256 sha256;                                           // ��ʼ��Sha256
	                                                             // ����                                                             
    string message_digest = sha256.getHexMessageDigest(message); // ����
    cout << message_digest << endl;                              // ������ܽ��
    //cout <<"Press ENTER to continue..."<<endl;
    getchar();
    
    //cout<<argv[0]<<endl;
    
	return 0;
}

