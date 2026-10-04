#pragma once
#include <string>

// Одно SMS-сообщение: текст, отправитель, метка
class SMS
{
public:
    // Конструктор с параметрами: tekst - текст, otpravitel - отправитель, etospam - метка спам или нет
    SMS(const std::string& tekst, const std::string& otpravitel, bool etospam);
    // Конструктор по умолчанию - пустое сообщение
    SMS();
    // Деструктор - выводит в консоль сообщение об уничтожении объекта
    ~SMS();
    // Содержательные методы
    void pomititkakspam(); // пометить как спам (m_etospam = true, m_estmetka = true)
    void pomititkaknespam(); // пометить как не спам (m_etospam = false, m_estmetka = true)
    void pechat() const; // вывести состояние объекта на экран
    // Геттеры - вернуть значения полей
    std::string gettekst() const; // вернуть m_tekst
    std::string getotpravitel() const; // вернуть m_otpravitel
    bool etospam() const; // вернуть m_etospam
    bool estmetka() const; // вернуть m_estmetka
private:
    std::string m_tekst; // текст сообщения
    std::string m_otpravitel; // отправитель
    bool m_etospam; // true = спам, false = не спам
    bool m_estmetka; // true = метка установлена, false = не размечено
};