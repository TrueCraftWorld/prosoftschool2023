#ifndef STUBCRYPTER_H
#define STUBCRYPTER_H

#include <string>
#include "crypter/absractCrypter.h"

/*!
 * \brief �������� �����������������, �� ������ ������, ����� ��� ������ � amacriminal �������������� �������.
 */
class StubCrypter : public AbstractCrypter
{
public:
    Stub() = default;
    ~Stub() = default;
    /*!
     * \brief ����� ��� �� ��������.
     * \param input -  ������
     */
    std::string encode(const std::string& input) const;
    /*!
     * \brief ����� ��� �� ����������.
     * \param input -  ������
     */
    std::string decode(const std::string& input) const;
    /*!
     * \brief ��������� �����.
     */
    std::string name() const;
};

#endif // STUBCRYPTER_H