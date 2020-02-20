<!-- MarkdownTOC -->

- [Соглашение об именовании](#%D0%A1%D0%BE%D0%B3%D0%BB%D0%B0%D1%88%D0%B5%D0%BD%D0%B8%D0%B5-%D0%BE%D0%B1-%D0%B8%D0%BC%D0%B5%D0%BD%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B8)
    - [Переменных](#%D0%9F%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85)
        - [Полей\(переменных\), расположенных в закрытой\(private\) области класса](#%D0%9F%D0%BE%D0%BB%D0%B5%D0%B9%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D1%80%D0%B0%D1%81%D0%BF%D0%BE%D0%BB%D0%BE%D0%B6%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%B2-%D0%B7%D0%B0%D0%BA%D1%80%D1%8B%D1%82%D0%BE%D0%B9private-%D0%BE%D0%B1%D0%BB%D0%B0%D1%81%D1%82%D0%B8-%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0)
        - [Булевых переменных и булевых полей класса](#%D0%91%D1%83%D0%BB%D0%B5%D0%B2%D1%8B%D1%85-%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%B8-%D0%B1%D1%83%D0%BB%D0%B5%D0%B2%D1%8B%D1%85-%D0%BF%D0%BE%D0%BB%D0%B5%D0%B9-%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0)
        - [Переменных, представляющих GUI](#%D0%9F%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%BF%D1%80%D0%B5%D0%B4%D1%81%D1%82%D0%B0%D0%B2%D0%BB%D1%8F%D1%8E%D1%89%D0%B8%D1%85-gui)
        - [Прочее](#%D0%9F%D1%80%D0%BE%D1%87%D0%B5%D0%B5)
    - [Классов, структур, перечислений и других пользовательских типов данных](#%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D0%BE%D0%B2-%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80-%D0%BF%D0%B5%D1%80%D0%B5%D1%87%D0%B8%D1%81%D0%BB%D0%B5%D0%BD%D0%B8%D0%B9-%D0%B8-%D0%B4%D1%80%D1%83%D0%B3%D0%B8%D1%85-%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D1%81%D0%BA%D0%B8%D1%85-%D1%82%D0%B8%D0%BF%D0%BE%D0%B2-%D0%B4%D0%B0%D0%BD%D0%BD%D1%8B%D1%85)
    - [Функций](#%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B9)
    - [Функций, возвращающих значение типа `bool`](#%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B9-%D0%B2%D0%BE%D0%B7%D0%B2%D1%80%D0%B0%D1%89%D0%B0%D1%8E%D1%89%D0%B8%D1%85-%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D0%B5-%D1%82%D0%B8%D0%BF%D0%B0-bool)
    - [Пользовательских констант](#%D0%9F%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D1%81%D0%BA%D0%B8%D1%85-%D0%BA%D0%BE%D0%BD%D1%81%D1%82%D0%B0%D0%BD%D1%82)
    - [`Number` vs `Count` vs `Index` vs `Quantity` vs `Id`](#number-vs-count-vs-index-vs-quantity-vs-id)
- [Организация кода](#%D0%9E%D1%80%D0%B3%D0%B0%D0%BD%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F-%D0%BA%D0%BE%D0%B4%D0%B0)
    - [Пробелы vs Табы](#%D0%9F%D1%80%D0%BE%D0%B1%D0%B5%D0%BB%D1%8B-vs-%D0%A2%D0%B0%D0%B1%D1%8B)
    - [Отступы](#%D0%9E%D1%82%D1%81%D1%82%D1%83%D0%BF%D1%8B)
    - [Стиль фигурных скобок](#%D0%A1%D1%82%D0%B8%D0%BB%D1%8C-%D1%84%D0%B8%D0%B3%D1%83%D1%80%D0%BD%D1%8B%D1%85-%D1%81%D0%BA%D0%BE%D0%B1%D0%BE%D0%BA)
    - [Однострочники](#%D0%9E%D0%B4%D0%BD%D0%BE%D1%81%D1%82%D1%80%D0%BE%D1%87%D0%BD%D0%B8%D0%BA%D0%B8)
    - [Вызов функции](#%D0%92%D1%8B%D0%B7%D0%BE%D0%B2-%D1%84%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B8)
    - [Файлы исходных кодов](#%D0%A4%D0%B0%D0%B9%D0%BB%D1%8B-%D0%B8%D1%81%D1%85%D0%BE%D0%B4%D0%BD%D1%8B%D1%85-%D0%BA%D0%BE%D0%B4%D0%BE%D0%B2)
    - [Пустые строки](#%D0%9F%D1%83%D1%81%D1%82%D1%8B%D0%B5-%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%B8)
    - [Подключение заголовочных файлов](#%D0%9F%D0%BE%D0%B4%D0%BA%D0%BB%D1%8E%D1%87%D0%B5%D0%BD%D0%B8%D0%B5-%D0%B7%D0%B0%D0%B3%D0%BE%D0%BB%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D1%85-%D1%84%D0%B0%D0%B9%D0%BB%D0%BE%D0%B2)
    - [Классы исключения](#%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D1%8B-%D0%B8%D1%81%D0%BA%D0%BB%D1%8E%D1%87%D0%B5%D0%BD%D0%B8%D1%8F)
    - [Комментирование](#%D0%9A%D0%BE%D0%BC%D0%BC%D0%B5%D0%BD%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5)
    - [Приведение типов](#%D0%9F%D1%80%D0%B8%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D1%82%D0%B8%D0%BF%D0%BE%D0%B2)
    - [Рекомендации](#%D0%A0%D0%B5%D0%BA%D0%BE%D0%BC%D0%B5%D0%BD%D0%B4%D0%B0%D1%86%D0%B8%D0%B8)
- [Ключи компиляции](#%D0%9A%D0%BB%D1%8E%D1%87%D0%B8-%D0%BA%D0%BE%D0%BC%D0%BF%D0%B8%D0%BB%D1%8F%D1%86%D0%B8%D0%B8)

<!-- /MarkdownTOC -->

<a name="%D0%A1%D0%BE%D0%B3%D0%BB%D0%B0%D1%88%D0%B5%D0%BD%D0%B8%D0%B5-%D0%BE%D0%B1-%D0%B8%D0%BC%D0%B5%D0%BD%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B8"></a>
# Соглашение об именовании

<a name="%D0%9F%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85"></a>
### Переменных

С ***маленькой*** буквы в смешанном регистре:

```c++
ClassName classObj;

int mySuperVar;
```
<a name="%D0%9F%D0%BE%D0%BB%D0%B5%D0%B9%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D1%80%D0%B0%D1%81%D0%BF%D0%BE%D0%BB%D0%BE%D0%B6%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%B2-%D0%B7%D0%B0%D0%BA%D1%80%D1%8B%D1%82%D0%BE%D0%B9private-%D0%BE%D0%B1%D0%BB%D0%B0%D1%81%D1%82%D0%B8-%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0"></a>
#### Полей(переменных), расположенных в закрытой(private) области класса

Имя начинается с приставки `m_` дальше с ***маленькой*** буквы в смешанном регистре:
```c++
int m_mySuperVar;
```

<a name="%D0%91%D1%83%D0%BB%D0%B5%D0%B2%D1%8B%D1%85-%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%B8-%D0%B1%D1%83%D0%BB%D0%B5%D0%B2%D1%8B%D1%85-%D0%BF%D0%BE%D0%BB%D0%B5%D0%B9-%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0"></a>
#### Булевых переменных и булевых полей класса

Имена булевых переменных начинаются с приставки `is` (`m_is`) и дальше с ***большой*** буквы в смешанном регистре. В некоторых случаях уместно использовать `has` и тд:

```c++
bool isTestOk;
bool m_isError;
bool hasError;
```

<a name="%D0%9F%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D1%8B%D1%85-%D0%BF%D1%80%D0%B5%D0%B4%D1%81%D1%82%D0%B0%D0%B2%D0%BB%D1%8F%D1%8E%D1%89%D0%B8%D1%85-gui"></a>
#### Переменных, представляющих GUI

Следует добавлять суффикс, соответствующий имени типа компонента:

```c++
mainWindow, propertiesDialog, widthScale, loginText,
leftScrollbar, mainForm, fileMenu, minLabel, exitButton, yesToggle
```

<a name="%D0%9F%D1%80%D0%BE%D1%87%D0%B5%D0%B5"></a>
#### Прочее

- Если переменная отображает физическую величину, старайтесь указывать размерность

```c++
int bufSizeBytes;
double durationUs;
int resistanceOhm;
int delayInSecond;
```

- Допускается указывать размерность через `_`, чтобы не было разночтений.

```c++
int resistance_mOhm //мили Ом
int resistance_МOhm //мега Ом
```

- Избегайте коротких названий переменных, используйте понятные осмысленные имена

```c++
// Плохо
int bc
int bcm

// Хорошо
int descriptorBc
int monitorSession
```

- Избегайте аббревиатур и всяческих сокращений

- Если нужно использовать аббревиатуры, то аббревиатуры должны быть в смешанном регистре

```c++
// Плохо
class QXMLStreamReader;
int DNSRecord;
bool isHTTPRequest;

// Хорошо
class QXmlStreamReader;
int dnsRecord
bool isHttpRequest;
```


<a name="%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D0%BE%D0%B2-%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80-%D0%BF%D0%B5%D1%80%D0%B5%D1%87%D0%B8%D1%81%D0%BB%D0%B5%D0%BD%D0%B8%D0%B9-%D0%B8-%D0%B4%D1%80%D1%83%D0%B3%D0%B8%D1%85-%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D1%81%D0%BA%D0%B8%D1%85-%D1%82%D0%B8%D0%BF%D0%BE%D0%B2-%D0%B4%D0%B0%D0%BD%D0%BD%D1%8B%D1%85"></a>
### Классов, структур, перечислений и других пользовательских типов данных

С ***большой*** буквы в смешанном регистре:

```c++
class FooBar
{
public:
    FooBar();
    ~FooBar();

};
```

```c++
typedef std::vector<short> Channels;
```

```c++
struct ChannelInfo
{

};
```

```c++
enum MkoMode : bool
{
    MODE_BC = false,
    MODE_RT = true
};
```

```c++
enum class MkoError
{
    NO_ERROR,        // Ошибка не вносится.
    INV_PARITY,      // Инверсия разряда четности (20-го)
                     // по отношению к его достоверному значению.
    WRONG_BITCOUNT,  // Ошибка количества разрядов в слове.
    BAD_SYNCHRO      // Ошибка кодирования синхроимпульса слова.
};
```

<a name="%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B9"></a>
### Функций

С ***маленькой*** буквы в смешанном регистре. Имя функции должно начинаться с глагола действия. Лямбда-функции именуются аналогично:

```c++
void setVoltage();
void getValue();
void switchChannel();
```

<a name="%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B9-%D0%B2%D0%BE%D0%B7%D0%B2%D1%80%D0%B0%D1%89%D0%B0%D1%8E%D1%89%D0%B8%D1%85-%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D0%B5-%D1%82%D0%B8%D0%BF%D0%B0-bool"></a>
### Функций, возвращающих значение типа `bool`
C приставки `is` и дальше с ***большой*** буквы в смешанном регистре

```c++
bool isOpen();
bool isConnected();
bool isSelfTestOK();
```

В некоторых ситуациях префикс `is` лучше заменить на другой: `has`, `can` или `should`:

```c++
bool hasLicense();
bool canEvaluate();
bool shouldSort();
```

<a name="%D0%9F%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%D1%81%D0%BA%D0%B8%D1%85-%D0%BA%D0%BE%D0%BD%D1%81%D1%82%D0%B0%D0%BD%D1%82"></a>
### Пользовательских констант

Большими буквами с `_` в качестве разделителя

```c++
static const short MIN_CHANNEL_NUMBER = 1;
static const short MAX_CHANNEL_NUMBER = 256;
```
> И да, если пишете на C++, то для объявления констант используйте `const`, а не `#define`

<a name="number-vs-count-vs-index-vs-quantity-vs-id"></a>
### `Number` vs `Count` vs `Index` vs `Quantity` vs `Id`

- `Number` — вещи, которые действительно называются number. `reynoldsNumber` — число Рейнольдса, `startingNumber` - стартовый номер
- `Index` — порядковый номер. `carIndex` — номер машины (например, от 0 до N−1)
- `Count` — количество различаемых вещей. `carCount` — количество машин в гонке
- `Quantity` — количество неразличаемых вещей. `carQty` — количество машин на стоянке (например, для моделирования загрузки дифуравнением).
- `Id` — отфонарный суррогатный номер. `carId` — номер машины в БД

<a name="%D0%9E%D1%80%D0%B3%D0%B0%D0%BD%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F-%D0%BA%D0%BE%D0%B4%D0%B0"></a>
### Организация кода

<a name="%D0%9F%D1%80%D0%BE%D0%B1%D0%B5%D0%BB%D1%8B-vs-%D0%A2%D0%B0%D0%B1%D1%8B"></a>
### Пробелы vs Табы

Пробелы. Никогда не смешивайте символы табуляции и пробелы.

<a name="%D0%9E%D1%82%D1%81%D1%82%D1%83%D0%BF%D1%8B"></a>
### Отступы
Используйте 4 пробела на один уровень отступа.
>Каждый редактор умеет заменять таб пробелами

```c++
if (!m_isConnectedTD)
{
    reset();
}
```


<a name="%D0%A1%D1%82%D0%B8%D0%BB%D1%8C-%D1%84%D0%B8%D0%B3%D1%83%D1%80%D0%BD%D1%8B%D1%85-%D1%81%D0%BA%D0%BE%D0%B1%D0%BE%D0%BA"></a>
### Стиль фигурных скобок
Используйте стиль фигурных скоробок Эрика Алмана (Eric Allman)

```c++
if (<cond1>)
{
    if (<cond2>)
    {
        <body>
    }
}
```
Почему? Потому что, у нас принят такой стиль кода

<a name="%D0%9E%D0%B4%D0%BD%D0%BE%D1%81%D1%82%D1%80%D0%BE%D1%87%D0%BD%D0%B8%D0%BA%D0%B8"></a>
### Однострочники

Не пишите однострочные `if` и `for` и прочее, не экономьте на строчках

```c++
// Плохо
for (i = 0; i < N; i++) s += array[i];

if (array[0] == 0xffff) finish = 1;

if (status == 0) { status = 1; InitRT(&RTxDCB_rd); }


// Хорошо
for (i = 0; i < N; i++)
{
    s += array[i];
}


if (array[0] == 0xffff)
{
    finish = 1;
}


if (status == 0)
{
    status = 1;
    initRt(&value);
}

```

<a name="%D0%92%D1%8B%D0%B7%D0%BE%D0%B2-%D1%84%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%B8"></a>
### Вызов функции

Если функция принимает много аргументов, старайтесь описывать каждый из них при помощи говорящих имен переменных или комментариев:

```c++
BTI1553_ValPackCWD(address,                    // Адрес получателя
                   TRANSMIT_RESEIVE_MASK >> 1, // Бит приема/передачи
                   SEND_COMMAND_WORD,          // Признак отправки КУ
                   command & COMMAND_MASK)     // Команда управления (КУ)
                   )


switchChannel(/*вход COM20*/ 3, /*выход*/ kmiModuleNumber + 1);
```

<a name="%D0%A4%D0%B0%D0%B9%D0%BB%D1%8B-%D0%B8%D1%81%D1%85%D0%BE%D0%B4%D0%BD%D1%8B%D1%85-%D0%BA%D0%BE%D0%B4%D0%BE%D0%B2"></a>
### Файлы исходных кодов

- Файл исходных кодов сохраняйте в кодировке UTF-8 ***(без BOM)***
- Название файлов должно быть смешанном регистре, начиная с большой буквы. ***Каждый класс следует объявлять в отдельном заголовочном файле*** и ***определять (реализовывать) в файле исходного кода***, имена файлов совпадают с именем класса. Исключения из правила возможны для классов обладающих схожим смыслом, классов, являющихся друзьями.:

```c++
MyClass.cpp, MyClass.h
```
Допускается отходить от этого правила:
```c++
main.cpp, version.h
```

- Используйте `#include guards` для всех `.h` файлов:

```c++
// file FooBar.h:
#ifndef FOOBAR_H
#define FOOBAR_H
// ... declarations ...
#endif // FOOBAR_H
```

- ***Все определения методов или функций должны находиться в файлах исходного кода***. Шаблоны должны определяться в заголовочном файле (по другому просто не скомпилируется).

<a name="%D0%9F%D1%83%D1%81%D1%82%D1%8B%D0%B5-%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%B8"></a>
### Пустые строки

- Отделяйте ***объявления*** функций друг от друга ***одной пустой строкой***:

```c++
void switchChannels(bool mode) const;

void setDischargeChain(const std::vector<short> &channels, bool mode) const;
```

- Отделяйте ***определения*** функций друг от друга ***двумя пустыми строками***:

```c++
void switchChannels(bool mode) const
{

}


void setDischargeChain(const std::vector<short> &channels, bool mode) const
{

}
```

- Добавляйте пустую строку ***до и после*** конструкций: `if/else`, `do/while`, `while`, `for`

- Используйте пустые строки в коде, чтобы отделить друг от друга логические части. Ни одно дерево не погибнет, если вы добавите лишнюю пустую строку, однако читаемость кода возрастет:

```c++
Matrix4x4 matrix = new Matrix4x4();

double cosAngle = Math.cos(angle);
double sinAngle = Math.sin(angle);

matrix.setElement(1, 1,  cosAngle);
matrix.setElement(1, 2,  sinAngle);
matrix.setElement(2, 1, -sinAngle);
matrix.setElement(2, 2,  cosAngle);

multiply(matrix);
```

<a name="%D0%9F%D0%BE%D0%B4%D0%BA%D0%BB%D1%8E%D1%87%D0%B5%D0%BD%D0%B8%D0%B5-%D0%B7%D0%B0%D0%B3%D0%BE%D0%BB%D0%BE%D0%B2%D0%BE%D1%87%D0%BD%D1%8B%D1%85-%D1%84%D0%B0%D0%B9%D0%BB%D0%BE%D0%B2"></a>
### Подключение заголовочных файлов

- Объединяйте список подключаемых заголовочных файлов в блоки:
    - стандартные библиотеки
    - third-party библиотеки
    - файлы приложения

```c++
#include <cmath> // round()
#include <iomanip>
#include <sstream>

#include "../../InformtestLibs/Include/uniptn16.h"

#include "../Exception/KPAException.h"
#include "../FunlibService/FunlibService.h"
#include "Iptn16.h"
```

- В пределах одного блока список заголовочных файлов должен быть отсортирован по алфавиту с **учетом регистра**:

```c++
// file.cpp

// заголовочный файл
#include "MainWindow.h"

// std
#include <fstream>

// third-party
#include <QApplication>
#include <QCheckBox>
#include <QComboBox>
#include <QFileDialog>
#include <QHeaderView>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMenuBar>
#include <QMessageBox>
#include <QToolBar>

// пользовательские заголовочные файлы
#include "AboutDialog.h"
#include "AddTreeItemWindow.h"
#include "CrcCalcWindow.h"
#include "ErrorWindow.h"
#include "LogWindow.h"
#include "Logger.h"
#include "LoginWindow.h"
#include "SelectTestingTypeWindow.h"
#include "Service.h"
#include "TestingTypeSettingsWindow.h"
#include "UserSettingsWindow/UserSettingsWindow.h"
#include "model/SpinBoxDelegate.h"
#include "settings.h"
```

- Держите список подключаемых заголовочных файлов актуальным:

```c++
// Очень плохо
#include "cstdio"
#include <iomanip>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <math.h>
#include <Windows.h>
#include <algorithm>
#include <set>
#include <iterator>
#include <fstream>
#include <thread>
#include "../Exception/KPAException.h"
#include "../../InformtestLibs/Include/unim2m.h"
#include "Im2m.h"
#include <sstream>
```

В файлах исходных кодов (`.cpp`) сначала подключайте заголовочный файл:

```c++
// Iptn16.cpp
#include "Iptn16.h"

#include <cmath> // round()
#include <iomanip>
#include <sstream>

#include "../../InformtestLibs/Include/uniptn16.h"

#include "../Exception/KPAException.h"
#include "../FunlibService/FunlibService.h"
```

<a name="%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D1%8B-%D0%B8%D1%81%D0%BA%D0%BB%D1%8E%D1%87%D0%B5%D0%BD%D0%B8%D1%8F"></a>
### Классы исключения

- Классам исключений следует присваивать суффикс `Exception`

```c++
class AccessException : public std::exception
{
}
```

- Старайтесь указывать как можно больше полезной информации в тексте исключения:

```c++
throw KPAException("\nОШИБКА (МПД, MUX2) Введенный номер канала для коммутации не соответствуют введенному номеру модуля МПД\n",
                   "Номер канала ", KPAChannel, " соответствует номеру модуля МПД: ", (tmsModuleNumber + 1), "\n",
                   "Введенный пользователем номер модуля МПД: ", mpdNumber);
```

- Указывайте в тексте исключения информацию, которая поможет пользователю избежать появления этого исключения в дальнейшем:

```c++
throw KPAException("\nОШИБКА (Омнибас, режим КШ). Неправильно указано количество СД при обмене ОУ-КШ. Получено: ",
                   dataWordNumber, ". Допустимый диапазон значений СД: ",
                   MIN_DATA_WORD_NUMBER, " - ", MAX_DATA_WORD_NUMBER);
```

- Текст сообщения об ошибке должен быть на понятном (не программисту) русском языке

- В коде одного класса, библиотеки, модуля или иной сущности не должно быть 2-х исключений с одинаковым текстом

<a name="%D0%9A%D0%BE%D0%BC%D0%BC%D0%B5%D0%BD%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5"></a>
### Комментирование

- Комментируйте, ***как минимум***, все методы и функции в заголовочном файле, которые доступны пользователю или другой части программы:

```c++
/*
 * Установить амплитуду сигнала
 *
 * Входные данные:
 *  voltage - амплитуда сигнала [В]. Диапазон значений 0 - 12,5
 *  load    - нагрузка [Ом]
 */
void setAmplitude(double voltage, unsigned int  load = DEFAULT_LOAD_OHM) const;


/*
 * Получение данных о конфигурации выбранного канала имитаторов АНАЛОГОВЫХ
 * датчиков.
 *
 * Входные данные:
 *  channel - Номер канала. Диапазон значений 1-2
 *
 * Возвращаемое значение:
 *  Экземпляр класса ChannelInfoMad
 */
ChannelInfoMad getChannelConfig(short channel) const;
```

- Если пишите строчный комментарий, то оставляйте перед ним пустую строку

```c++
// Плохо:

// Вывод foo
foo()
// Вывод bar
bar()

// Хорошо:

// Вывод foo
foo()

// Вывод bar
bar()
```

- Комментарий всегда начинайте с заглавной буквы. Если этого требует контекст, то допустимо со строчной

```c++
int value       // Результат работы программы
double voltage  // [в]
```


<a name="%D0%9F%D1%80%D0%B8%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D1%82%D0%B8%D0%BF%D0%BE%D0%B2"></a>
### Приведение типов

Приведение типов должно быть явным (***не используйте приведение в С стиле***). Никогда не полагайтесь на неявное приведение типов.

```c++
floatValue = static_cast<float>(intValue);
// Плохо: floatValue = intValue;
// Плохо: floatValue = (float)intValue;
```

<a name="%D0%A0%D0%B5%D0%BA%D0%BE%D0%BC%D0%B5%D0%BD%D0%B4%D0%B0%D1%86%D0%B8%D0%B8"></a>
### Рекомендации

- Используйте табличное форматирование для однотипного кода:

```c++
const bool error =  errno == EAGAIN  || errno == EWOULDBLOCK ||
                    errno == EINTR   || errno == ENOSPC      ||
                    errno == ENOBUFS || errno == ENOMEM;
if (!error){}
```
```c++
ChannelInfoMad result;

result.current              = iptnConfig.current;
result.voltage              = iptnConfig.voltage * 1000.0; // Переводим из [В] в [мВ]
result.isVoltageStab        = iptnConfig.isVoltageStab;

result.resistance           = kmimConfig.resistance;
result.capacity             = kmimConfig.capacity;
result.isConnected          = kmimConfig.isOn;
result.isDischargeConnected = kmimConfig.isDischargeConnected;

```

- Объявлять каждую переменную нужно на отдельной строчке:

```c++
// Неправильно
int a, b;
char *c, *d;

// Правильно
int height;
int width;
char *nameOfThis;
char *nameOfThat;
```

- Объявляйте переменные как можно ближе к той области кода, в которой она будет использоваться

```c++
// Неправильно
void funcName()
{
    int a = 0;

    // много строчек кода
    int res = plusTwo(a);
}

// Правильно
void funcName()
{
    // много строчек кода
    int a = 0;
    int res = plusTwo(a);
}

```

- Слова `get`/`set` должны быть использованы везде, где осуществляется прямой доступ к полю класса. А сами поля класса не следует объявлять как `public`. Эти переменные нарушают принципы сокрытия информации и инкапсуляции. Вместо этого используйте переменные с модификатором `private`:

```c++
employee.getName();
employee.setName(name);

matrix.getElement(2, 4);
matrix.setElement(2, 4, value);
```

- Переменные следует инициализировать в месте их объявления.Это даёт гарантию, что переменные пригодны для использования в любой момент времени.

```c++
// Как отстрелить себе ногу, если не инициализировать переменные
void foo(int *a, int *b, int *c)
{
    *a = 10;
    *b = 20;
    // *c = 30; // <- Разработчик ф-ции забыл после отладки раскомментировать
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;

    foo(&a, &b, &c); // <- в переменной <c> так и остался мусор

    return 0;
}
```

- Следует строго избегать исполнимых выражений в условиях:

```c++
// Хорошо
File* fileHandle = open(fileName, "w");
if (!fileHandle)
{}

// Плохо:
if (!(fileHandle = open(fileName, "w")))
{}
```

- Расставляйте пробелы
    - Операторы следует отбивать пробелами;
    - После зарезервированных ключевых слов языка C++ следует ставить пробел;
    - После запятых следует ставить пробелы;
    - После точек с запятой в цикле for следует ставить пробелы;
    - После знака однострочного комментария

```c++
a = (b + c) * d; // НЕ РЕКОМЕНДУЕТСЯ: a=(b+c)*d

while (true)   // НЕ РЕКОМЕНДУЕТСЯ: while(true)
{
  ...

doSomething(a, b, c, d);  // НЕ РЕКОМЕНДУЕТСЯ: doSomething(a,b,c,d);

for (i = 0; i < 10; i++) // НЕ РЕКОМЕНДУЕТСЯ: for(i=0;i<10;i++)

// Какой то комментарий
```

- Разделы класса `public`, `protected` и `private` должны быть отсортированы. Все разделы должны быть явно указаны:

```c++
class FooBar
{
public:
    FooBar();
    ~FooBar();

private:
    int m_someVar;
};
```

- Если в методе класса не изменяются никакие параметры класса (состояние класса), подчерните это, объявив метод константным.

```c++
int MyClass::plusTwo(int value) const
{
    return value + 2;
}
```


<a name="%D0%9A%D0%BB%D1%8E%D1%87%D0%B8-%D0%BA%D0%BE%D0%BC%D0%BF%D0%B8%D0%BB%D1%8F%D1%86%D0%B8%D0%B8"></a>
## Ключи компиляции

- Старайтесь компилировать всегда при максимальном уровне предупреждений, ***перекладывайте работу по поиску ошибок на компилятор***
- Исправляйте все `Warning`
- Используйте статические анализаторы для проверки кода, например Cppcheck
- Используйте стандарт С++11, используйте флаг компиляции `–std=c++11`
- Используйте флаг оптимизации `-02`, для того чтобы включить все проверки при компиляции
- Используйте в своих проектах, как минимум, следующие флаги компиляции:
     - `-Wall` включает предупреждения о выходах за границы массива, о неиспользуемых переменных, функциях и так далее;
     - `-Wextra` включает предупреждения о пустых блоках в операторе if, о сравнениях signed и unsigned;
     -  `-Wconversion` `-Wsign-conversion` дает предупреждение о преобразовании типа, при котором значение может поменяться;
     - `-Werror` трактует все предупреждения как ошибки. Пока все предупреждения компилятора не будут исправлены - программа не скомпилируется;
     - `-Wunreachable-code` ищет участки кода, которые никогда не будут выполнены;
     - `-Wstrict-overflow=4` активно ищет, чтобы такого упростить в вашей программе. Например, компилятор теперь не пройдет мимо `x + 1 > x` (всегда TRUE), `x + 1 > 1` (можно записать как `x > 0`), `(x * 10) / 5` (лучше записать короче, как `x * 2`);
     - `-Wfloat-equal` ругается, если кто-то пытается производить некоторые проверки на равенство, используя при этом переменные типа float;
     - `-Wshadow` предупреждает если локальная переменная скрывает собой некую, лежащую выше по области видимости, переменную, с таким же названием;
     - `-Wlogical-op` предупреждает о странном использовании логических операторов в выражениях. Например, использование логических операторов в контексте, где более подошло бы использование побитовых операторов.
     - `-pedantic` включает строгое следование стандарту ISO C. Всякие расширения компилятора, наподобие long long игнорируются;
     - `-Wold-style-cast` - поможет избавится от приведений типов в стиле языка C;
     - `-Woverloaded-virtual` - сообщит о перегрузке виртуальных функций.
     - `-Wctor-dtor-privacy` - возмутится, если найдёт у Вас в коде класс с закрытыми конструкторами и деструктором, который нигде не используется.
     - `-Wnon-virtual-dto`r - этой опции не нравятся не виртуальные деструкторы.
     - `-D_GLIBCXX_DEBUG` `-D_GLIBCXX_DEBUG_PEDANTIC` — эти параметры включают специальный отладочный режим стандартной библиотеки GNU C++. В этом режиме стандартные контейнеры и алгоритмы делают всевозможные проверки
     - `-Weffc++` -  эта опция напомнит вам о некоторых правилах Скотта Майерса, `Эффективное использование C++. 50 рекомендаций по улучшению ваших программ и проектов`:
         - Правило 11. "Для классов с динамическим выделением памяти объявляйте копирующий конструктор и оператор присваивания".
         - Правило 12. "Предпочитайте инициализацию присваиванию в конструкторах".
         - Правило 14. "Убедитесь, что базовые классы имеют виртуальные деструкторы".
         - Правило 15. "`operator=` должен возвращать ссылку на `*this`".
         - Правило 23. "Никогда не пытайтесь вернуть ссылку, когда вы должны вернуть объект".
И несколько правил из книги `Наиболее эффективное использование C++. 35 новых рекомендаций по улучшению ваших программ и проектов`:
         - Правило 6. "Различайте префиксную и постфиксную формы операторов инкремента и декремента".
         - Правило 7. "Никогда не перегружайте операторы `&&,` `||` и `,`".
