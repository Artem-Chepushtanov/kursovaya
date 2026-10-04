#pragma once
#include "NaborSMS.hpp"
#include <string>
#include <cstddef>
// Модель — АГРЕГАЦИЯ: использует NaborSMS, но не владеет им.
// Если уничтожить Model — NaborSMS продолжит существовать.
class Model
{
public:
    // Конструктор с параметрами: imya - название модели
    Model(const std::string& imya);
    // Деструктор — выводит сообщение об уничтожении модели
    ~Model();
    // Содержательные методы
    void obuchit(const NaborSMS& nabor);            // обучить модель на наборе
    void predskazat(const std::string& tekst) const; // предсказать для текста
    void pechat() const;                              // вывести состояние модели
    // Проверка правила: обучена ли модель
    bool obuchena() const;
private:
    std::string m_imya;        // название модели
    bool m_obuchena;           // true = обучена, false = нет
    std::size_t m_obuchenaNa;  // на скольких SMS обучена
};