/*
* Filename: main.cpp
* Author: L.Y.
* Brief: SHA256算法测试
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
	string message = str;                                    // 待加密的信息
    ly::Sha256 sha256;                                           // 初始化Sha256
	                                                             // 对象                                                             
    string message_digest = sha256.getHexMessageDigest(message); // 加密
    cout << message_digest << endl;                              // 输出加密结果
    //cout <<"Press ENTER to continue..."<<endl;
    getchar();
    
    //cout<<argv[0]<<endl;
    
	return 0;
}

