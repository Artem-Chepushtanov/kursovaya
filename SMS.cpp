#include "SMS.hpp"
#include <iostream>
// Конструктор с параметрами
SMS::SMS(const std::string& tekst, const std::string& otpravitel, bool etospam)
    : m_tekst(tekst), m_otpravitel(otpravitel), m_etospam(etospam), m_estmetka(true)
{
    std::cout << "[SMS] Создано сообщение от " << m_otpravitel << "\n";
}
// Конструктор по умолчанию
SMS::SMS()
    : m_tekst(""), m_otpravitel(""), m_etospam(false), m_estmetka(false)
{
    std::cout << "[SMS] Создано пустое сообщение\n";
}
// Деструктор
SMS::~SMS()
{
    std::cout << "[SMS] Уничтожено сообщение от " << m_otpravitel << "\n";
}
// Пометить как спам
void SMS::pomititkakspam()
{
    m_etospam = true;
    m_estmetka = true;
}
// Пометить как не спам
void SMS::pomititkaknespam()
{
    m_etospam = false;
    m_estmetka = true;
}
// Вывести состояние
void SMS::pechat() const
{
    std::cout << "SMS от " << m_otpravitel << ": \"" << m_tekst << "\""
              << " | метка: " << (m_estmetka ? (m_etospam ? "спам" : "не спам") : "не размечено")
              << "\n";
}
// Геттеры
std::string SMS::gettekst() const { return m_tekst; }
std::string SMS::getotpravitel() const { return m_otpravitel; }
bool SMS::etospam() const { return m_etospam; }
bool SMS::estmetka() const { return m_estmetka; }