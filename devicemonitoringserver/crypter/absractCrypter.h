#ifndef ABSTRACTCRYPTER_H
#define ABSTRACTCRYPTER_H

#include <string>
#include "../messages.h"

/*!
 * \brief ������� ����� �����������������.
 */
class BaseEncoderExecutor
{
public:

    virtual ~BaseEncoderExecutor() = default;
    /*!
     * \brief ����� ��������.
     * \param input - ��������������� ������
     */
    virtual std::string encode(const std::string& input) const = 0;
    /*!
     * \brief ����� ����������.
     * \param input - ������������� ������
     */
    virtual std::string decode(const std::string& input) const = 0;
    /*!
     * \brief ��������� �����.
     * \details ���������� ������ ����������, � ������� ������ ���� ����� ��� ��������. 
     *          �� ��� ���� ����������� �������� �� ����� ����� �����
     */
    virtual std::string name() const = 0;
};

#endif // ABSTRACTCRYPTER_H
