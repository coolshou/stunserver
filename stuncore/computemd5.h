#ifndef COMPUTEMD5_H
#define COMPUTEMD5_H

#include <openssl/evp.h>

uint8_t* computeMD5(const unsigned char* key, size_t lenTotal, unsigned char* hash);

#endif //COMPUTEMD5_H
