#include "NaborSMS.hpp"
#include <iostream>
// Конструктор по умолчанию — пустой набор
NaborSMS::NaborSMS()
{
    std::cout << "[NaborSMS] Создан пустой набор\n";
}
// Деструктор
NaborSMS::~NaborSMS()
{
    std::cout << "[NaborSMS] Уничтожен набор (в нём было " << m_elementy.size() << " SMS)\n";
}
// Добавить SMS в набор
void NaborSMS::dobavitSMS(const std::string& tekst, const std::string& otpravitel, bool etoSpam)
{
    m_elementy.emplace_back(tekst, otpravitel, etoSpam);
}
// Вывести все SMS
void NaborSMS::pechat() const
{
    std::cout << "Набор SMS (" << m_elementy.size() << " шт.):\n";
    for (const auto& sms : m_elementy)
    {
        sms.pechat();
    }
}
// Сколько SMS в наборе
std::size_t NaborSMS::razmer() const
{
    return m_elementy.size();
}
// Получить все SMS
const std::vector<SMS>& NaborSMS::getElementy() const
{
    return m_elementy;
}