//--------------------------------------------------------------
//Лист на неделю
//--------------------------------------------------------------

//метки
``            //к месту последнего прыжка в файле
`.            //к месту последнего Change Mode
`^            //к месту последней Insert Mode
`[            //к началу последнего копирования (или правки)
`]            //к концу последнего копирования (или правки)
`<            //к началу последнего Visual Selection
`>            //к концу последнего визуального выделения
//norm
:norm.    //к каждой строке выделения применить команду "."
:norm A;  //тоже самое
//перемещение по изменениям
:changes            //вывести список изменений
g;                  //перейти к месту предыщущего изменения в списке (как `.  )
g,                  //перейти к месту следующего изменения в списке
gi                  //перейти к месту последней вставки (Insert)
//перемещение по ссылкам файлов
:set suffixesadd+=.css      //добавить к списку расширений файлов, по которым можно переходить
//регистр
"zy           //скопировать в регистр «Z»
"zp           //вставить содержимое регистрa «Z»
"_d           //удалить минуя регистр (удалить в Black hole register)
"%p           //имя файла
"#p           //имя и полный путь файла
".p           //последний текст из insert mode
":p           //последнюю команду из командной строки
"/p           //последнюю строку поиска
:reg          //вывести содержимое регистров"

//--------------------------------------------------------------
//Лист редких команд
//--------------------------------------------------------------

//перемещение по экрану
:ju[mps]            //вывести список прыжков
//Visual Mode
<C-g>               //переключает Visual Mode в Select Mode (win-like)
O                   //в Visual Block Mode переходит на начало|конец строки выделения
&                   //повторяет последнее :substitute
//командная строка
:shell      //запустить cmd|bash с возможность выполнить несколько команд
:read !dir  //вставить результат выполнения команды
<C-r><C-w>          //вставить в командную строку слово под курсором
//буферы
:bd8                //удалить 8-й буфер
:1,5bd              //удалить с 1-го по 5-й буферы
args */*.txt        //открыть все *.txt в текущей и всех вложенных папках
//файлы
:fin[d] reset.css   //найти и открыть файл в папках, указаных в $path
:path css/**        //задать $path */
:!md %:h :w         //создаем несуществую папку и сохраняем в нее наш файл
:e!         //переоткрыть файл заново, не сохраняя его
:wall       //сохранить все открытые файлы
//вкладки
<C-w>T              //переместить текущее окно в новую вкладку
:tabo[nly]          //закрыть все вкладки, кроме текущей

//--------------------------------------------------------------------
//Предстоит выучить
//---------------------------------------------------------------------

//макросы
qa            //начать записывать макрос в регистр «A»
@a            //выполнить макрос «A»
@@            //выполнить последний макрос
//приемы написания макросов
qa;.q         //повторяем в макросе последние движения
22qa          //можно не считать сколько раз надо применить макрос
V:norm @a     //применить макрос ко всем строкам выделения
qA j q        //добавить команды в конец макроса (если забыли)
//Как применить макрос ко всем открытым файлам:
:argdo norm @a    //Параллельный способ: быстро, но если будет ошибка, мы этого сразу не заметим
:qA :next q       //Последовательный способ: добавляем :next
                  //долго, но применяя макрос файл за файлом нам легче обнаружить ошибку
//пронумеровать строки файла
:let i=1          //создаем переменную
qi                //начинаем записывать макрос
I<C-r>=i          //вставляем ее значение
:let i += 1       //увеличиваем значение
q VG norm @i      //закрываем запись и применяем макрос
//редактирование содержимого макроса
"ap               //вставить код макроса «A» (вставить из регистра)
                  //теперь макрос можно отредактировать
0"ya$             //применить отредактированый макрос (скопировать обратно в регистр)
