#ifndef ABSTRACTCRYPTER_H
#define ABSTRACTCRYPTER_H

#include <string>
#include "../messages.h"

/*!
 * \brief ������� ����� �����������������.
 */
class AbstractCrypter
{
public:
    virtual ~AbstractCrypter() = default;
    /*!
     * \brief ����� ��������.
     * \param input - ��������������� ������
     */
    virtual std::string encode(const std::string& input) = 0;
    /*!
     * \brief ����� ����������.
     * \param input - ������������� ������
     */
    virtual std::string decode(const std::string& input) = 0;
    /*!
     * \brief ��������� �����.
     * \details ���������� ������ ����������, � ������� ������ ���� ����� ��� ��������. 
     *          �� ��� ���� ����������� �������� �� ����� ����� �����
     */
    virtual std::string name() = 0;
};

#endif // ABSTRACTMESSAGEHANDLER_H
