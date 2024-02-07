#ifndef MIRROCRYPTER_H
#define MIRROCRYPTER_H

#include <string>
#include "crypter/absractCrypter.h"

/*!
 * \brief �������� �����������������, �� ������ ������, ����� ��� ������ � amacriminal �������������� �������.
 */
class MirrorCrypter : public BaseEncoderExecutor 
{
public:
    MirrorCrypter() = default;
    ~MirrorCrypter() = default;
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

private: 
    std::string reflect(const std::string& input) const;
};

#endif // MIRROCRYPTER_H