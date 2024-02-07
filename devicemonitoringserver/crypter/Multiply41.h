#ifndef MULTI41CRYPTER_H
#define MULTI41CRYPTER_H

#include <string>
#include "crypter/absractCrypter.h"

/*!
 * \brief �������� �����������������, �� ������ ������, ����� ��� ������ � amacriminal �������������� �������.
 */
class Multiply41Crypter : public BaseEncoderExecutor
{
public:
    Multiply41() = default;
    ~Multiply41() = default;
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

#endif // MULTI41CRYPTER_H