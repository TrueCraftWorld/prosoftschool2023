#include "crypterBase.h"
#include <string>
#include <vector>
#include <map>
#include <utility>

Encoder::Encoder() {
    
}

Encoder::~Encoder(){
    if (!m_crypterMap.empty()) {
        std::map<std::string, BaseEncoderExecutor*>::iterator iter = m_crypterMap.begin();

        // while (iter != m_crypterMap.end())
        // {
        //     // if (iter->second != nullptr)
        //         delete iter->second;
        //     iter++;
        // }
        for (const auto& [_, crypter] : map) {
            delete crypter;
        }
    }
}

std::string Encoder::decode(const std::string& message) const{
    return m_curr_Crypter->decode(message); 
}

std::string Encoder::encode(const std::string& message) const{
    return m_curr_Crypter->encode(message);
}

bool Encoder::crypterExist(const std::string& name) {
    return (m_crypterMap.find(name) != m_crypterMap.end());
}

bool Encoder::setCurrentCrypter (const std::string& name)
{
    if (!crypterExist(name)) return false; //can't set non-existing crypter as default
    m_curr_Crypter = m_crypterMap[name];
    return true;
}

bool Encoder::addCrypter (BaseEncoderExecutor *newCrypter)
{
    if (newCrypter== nullptr) return false;
    if (crypterExist(newCrypter->name())) return true; //consider already existing crypter a success for now
    m_crypterMap.insert({newCrypter->name(), newCrypter});
    return true;
}


