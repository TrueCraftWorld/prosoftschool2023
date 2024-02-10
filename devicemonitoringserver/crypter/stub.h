#ifndef STUBCRYPTER_H
#define STUBCRYPTER_H

#include <string>
#include "crypter/absractCrypter.h"

/*!
 * \brief �������� �����������������, �� ������ ������, ����� ��� ������ � amacriminal �������������� �������.
 */
class StubCrypter : public BaseEncoderExecutor
{
public:
    StubCrypter() = default;
    ~StubCrypter() = default;
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

#endif // STUBCRYPTER_H