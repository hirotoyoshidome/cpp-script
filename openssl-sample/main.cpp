#include <iostream>
#include <openssl/sha.h>
#include <string>
#include <vector>

// https://www.openssl.org/source/
// ./config
// make
// make install

int main()
{
    std::cout << "aa" << std::endl;

    std::string str("sample text.");
    
    // 32バイト
    unsigned char uchash[32];
    size_t hashSize = sizeof(uchash);

    // ハッシュ生成
    SHA256((const unsigned char*)str.data(), str.size(), uchash);

    // ベクトルに詰める
    std::vector<unsigned char> hash;
    hash.resize(hashSize);
    for (size_t i = 0; i < hashSize; i++) {
        hash.at(i) = uchash[i];
    }

    // 出力
    std::cout << "SHA256" << std::endl;
    for (size_t i = 0; i < hash.size(); i++) {
        std::cout << std::hex << (int)hash.at(i);
    }
    std::cout << std::endl;

    return 0;
}
