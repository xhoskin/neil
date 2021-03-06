//--------------------------------------------------------------
// `` Лист на неделю
//---------------------------------------------------------------------
  
//tweaks
cw            // аналогично ciw (если находимся в начале слова)
yw            // аналогично yaw (если находимся в начале слова)
ye            // аналогично yiw (если находимся в начале слова)
<C-R><C-O>-   // вставляет текст не затирая регистр "."

// regexp switchers
\c                //временно включить чувствительность к регистру

// regexp синтаксис
\_s               //пробел или конец строки
<>                //границы слов
%()               //не запоминать содержимое скобок
\v"\zs[.*]\ze"    //найти текст, заключенный в кавычки 
=escape(@u, getcmdtype().'\')    //экранировать все слеши в регистре u


//перемещение по файлам
[a,]a,[A,]A         // перемещение по arglist
[t,]t,[T,]T         // перемещение по tag-list
//..to be continued

qa;.q             //повторяем в макросе последние движения
qA j q            //добавить команды в конец макроса (если забыли)
//Как применить макрос ко всем открытым файлам:
:argdo norm @a    //Параллельный способ: быстро, но если будет ошибка, мы этого сразу не заметим
:qA :next q       //Последовательный способ: добавляем :next
                  //долго, но применяя макрос файл за файлом нам легче обнаружить ошибку

//пронумеровать строки файла
:let i=1          //создаем переменную
:let i+=1         //увеличиваем значение



//--------------------------------------------------------------
// `` Редкие команды
//--------------------------------------------------------------

//история команд
:ju[mps]            //вывести список прыжков
:changes            //вывести список изменений
//Visual Mode
<C-g>               //переключает Visual Mode в Select Mode (win-like)
O                   //в Visual Block Mode переходит на начало|конец строки выделения
//буферы
5<C-^>              //5-й буфер в списке
//командная строка
:sh[ell]      //запустить cmd|bash с возможность выполнить несколько команд
:read !dir  //вставить результат выполнения команды
<C-r><C-w>          //вставить в командную строку слово под курсором
//файлы
args */*.txt        //открыть все *.txt в текущей и всех вложенных папках
:fin[d] reset.css   //найти и открыть файл в папках, указаных в $path
:path css/**        //задать $path */
:!md %:h :w         //создаем несуществую папку и сохраняем в нее наш файл
:e!                 //переоткрыть файл заново, не сохраняя его
//вкладки
<C-w>T              //переместить текущее окно в новую вкладку
:tabo[nly]          //закрыть все вкладки, кроме текущей
//перемещение по изменениям
//метки
``            //к месту последнего прыжка в файле
`.            //к месту последнего Change Mode
`^            //к месту последнего Insert Mode
`[            //к началу последнего копирования (или правки)
`]            //к концу последнего копирования (или правки)
`<            //к началу последнего Visual Selection
`>            //к концу последнего визуального выделения
//регистры
:reg          //вывести содержимое регистров
"_d           //удалить минуя регистр (удалить в Black hole register) 
//стандартные регистры
"             //безымянный регистр (только что удаленный или скопированный текст)
0             //yank-регистр (только что скопированный текст)
*             //буфер обмена
+             //буфер обмена
%             //путь и имя открытого файла 
#             //путь к открытому файлу
/             //последняя строка поиска
:             //последняя Ex-команда
-             //последнее удаление (меньше строки) 
.             //последний вставленный текст

// regexp синтаксис
=escape(@u, getcmdtype().'\')    //экранировать все слеши в регистре u


//--------------------------------------------------------------------
// `` Предстоит выучить
//---------------------------------------------------------------------

// Поиск
let nows | ws     //выкл. или вкл. поиск сначала если достигнут конец файла
:%s///gn          //флаг /n - сосчитать количество вхождений в файле
/; /e             //флаг /e - курсор будет находится на конце вхождения (по умолч. на начале)
//                //повторить последнюю строку поиска вперед 
??                //повторить последнюю строку поиска назад
//e               //повторить посл. поиск, но курсор будет на конце вхождения

// Замена
"используй q/ чтоб создавать сложные регекспы методом итераций"
s//{change-text}/      //заменить все вхождения последней строки поиска на нужный текст
%s/set/let/gc     //флаг /c - спрашивать перед каждой заменой
q                 //quit - выйти из режима замен
l                 //last - заменить это вхождение и выйти
a                 //all — заменить все вхождения
<C-e>             //прокрутить экран вверх
<C-y>             //прокрутить экран вниз 

%s//\=@0/g        //заменить на содержимое регистра 0
g&                //повторить послендюю команду замены ко всему файлу
:&&               //повторить послендюю команду замены
:%s//\=submatch(0)-1/g      //произвести арифметические действия с найденным числом

:%s/\v(<man>|<dog>)/\={"dog":"man","man":"dog"}[submatch(1)]/g    //заменить "man" на "dog", "dog" на "man"
set hidden                  //разрешает перемещаться по буферам не сохраняя
:argdo %s//Practical/g      //заменить во всех открытых файлах
:argdo %s//Practical/ge     //флаг /c - не показывать сообщения об ошибках
