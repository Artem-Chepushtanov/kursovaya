#include "Model.hpp"
#include <iostream>
// Конструктор с параметрами
Model::Model(const std::string& imya)
    : m_imya(imya), m_obuchena(false), m_obuchenaNa(0)
{
    std::cout << "[Model] Создана модель \"" << m_imya << "\"\n";
}
// Деструктор
Model::~Model()
{
    std::cout << "[Model] Уничтожена модель \"" << m_imya << "\"\n";
}
// Обучить модель на наборе
void Model::obuchit(const NaborSMS& nabor)
{
    // Проверка правила: нельзя обучить на пустом наборе
    if (nabor.razmer() == 0)
    {
        std::cout << "[Model] ОШИБКА: нельзя обучить модель на пустом наборе!\n";
        return;
    }
    m_obuchena = true;
    m_obuchenaNa = nabor.razmer();
    std::cout << "[Model] Модель \"" << m_imya << "\" обучена на " << m_obuchenaNa << " SMS\n";
}
// Предсказать для текста
void Model::predskazat(const std::string& tekst) const
{
    if (!m_obuchena)
    {
        std::cout << "[Model] ОШИБКА: модель не обучена! Сначала обучите.\n";
        return;
    }
    std::cout << "[Model] Предсказание для \"" << tekst << "\": (заглушка)\n";
}
// Вывести состояние модели
void Model::pechat() const
{
    std::cout << "Модель \"" << m_imya << "\": "
              << (m_obuchena ? "обучена" : "не обучена")
              << ", обучена на " << m_obuchenaNa << " SMS\n";
}
// Проверка: обучена ли модель
bool Model::obuchena() const
{
    return m_obuchena;
}