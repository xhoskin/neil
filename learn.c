//Первый лист на неделю------------------------------------------------
i<C-o>              //Insert Normal mode: дает выполнить одну команду из Normal mode,
<C-r>*              //вставить текст из буфера обмена
<C-r>0              //вставить текст из безымянного регистра
<C-r><C-p>*         //вставить большой кусок текста

//Второй лист на неделю------------------------------------------------
&                   //повторяет последнее :substitute
?                   //искать назад
R                   //режим замены (как режим вставки)
ga                  //получить код символа [get ascii]

//---------------------------------------------------------------------
//Предстоит выучить
//---------------------------------------------------------------------

//visual mode
<C-g>               //переключает Visual Mode в Select Mode (win-like)
//войдя в один вариант Visual Mode, можно переключиться на другой
o                   //перейти на другой конец визуального выделения
vit                 //выделить содержимое тега (in tag);
viw                 //выделить содержимое тега (in слово);
U                   //в Visual Mode: перевести в верхний регистр;


//диапазоны применения команд
:.                  //к текущeй строчке файла;
:$                  //к последнeй строчке файла;
:0,$                //с первой по текущую строчки файла;
:.,$                //с текущей по последнюю строчки файла;
:.,.+3              //к трем строкам после текущей строчки;
:/<html>/,/<\/html>/p     //ко всем строкам, начиная со строки, содержащей <html>;
                          //заканчивая строкой, содержащей </html>;
:5t.        //скопировать (copy &to) 5-ю строку после текущей 
:t$         //скопировать текущую строку в конец файла
:t.         //продублировать текущую строку (как yyp, но не затирая стандартный буфер)
:5m.        //скопировать (copy &to) 5-ю строку после текущей 
V}:norm.    //к каждой строке выделения применить команду "." (вставить ";" в конец)
V}:norm A;  //тоже самое


//командная строка
<C-d>       //в командной строке: показать список возможных значений
<C-r><C-w>  //вставить в командную строку слово под курсором
q:          //показать окно с историей команд
/:          //показать окно с историей поисков
<C-f>       //переключиться из командной строки в окно с историей команд
:shell      //запустить cmd|bash с возможность выполнить несколько команд
:read !dir  //вставить результат выполнения команды

//буферы
[b          //предыдущий буфер
]b          //следущий буфер
[B          //первый буфер
]B          //последний буфер
:bd8                //удалить 8-й буфер
:1,5bd              //удалить с 1-го по 5-й буферы
args */*.txt        //открыть все *.txt в текущей и всех вложенных папках

//окна
<C-w>=              //выровнять ширину и высоту всех окон
<C-w>_              //максимизировать высоту текущего окна
<C-w>|              //максимизировать ширину текущего окна
15<C-w>_            //установить высоту окна в 15 строк
50<C-w>|            //установить ширину окна в 50 символов

//вкладки
:tabe[dit]          //создать новую вкладку
<C-w>T              //переместить текущее окно в новую вкладку
<C-w>c              //закрыть вкладку
:tabo[nly]          //закрыть все вкладки, кроме текущей

//файлы
:pwd                //[print working directory] показать путь к текущей папке
:fin[d] reset.css   //найти и открыть файл в папках, указаных в $path
:path css/**        //задать $path */
:!md %:h :w         //создаем несуществую папку и сохраняем в нее наш файл

//netrw
:E                  //открыть netrw в текущем окне
:e.                 //открыть netrw в текущем окне
<C-^>               //вернуться обратно в открытый файл | netrw [перевернуть игральную карту]
:40Se               //открыть netrw в горизонтальном окне шириной 40 строк

//перемещение 
g{j|k|0|^|$}        //движение по отображаемым строкам (display line)
e                   //к концу текущего слова
ge                  //к концу предыдущего слова
d/txt               //удалить все до символов "txt"
Перемещаясь с помощью f|t лучше выбирать буквы, которые встречаются реже.
vib                 //выделить внутри "()" (круглых скобок)
viB                 //выделить внутри "{}" (фигурных скобок)
a(                  //выделить все вокруг внешних скобок, которые оборачивают выделенный текст
i(                  //выделить все внутри внешних скобок, которые оборачивают выделенный текст
iw                  //текущее слово
aw                  //текущее слово + пробел
is                  //текущее предложение
as                  //текущее предложение + пробел
ip                  //текущий параграф
ap                  //текущий параграф + пустая строка
//удалять лучше с помощь daw, заменять ciw
