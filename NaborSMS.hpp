#pragma once
#include "SMS.hpp"
#include <vector>
#include <cstddef>
// Набор SMS — КОМПОЗИЦИЯ: содержит SMS, владеет ими.
// Если уничтожить NaborSMS — все SMS внутри уничтожатся вместе с ним.
class NaborSMS
{
public:
    // Конструктор по умолчанию — пустой набор
    NaborSMS();
    // Деструктор — выводит сообщение об уничтожении набора
    ~NaborSMS();
    // Содержательные методы
    void dobavitSMS(const std::string& tekst, const std::string& otpravitel, bool etoSpam); // добавить SMS в набор
    void pechat() const;              // вывести все SMS на экран
    std::size_t razmer() const;       // сколько SMS в наборе
    const std::vector<SMS>& getElementy() const;  // получить все SMS
private:
    std::vector<SMS> m_elementy;   // КОМПОЗИЦИЯ: SMS живут внутри набора
};