
#ifndef COMM_CENTER_H
#define COMM_CENTER_H

#include <map>
#include <vector>
#include <cstdint>
#include "../messages.h"
#include "../deviceworkschedule.h"



struct DeviceInfo {
    DeviceWorkSchedule devWorkSched;
    std::vector<Phase>  Phase_Log;        //log needed to compute rmsd 
    std::map<uint64_t, double> RMSD_log;  //time stamped log of rsmd's 
    uint64_t lastValidTime = 0;           
    uint64_t lastValidIndex = 0;           //last index in schedule that was in use 
};

class CommandCenter {

public:
    CommandCenter() = default;
    ~CommandCenter();
    /*!
     * \brief ���� ������ ��������� ��� ���������.
     * \param deviceId - ������������� ����������
     * \param messageStruct - ��������� ��� "�����������" � ���������
     * \retval �������������� ��������� ���������-�������
     */
    MessageBase acceptMessage(uint64_t deviceId, const MessageBase& messageStruct);

    /*!
     * \brief ����������� ������ ����������.
     * \param newDevSchedule - ���������� ������ ����������, ��������� ��� �����
     * \retval ��������� ������� (������� ���� ����� ����-�� ��� ����)
     */
    bool addDevice(const DeviceWorkSchedule& newDevSchedule);

    /*!
     * \brief ����� ���������� ������ ����������.
     * \param newDevSchedule - ���������� ������ ����������, ��������� ��� �����
     * \retval ��������� ������� 
     */
    bool changeSchedule(const DeviceWorkSchedule& newDevSchedule);

    /*!
     * \brief �������� ����������.
     * \param deviceId - ����� ����������
     * \retval ��������� ������� (������� ���� ������ ����������)
     */
    bool removeDevice(uint64_t deviceId);

private:
    std::map<uint64_t, DeviceInfo> mapOfDevices; 
    uint16_t getRMSD(uint64_t deviceId, uint8_t newValue);
};

#endif