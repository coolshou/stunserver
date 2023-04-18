
#include "computemd5.h"

// Function to compute the MD5 hash of a key
uint8_t* computeMD5(const unsigned char* key, size_t lenTotal, unsigned char* hash) {
    // Allocate a buffer to store the MD5 hash
    unsigned int hash_len;
    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(md_ctx, EVP_md5(), nullptr);

    // Update the context with the key data
    EVP_DigestUpdate(md_ctx, key, lenTotal);

    // Finalize the hash and store it in the hash buffer
    EVP_DigestFinal_ex(md_ctx, hash, &hash_len);

    // Clean up the MD5 context
    EVP_MD_CTX_free(md_ctx);
    return hash;
}
