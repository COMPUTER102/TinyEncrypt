

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

#include ".\hash_encrypt\sha256\sha256.hpp"

using namespace std;
/*using namespace std::cin;
using namespace std::endl;
using namespace std::string;*/

string str;

std::string char_cast_to_str(char text) {
	//for (int i = 0, i <= t)
}

int main(int argc, char *argv[]) {
	try {
		cout << "Please enter the text to be encrypted: ";
		cin >> str;
		string message = str;                                    // �����ܵ���Ϣ
		sha::sha256::Sha256 sha256;                                           // ��ʼ��Sha256
		// ����
		string message_digest = sha256.getHexMessageDigest(message); // ����
		cout << message_digest << endl;                              // ������ܽ��
		cout <<"Press ENTER to continue..."<<endl;
		getchar();

		//throw runtime_error("test error");
		//cout<<argv[0]<<endl;
	} catch ( const Exception ) {
		cerr << "[ERROR] Oh no! An error has occurred." << endl;
	}

	return 0;
}

