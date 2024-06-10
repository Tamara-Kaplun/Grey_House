# Серый Дом

Этот проект визуализирует впечатление от романа "Дом в котором".

> #
>На нейтральной территории между двумя мирами — зубцов и пустырей — стоит Дом. Его называют Серым. Он стар и по возрасту ближе к пустырям — захоронениям его ровесников. Он одинок — другие дома сторонятся его — и не похож на >зубец, потому что не тянется вверх. В нем три этажа, фасад смотрит на трассу, у него тоже есть двор — длинный прямоугольник, обнесенный сеткой. Когда-то он был белым. Теперь он серый спереди и желтый с внутренней, дворовой >стороны. 
>
> *— Мариам Петросян, дом в котором*

## Задача

Создать модель дома, инспирированную прочтением книги. 

## Проблемы

Главная проблема, с которой мы столкнулись - ограничения, накладываемые материалами и оборудованием на творческий процесс. Среди них - неидельные края, оставляемые станком для лазерной резки, видимые слои при печати на 3D принтере, недостаточная яркость светодиодов при данном напряжении. Эти проблемы не решаемы в данной реализации (нужно заменить саму концепцию), однако это позволит нам в дальнейшем учитывать недостатки материлов и методов. 

Анализ предыдущих решений не дал плодотворных результатов, так как материалы и инсрументы разнятся от проекта к проекту.  

## Используемые машины

- Лазерно-гравировальный станок
   Остов дома был вырезан из фанеры и оргстекла. Файлы, использованные для этого находятся в папке [body](https://github.com/Tamara-Kaplun/Grey_House/tree/main/body)
- 3D принтер
  Деревья и шестеренки были напечатаны на 3D принтере. Их модели находятся в папке [3DModels](https://github.com/Tamara-Kaplun/Grey_House/tree/main/3DModels)
  
## Используемые компоненты
- Iskra Uno

  служит для управления электроникой. Скрипт лежит в папке [arduino](https://github.com/Tamara-Kaplun/Grey_House/tree/main/arduino)
- Motor Shield

  позволяет подключть мотор
- светодиоды
- потенциометр

   используется для управления светодиодами и мотором
- мотор

## Результаты
![Фото Дома](https://github.com/Tamara-Kaplun/Grey_House/blob/main/imag/1.jpeg)
![Фото Дома](https://github.com/Tamara-Kaplun/Grey_House/blob/main/imag/4.jpeg)

