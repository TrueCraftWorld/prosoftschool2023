#ifndef ROT3CRYPTER_H
#define ROT3CRYPTER_H

#include <string>
#include "crypter/absractCrypter.h"

/*!
 * \brief �������� �����������������, �� ������ ������, ����� ��� ������ � amacriminal �������������� �������.
 */
class ROT3Crypter : public BaseEncoderExecutor
{
public:
    ROT3Crypter() = default;
    ~ROT3Crypter() = default;
    /*!
     * \brief ����� ��� �� ��������.
     * \param input -  ������
     */
    std::string encode(const std::string& input) const final;
    /*!
     * \brief ����� ��� �� ����������.
     * \param input -  ������
     */
    std::string decode(const std::string& input) const final;
    /*!
     * \brief ��������� �����.
     */
    std::string name() const final;
};

#endif // ROT3CRYPTER_H