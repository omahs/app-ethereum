#ifdef HAVE_EIP712_FULL_SUPPORT

#include "hash_bytes.h"

/**
 * Continue given progressive hash on given bytes
 *
 * @param[in] bytes_ptr pointer to bytes
 * @param[in] n number of bytes to hash
 * @param[in] hash_ctx pointer to the hashing context
 */
void hash_nbytes(const uint8_t *const bytes_ptr, uint8_t n, cx_hash_t *const hash_ctx) {
    cx_hash(hash_ctx, 0, bytes_ptr, n, NULL, 0);
}

/**
 * Continue given progressive hash on given byte
 *
 * @param[in] byte byte to hash
 * @param[in] hash_ctx pointer to the hashing context
 */
void hash_byte(uint8_t byte, cx_hash_t *const hash_ctx) {
    hash_nbytes(&byte, 1, hash_ctx);
}

#endif  // HAVE_EIP712_FULL_SUPPORT
