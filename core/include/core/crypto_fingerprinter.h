/*
 * dedupv1 - iSCSI based Deduplication System for Linux
 *
 * (C) 2008 Dirk Meister
 * (C) 2009 - 2011, Dirk Meister, Paderborn Center for Parallel Computing
 * (C) 2012 Dirk Meister, Johannes Gutenberg University Mainz
 *
 * This file is part of dedupv1.
 *
 * dedupv1 is free software: you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * dedupv1 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with dedupv1. If not, see http://www.gnu.org/licenses/.
 */

#ifndef CRYPTO_FINGERPRINTER_H__
#define CRYPTO_FINGERPRINTER_H__

#include <core/dedup.h>
#include <core/fingerprinter.h>
#include <base/profile.h>

namespace dedupv1 {

/**
* Fingerprints the chunk data using the cryptopp library.
*
* The library contains very fast, tested implementations of several
* fingerprinting function.
*/
class CryptoFingerprinter : public Fingerprinter {
    private:
    dedupv1::base::Profile profile_;

    /**
    * Instance of a hash transformation.
    * We use void* instead of HashTransformation* to avoid exporting CryptoPP classes.
    */
    void* hash_;

    /**
    * Creates a new fingerprinter using SHA-1
    * @return
    */
    static Fingerprinter* CreateSHA1Fingerprinter();

    /**
    * Creates a new fingerprinter using SHA-256
    * @return
    */
    static Fingerprinter* CreateSHA256Fingerprinter();

    /**
    * Creates a new fingerprinter using SHA-512
    * @return
    */
    static Fingerprinter* CreateSHA512Fingerprinter();

    /**
    * Creates a new fingerprint using MD5.
    * Note that an md5 hash is usually considers to be
    * far to weak of the usage in a deduplication system.
    * @return
    */
    static Fingerprinter* CreateMD5Fingerprinter();

    /**
    * Constructs a new hash
    * @param hash pointer to a cryptopp hash transformation.
    * We use void* to avoid exporting anything related to cryptopp.
    * @return
    */
    explicit CryptoFingerprinter(void* hash);
    public:
    /**
     * Registers the fingerprinter implementations at the fingerprinter factory.
     */
    static void RegisterFingerprinter();

    /**
    * Destructor
    * @return
    */
    virtual ~CryptoFingerprinter();

    /**
    * Calculated the fingerprint of the data
     * @return true iff ok, otherwise an error has occurred
    */
    virtual bool Fingerprint(const byte* data, size_t size, byte* fp, size_t* fp_size);

    /**
    * Returns the fingerprint size of fingerprints
    * generated by this fingerprinter
    * @return
    */
    virtual size_t GetFingerprintSize();

    /**
    * Prints profile information about the fingerprinter
    * @return
    */
    virtual std::string PrintProfile();
};

}

#endif  // CRYPTO_FINGERPRINTER_H__