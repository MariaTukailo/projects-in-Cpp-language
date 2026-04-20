#include "FunForException.h"
#include <string>
#include"MyExceptionsGeneral.h"
#include"MyExceptionInput.h"
//192 - 255 русские буквы , 168,184 - буквы Ё,ё
//192-223,168 - большие русские буквы
//65-122 - английские буквы

bool IsRussian(unsigned char c)//функция проверки на русскую букву
{
    return (c >= 192 && c <= 255) || c == 168 || c == 184;
}

bool IsRussianUpper(unsigned char c)//функция проверки на русскую большую букву
{
    return (c >= 192 && c <= 223) || c == 168;
}

bool IsDigit(unsigned char c)//функция проверки символа на число
{
    return (c >= '0' && c <= '9');
}

bool IsEnglish(unsigned char c)//функция проверки на английскую букву
{
    return (c >= 65 && c <= 122);
}

bool IsSpace(unsigned char c)//функция проверки на пробел
{
    return c == 32;
}

