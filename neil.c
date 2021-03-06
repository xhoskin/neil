//--------------------------------------------------------------------------------------
// `` Содержание
//--------------------------------------------------------------------------------------

2-1. The Vim Way
2-3. Insert mode 
2-4. Visual mode 
2-5. Command-Line mode
3-1. Управление открытыми файлами                                                                                       
3-2. Открытие файлов и сохранение их на диск
4-1. Перемещение по файлу
4-2. Перемещение между несколькими файлами
5-1. Копирование и вставка
5-2. Макросы
5-1. Регулярные выражения в vim
5-2. Поиск
5-3. Замена
5-4. Global
6-3. Поиск по проекту
6-1. Ctags

A-1. netrw
A-2. Unimpared plugin
A-3. fugitive


//--------------------------------------------------------------------------------------
// `` netrw
//--------------------------------------------------------------------------------------

//отображение
a         //скрыть|показать скрытые файлы
i         //сменить режим отбражения
//папки и файлы
c         //сделать открытую папку текущей (pwd)
d         //создать папку
%         //создать файл
D         //удалить 
R         //переименовать|переместить
//открытие
o         //[open] открыть файл в новом сплите, скрыв редактор
p         //[preview] открыть файл в новом сплите, не скрывая редактор
P         //открыть файл в том же окне, что и редактор (как Enter)
t         //открыть файл в новой вкладке
u         //назад по истории
U         //вперед по истории
v         //открыть в вертикальном сплите
x         //открыть ассоциированой программой
//мышка
rb        //удалить
s-lm      //пометить
//закладки
mb        //создать закладку
gb        //перейти к последней закладке
qb        //список закладок
2gb       //перейти кo 2-й закладке
2gB       //удалить 2-ю закладку



//--------------------------------------------------------------------------------------
// `` Unimpared plugin
//--------------------------------------------------------------------------------------

//операции со строками
[<Space>   //вставить пустую строку НАД текущей
]<Space>   //вставить пустую строку ПОД текущей 
10[<Space> //вставить 10 пустых строк НАД текущей

//кодирование строк
[y | ]y    // C кодирование|раскодирование
           // Экранирование "кавычек" и слешей
[x | ]x    // XML кодирование|раскодирование
           // <foo bar="baz"> => &lt;foo bar=&quot;baz&quot;&gt;
[u | ]u    // URL кодирование|раскодирование
           // foo bar => foo%20bar

//перемещение по файлам
[a         // :previous     (пред. в arglist)
]a         // :next         (след. в arglist)
[A         // :first        (перв. в arglist)
]A         // :last         (посл. в arglist)
[b         // :bprevious    (пред. буфер)
]b         // :bnext        (след. буфер)
[B         // :bfirst       (перв. буфер)
]B         // :blast        (посл. буфер)
[q         // :cprevious    (пред. в quickfix-list)
]q         // :cnext        (след. в quickfix-list)
[Q         // :cfirst       (перв. в quickfix-list)
]Q         // :clast        (посл. в quickfix-list)
[t         // :tprevious    (пред. в tag-list)
]t         // :tnext        (след. в tag-list)
[T         // :tfirst       (перв. в tag-list)
]T         // :tlast        (посл. в tag-list)
//..to be continued



//--------------------------------------------------------------------------------------
// `` fugitive
//--------------------------------------------------------------------------------------

:Gstatus                //git status
//В окне git status
-             // :Git add | :Git reset (staged files)
D             // git diff vertical split
dv            // git diff vertical split
ds            // git diff horizontal split
dp            // git unified diff
O             // :Gtabedit
o             // :Gsplit
S             // :Gvsplit
q             // close status
R             // reload status
cc            // :Gcommit

:Glog         // загружает все изменения файла в quickfix
:Gwrite       // сохраняет файл и делает с ним git add
:Gmove {путь} // переименовать/переместить открытый файл и добавить его
:Gremove      // удалить открытый файл


//..to be continued
=======
B-1. Tweaks
>>>>>>> 7849c3e85e1808d0fa1ceb4c2b0c167c2f15e676


//--------------------------------------------------------------------------------------
// `` project
//--------------------------------------------------------------------------------------
\C-Enter> | \o        //открыть файл, закрыв все остальные окна
<S-Enter> | \s        //открыть в горизонтальном сплите
\S                    //открыть все файлы текущего уровня в гор. сплитах
\v                    //открыть файл но остаться в окне проектов (не работает!) 
<Space>               //растянуть|стянуть ширину проектного окна

\I                    //показать полный путь к файлу под курсором
\w                    //закрыть все файлы текущего уровня
\W                    //закрыть все файлы текущего уровня и всех подуровней
\e                    //перейти в окружение (cd) проекта под курсором
\E                    //открыть эту папку в netrw

//клавиши мыши
<S-2-LeftMouse>       //открыть в горизонтальном сплите
<C-2-LeftMouse>       //открыть файл, закрыв все остальные окна
<RightMouse>          //растянуть|стянуть ширину проектного окна


//--------------------------------------------------------------------------------------
// `` 2-1. The Vim Way
//--------------------------------------------------------------------------------------

/* tip 2 */
s                   // заменить символ (или несколько)
S                   // заменить всю строку
C                   // заменить все до конца строки

/* change 3 */
;                   //повторяет jпредыдущее f или t

/* tip 4 */
,                   //повторяет f или t в обратном направлении
&                   //повторяет последнее :substitute


//--------------------------------------------------------------------------------------
// 2-2. Normal mode 
//--------------------------------------------------------------------------------------

/* tip 9 */
Если есть "несколько" способов сделать что-то (заменить слово, находясь на 
его конце: dbx|bdw|daw), выбирай тот способ, который можно повторить одним
нажатием "." (daw) 

/* tip 10 */
<C-a>|<C-x>         //увеличить|уменьшить ближайшее число в строке

/* tip 12 */
g~                  //инвертировать регистр
gu                  //в нижний регистр
gU                  //в верхний регистр
=                   //autoindent
>ap                 //сдвинуть отступ всему абзацу



//--------------------------------------------------------------------------------------
// `` 2-3. Insert mode 
//--------------------------------------------------------------------------------------

/* tip 13 */
В режиме вставки (или командной строке vim):
<C-h>               //удалить символ перед кареткой(backspace)
<C-w>               //удалить слово перед кареткой
<C-u>               //удалить все символы перед кареткой
<C-f>|<C-b>         //вправо|влево
<C-a>|<C-e>         //в начало|конец

/* tip 14 */
i<C-o>              //Insert Normal mode: дает выполнить одну команду из Normal mode,
                    //потом переводит обратно в Insert mode
zz                  //перематывает текущую строку в центр экрана

/* tip 15 */
//В режиме вставки (или командной строке vim):
<C-r>*              //вставить текст из буфера обмена
<C-r>0              //вставить текст из безымянного регистра
//Если вставить <C-R> большой текст, то будут ошибки из-за автоотступов.
//Потому большой текст лучше вставлять так:
<C-r><C-p>*         //вставить большой кусок текста

/* tip 16 */
<C-r>=              //вставить результат выражения

/* tip 17 */
<C-v>u00ab          //вставить знак с unicode-кодом u00ab - "«" 
<C-v>u00bf          //вставить знак с unicode-кодом u00bf - "»" 
<C-v>171            //вставить знак с ascii-кодом 171 - "«" 
<C-v>187            //вставить знак с ascii-кодом 187 - "»" 
ga                  //получить код символа [get ascii]

/* tip 18 */
Диграф (digraph) - пара символов для вставки нестандартных знаков, которую
легче запомнить, чем unicode или ascii-код
<C-K>?I     	 //вставить знак, обозначаемый диграфом "?I" - ¿
<C-K><<     	 //вставить знак, обозначаемый диграфом "<<" - «
:digraphs   	 //вывести таблицу диграфов
:h :digraphs	 //справка о диграфах
//ТИПОГРАФИЧЕСКИЕ ЗНАКИ
<< - «  	     //открывающаяся кавычка
>> - »  	     //закрывающаяся кавычка
M- - —  	     //длинное тире
Co - ©  	     //копирайт     
Rg - ®  	     //все права защищены
?I - ¿  	     //перевернутый восклицательный знак
!I - ¡  	     //перевернутый вопросительный знак
//ПЕРЕНОС СЛОВ
NS - ' '       //неразрывный пробел (!)
-- - ­         //мягкий перенос (?)
SE - §         //параграф
.M - ·         //точка посередине строки
//МАТЕМАТИЧЕСКИЕ ЗНАКИ
DG - °         //градус
+- - ±         //плюс-минус
*X - ×         //знак умножения
2S - ²         //степень двойки
3S - ³         //степень тройки
14 - ¼         //дробь "одна четвертая"
12 - ½         //дробь "одна вторая"
34 - ¾         //дробь "три четверти"
//ВАЛЮТА
Pd - £         //знак фунта
Ct - ¢         //знак цента
Ye - ¥         //знак йены

/* tip 19 */
R              //режим замены (как режим вставки)




//--------------------------------------------------------------------------------------
// `` 2-4. Visual mode 
//--------------------------------------------------------------------------------------

/* tip 20 */
<C-g>          //переключает Visual Mode в Select Mode, 
               //в нем при нажатии выделеный текст заменится 
               //на символ нажатой клавиши и переключится в режим вставки

/* tip 21 */
v             //посимвольный Visual Mode 
V             //построчный Visual Mode 
<C-v>         //блочный Visual Mode (квадратное выделение, или выделение колонок)
//войдя в один вариант Visual Mode, можно переключиться на другой
gv            //заново выделить последнее визуальное выделение
o             //перейти на другой конец визуального выделения

/* tip 23 */
vit           //выделить содержимое тега (in tag);
viw           //выделить содержимое тега (in слово);
U             //в Visual Mode: перевести в верхний регистр;

/* tip 24 */
r-            //в Visual Mode: заменить каждый символ в выделении на "-"

/* tip 25 */
c             //в Visual Block Mode: заменить каждую строчку выделения на введенный текст

/* tip 26 */
<C-v>$A;      //поставить в конце каждой строки ";"



//--------------------------------------------------------------------------------------
// `` 2-5. Command-Line mode
//--------------------------------------------------------------------------------------

/* tip 28 */
//диапазоны применения команд
:1           //применить команду к 1-й строчке файла
:.           //к текущeй строчке файла;
:$           //к последнeй строчке файла;
:%           //ко всему файлу;
:1,5         //с 1-й по 5-ю строчки файла;
:0,$         //с первой по текущую строчки файла;
:.,$         //с текущей по последнюю строчки файла;
:.,.+3       //к трем строкам после текущей строчки;
:/<html>/,/<\/html>/p     //ко всем строкам, начиная со строки, содержащей <html>;
                          //заканчивая строкой, содержащей </html>;

/* hint 29 */
:5t.        //скопировать (copy &to) 5-ю строку после текущей 
:t$         //скопировать текущую строку в конец файла
:t.         //продублировать текущую строку (как yyp, но не затирая стандартный буфер)
:5m.        //скопировать (copy &to) 5-ю строку после текущей 

/* tip 30 */
V}:normal.  //к каждой строке выделения применить команду "." (вставить ";" в конец)
V}:norm.    //тоже самое
V}:norm A;  //тоже самое

/* tip 31 */
@:          //повторить последнюю Ex-команду
<C-d>       //в командной строке: показать список возможных значений
<C-r><C-w>  //вставить в командную строку слово под курсором

/* tip 34 */
q:          //показать окно с историей команд
q/          //показать окно с историей поисков
<C-f>       //переключиться из командной строки в окно с историей команд

/* tip 35 */
:sh[ell]      //запустить cmd|bash с возможность выполнить несколько команд
:r[ead] !dir  //вставить результат выполнения команды



//--------------------------------------------------------------------------------------
// `` 3-1. Управление открытыми файлами                                                                                       
//--------------------------------------------------------------------------------------

/* tip 36 */
Буфер - открытый файл
//переключение буферов------------------------------------------------------------------
:ls                 //список буферов (открытых файлов)
:bn[next]           //следующий буфер
:bp[revious]        //предыдущий буфер
:bf[irst]           //первый буфер в списке
:bl[ast]            //последний буфер в списке
:b5                 //5-й буфер в списке
5<C-^>              //5-й буфер в списке
:b de               //перекл. на буфер, имя файла которого начинается на "de"
:bn!                //перекл. буфер даже если файл не сохранен, ставит 'h'
[b          //предыдущий буфер
]b          //следущий буфер
[B          //первый буфер
]B          //последний буфер
//Обозначения в списке буферов----------------------------------------------------------
%           //буфер открыт в текущем окне
a	          //активный буфер - загрузился в память и отображается в одном из окон
h	          //скрытый буфер - загрузился в память, но нигде не отображается
#           //файл, на который мы переключимся по C-^
+           //измененный буфер
x           //ошибки записи в буфере
//удаление буферов----------------------------------------------------------------------
:bd8                //удалить 8-й буфер
:bd8                //удалить 8-й буфер
:1,5bd              //удалить с 1-го по 5-й буферы
:bd 1 5 8           //удалить 1-й, 5-й и 8-й буферы
//args - список аргументов--------------------------------------------------------------
args *.txt          //открыть все *.txt в текущей папке
args */*.txt        //открыть все *.txt в текущей подпапках одним уровнем ниже
args **/*.txt       //открыть все *.txt в текущей и всех вложенных папках

/* tip 39 */
<C-v>s              //:sp
<C-v>v              //:vs
<C-v>o              //[only] закрыть все окна, кроме текущего
//Изменение размеров окон---------------------------------------------------------------
<C-w>=              //выровнять ширину и высоту всех окон
<C-w>_              //максимизировать высоту текущего окна
<C-w>|              //максимизировать ширину текущего окна
15<C-w>_            //установить высоту окна в 15 строк
50<C-w>|            //установить ширину окна в 50 символов

/* tip 40 */
:tabe[dit]          //создать новую вкладку
<C-w>T              //переместить текущее окно в новую вкладку
:tabc[lose]         //закрыть вкладку
:tabo[nly]          //закрыть все вкладки, кроме текущей



//--------------------------------------------------------------------------------------
// `` 3-2. Открытие файлов и сохранение их на диск
//--------------------------------------------------------------------------------------
/* tip 41 */
:pwd                //[print working directory] показать путь к текущей папке

/* tip 42 */
:fin[d] relet.css   //найти и открыть файл в папках, указаных в $path
:path css/**        //задать $path

/* tip 43 */
:e.                 //открыть netrw в текущем окне (рабочая директория)
:E                  //открыть netrw в текущем окне (папка открытого файла)
:Sex                //горизонтальный split netrw в текущем окне (папка открытого файла)
:Vex                //вертикальный split netrw в текущем окне (папка открытого файла)
<C-^>               //вернуться обратно в открытый файл | netrw [перевернуть игральную карту]
:40Se               //открыть netrw в горизонтальном окне шириной 40 строк

/* tip 44 */
:edit drugs/dont/go.txt     //открываем файл в несуществующей папке
                            //нам не дадут его сохранить
:!md %:h :w                 //создаем несуществую папку и сохраняем в нее наш файл



//--------------------------------------------------------------------------------------
// `` 4-1. Перемещение по файлу
//--------------------------------------------------------------------------------------

/* tip 47 */
g{j|k|0|^|$}        //движение по отображаемым строкам (display line)

/* tip 48 */
e                   //к концу текущего слова
ge                  //к концу предыдущего слова

/* tip 49 */
Перемещаясь с помощью f|t лучше выбирать буквы, которые встречаются реже.

/* tip 50 */
drugs dont go txt   //пусть дана эта строка 
d/txt               //удалить все до символов "txt"

/* tip 51 */
va(                 //выделить текст вокруг [Around] скобок
vi(                 //выделить текст вокруг [Inside] скобок
vib                 //выделить внутри "()" (круглых скобок)
viB                 //выделить внутри "{}" (фигурных скобок)
yib                 //скопировать содержимое скобок
//уже находясь в режиме выделения
a(                  //выделить все вокруг внешних скобок, которые оборачивают выделенный текст
i(                  //выделить все внутри внешних скобок, которые оборачивают выделенный текст

/* tip 52 */
iw                  //текущее слово
aw                  //текущее слово + пробел
is                  //текущее предложение
as                  //текущее предложение + пробел
ip                  //текущий параграф
ap                  //текущий параграф + пустая строка
//удалять лучше с помощь daw, заменять ciw

/* tip 53 */
ma                  //поставить метку "a" (доступна только в этом буфере)
mA                  //поставить метку "A" (доступна из любого буфера)
'a                  //перейти к строке с меткой "a"
`a                  //перейти к точному месту с меткой "a"
``            //к месту последнего прыжка в файле
`.            //к месту последнего изменения
`^            //к месту последней правки
`[            //к началу последнего копирования (или правки)
`]            //к концу последнего копирования (или правки)
`<            //к началу последнего визуального выделения
`>            //к концу последнего визуального выделения

/* tip 54 */
%                   //перейти к открывающей|закрывающей скобке 
%                   //находясь на <body> перейдет к </body>
s(                  //обернуть выделение в скобки [SURROUND]
ds(                 //удалить скобки [DELETe SURROUNDINGS]
cs([                //заменить круглые скобки на квадратные [CHANGE SURROUNDINGS]
ysw(                //обернуть слово в скобки
yys(                //обернуть текущую строку в скобки
yyS(                //обернуть текущую строку в скобки и выровнять отступы



//--------------------------------------------------------------------------------------
// `` 4-2. Перемещение между несколькими файлами
//--------------------------------------------------------------------------------------

/* tip 55 */
:ju[mps]            //вывести список прыжков
<C-o>               //назад по списку прыжков
<C-i>               //вперед по списку прыжков
H/M/L               //прыгнуть к верху/середине/низу экрана

/* tip 56 */
:changes            //вывести список изменений
g;                  //перейти к месту предыщущего изменения в списке (как `.  )
g,                  //перейти к месту следующего изменения в списке
gi                  //перейти к месту последней вставки (Insert)

/* tip 57 */
:gf                         //перейти к файлу по ссылке под курсором
:set suffixesadd+=.css      //добавить к списку расширений файлов, по которым можно переходить

/* tip 58 */
:mA                 //ставь глобальную метку если будешь прыгать по многим файлам
:`A                 //чтобы потом вернуться туда, откуда начал



//--------------------------------------------------------------------------------------
// `` 5-1. Копирование и вставка
//--------------------------------------------------------------------------------------

/* tip 60 */
:reg          //вывести содержимое регистров
"_d           //удалить минуя регистр (удалить в Black hole register)
"xp           //вставить регистр x
<C-r>x        //вставить регистр x из режима вставки
//стандартные регистры
"             //безымянный регистр (только что удаленный или скопированный текст) "
0             //yank-регистр (только что скопированный текст)
*             //буфер обмена
+             //буфер обмена
%             //путь и имя файла в текущем окне
#             //путь и имя файла, к которому мы перейдем по <C-^>
/             //последняя строка поиска
:             //последняя Ex-команда
-             //последнее маленькое удаление (меньше строки) 
.             //последний вставленный текст



//--------------------------------------------------------------------------------------
// `` 5-2. Макросы
//--------------------------------------------------------------------------------------

/* tip 64 */
qa            //начать записывать макрос в регистр «A»
@a            //выполнить макрос «A»
@@            //выполнить последний макрос

/* tip 64 */
//Практика Normalize, Strike, Abort 
Normalize     //макрос должен выполняться независимо от положения курсора (начинай с 0, n или gg)
Strike        //используй f и t, вместо l и k, макрос будет более универсальным
Abort         //макрос не выполнится если motion не сработает

/* tip 65 */
qa;.q         //повторяем в макросе последние движения
22qa          //применяем заведомо больше раз чем надо

/* tip 66 */
V:norm @a     //применить макрос ко всем строкам выделения

/* tip 67 */
qa A; q       //создали макрос, но забыли кое-что
qA j q        //добавили то, что забыли (tack, ammend to macro)

/* tip 69 */
:e!               //переоткрыть файл заново, не сохраняя его
:wall             //сохранить все открытые файлы
//Как применить макрос ко всем открытым файлам:
:argdo norm @a    //Параллельный способ: быстро, но если будет ошибка, мы этого сразу не заметим
:qA :next q       //Последовательный способ: добавляем :next
                  //долго, но применяя макрос файл за файлом нам легче обнаружить ошибку
/* tip 70 */      
//пронумеровать строки файла
:let i=1          //создаем переменную
qi                //начинаем записывать макрос
I<C-r>=i          //вставляем ее значение
:let i += 1       //увеличиваем значение
q VG norm @i      //закрываем запись и применяем макрос

/* tip 71 */      
//редактирование содержимого макроса
"ap               //вставить код макроса «A» (вставить из регистра)
                  //теперь макрос можно отредактировать
0"ya$             //применить отредактированый макрос (скопировать обратно в регистр)
  


//--------------------------------------------------------------------------------------
// `` 5-1. Регулярные выражения в vim
//--------------------------------------------------------------------------------------

/* tip 72 */      
\c                //временно включить чувствительность к регистру

/* tip 73 */      
//в vim-регекспах надо экранировать () и {} чтобы они стали спецсимволами
\v                //временно включить perl-синтаксис регекспов [very magic]

/* tip 74 */      
\V                //временно отключить все спецсимволы [very nomagic]

/* tip 75 */      
\_s               //пробел или конец строки

/* tip 76 */      
<>                //границы слов
%()               //не запоминать содержимое скобок

/* tip 77 */      
\zs | \ze         //начало и конец паттерна (аналог perl lookaround expression)
\v"\zs[.*]\ze"    //найти текст, заключенный в кавычки 

/* tip 78 */
=escape(@u, getcmdtype().'\')    //экранировать все слеши в регистре u



//--------------------------------------------------------------------------------------
// `` 5-2. Поиск
//--------------------------------------------------------------------------------------

/* tip 79 */
let nows | ws     //выкл. или вкл. поиск сначала если достигнут конец файла

/* tip 82 */
:%s///gn          //флаг /n - сосчитать количество вхождений в файле

/* tip 83 */
/; /e             //флаг /e - курсор будет находится на конце вхождения (по умолч. на начале)

/* tip 84 */
//                //повторить последнюю строку поиска вперед 
??                //повторить последнюю строку поиска назад
//e               //повторить посл. поиск, но курсор будет на конце вхождения



//--------------------------------------------------------------------------------------
// `` 5-3. Замена
//--------------------------------------------------------------------------------------

/* tip 85 */
"используй q/ чтоб создавать сложные регекспы методом итераций"
s//{change-text}/      //заменить все вхождения последней строки поиска на нужный текст

/* change 89 */
%s/set/let/gc     //флаг /c - спрашивать перед каждой заменой
q                 //quit - выйти из режима замен
l                 //last - заменить это вхождение и выйти
a                 //all — заменить все вхождения
<C-e>             //прокрутить экран вверх
<C-y>             //прокрутить экран вниз 
/* tip 91 */
%s//\=@0/g        //заменить на содержимое регистра 0

/* tip 92 */
g&                //повторить послендюю команду замены ко всему файлу
:&&               //повторить послендюю команду замены

/* tip 94 */
:%s//\=submatch(0)-1/g      //произвести арифметические действия с найденным числом

/* tip 95 */
:%s/\v(<man>|<dog>)/\={"dog":"man","man":"dog"}[submatch(1)]/g    //заменить "man" на "dog", "dog" на "man"

/* tip 96 */
//поиск и замена в нескольких файлах
set hidden                  //разрешает перемещаться по буферам не сохраняя
:argdo %s//Practical/g      //заменить во всех открытых файлах
:argdo %s//Practical/ge     //флаг /c - не показывать сообщения об ошибках
:Qargs                      //перенести файлы из quickfix-list в args-list
:args update                //сохранить файлы, которые были изменены
:Qargs | argdo %s//Practical/g | update       // выполнить все вышеперечисленные команды



//--------------------------------------------------------------------------------------
// `` 5-4. Global
//--------------------------------------------------------------------------------------

/* tip 97 */
:g[lobal]//[cmd]    //применить команду ко всем строкам, подходящим к регекспу
:v[global]//[cmd]   //применить команду ко всем строкам, НЕ подходящим к регекспу 

/* tip 98 */
:g/href/d    //удалить все строки, содержащие href
:v/href/d    //удалить все строки, не содержащие href

/* tip 98 */
g/\d-\d              //вывести содержание этого файла (print - команда по умолчанию)
g/\d-\d/yank A       //скопировать содержание в регистр "a (yank A - присоединить к регистру A)
g/\d-\d/t$           //вставить содержание в конец файла (t$ - копировать в конец)



//--------------------------------------------------------------------------------------
// `` 6-1. Ctags
//-------------------------------------------------------------------------------------- 

/* tip 102 */
:!ctags -R                      //переиндексировать проект
:nnoremap <f5> :!ctags -R<CR>   //вешаем индексирование на клавишу
:autocmd BufWritePost * call system("ctags -R")     //индексируем при сохр. файла
//в ссылке написано как индексировать при git-commit
http://tbaggery.com/2011/08/08/effortless-ctags-with-git.html 

/* tip 103 */
<C-]>               //перейти к определению класса
<C-t>               //перепрыгнуть обратно по ctags-переходам
g]                  //показать taglist - список определений класса (если их несколько)
[t,]t,[T,]T         //перемещение по taglist
:ts[elect]          //снова показать taglist
:ta[g] {keyword}    //перепрыгнуть к совпадению тега 
:tj[ump] {keyword}  //выбрать из списка совпадений тега




//--------------------------------------------------------------------------------------
// `` 6-3. Поиск по проекту
//-------------------------------------------------------------------------------------- 

/* tip 108 */
grep container *.less     //поиск по файлам, используя внешний grep



//--------------------------------------------------------------------------------------
// `` A-1. netrw
//--------------------------------------------------------------------------------------

//отображение
a         //скрыть|показать скрытые файлы
i         //сменить режим отбражения
//папки и файлы
c         //сделать открытую папку текущей (pwd)
d         //создать папку
%         //создать файл
D         //удалить 
R         //переименовать|переместить
//открытие
o         //[open] открыть файл в новом сплите, скрыв редактор
p         //[preview] открыть файл в новом сплите, не скрывая редактор
P         //открыть файл в том же окне, что и редактор (как Enter)
t         //открыть файл в новой вкладке
u         //назад по истории
U         //вперед по истории
v         //открыть в вертикальном сплите
x         //открыть ассоциированой программой
//мышка
rb        //удалить
s-lm      //пометить
//закладки
mb        //создать закладку
gb        //перейти к последней закладке
qb        //список закладок
2gb       //перейти кo 2-й закладке
2gB       //удалить 2-ю закладку



//--------------------------------------------------------------------------------------
// `` A-2. Unimpared plugin
//--------------------------------------------------------------------------------------

//операции со строками
[<Space>   //вставить пустую строку НАД текущей
]<Space>   //вставить пустую строку ПОД текущей 
10[<Space> //вставить 10 пустых строк НАД текущей

//кодирование строк
[y | ]y    // C кодирование|раскодирование
           // Экранирование "кавычек" и слешей
[x | ]x    // XML кодирование|раскодирование
           // <foo bar="baz"> => &lt;foo bar=&quot;baz&quot;&gt;
[u | ]u    // URL кодирование|раскодирование
           // foo bar => foo%20bar

//перемещение по файлам
[a         // :previous     (пред. в arglist)
]a         // :next         (след. в arglist)
[A         // :first        (перв. в arglist)
]A         // :last         (посл. в arglist)
[b         // :bprevious    (пред. буфер)
]b         // :bnext        (след. буфер)
[B         // :bfirst       (перв. буфер)
]B         // :blast        (посл. буфер)
[q         // :cprevious    (пред. в quickfix-list)
]q         // :cnext        (след. в quickfix-list)
[Q         // :cfirst       (перв. в quickfix-list)
]Q         // :clast        (посл. в quickfix-list)
[t         // :tprevious    (пред. в tag-list)
]t         // :tnext        (след. в tag-list)
[T         // :tfirst       (перв. в tag-list)
]T         // :tlast        (посл. в tag-list)
//..to be continued



//--------------------------------------------------------------------------------------
// `` A-3. fugitive
//--------------------------------------------------------------------------------------

:Gstatus                //git status
//В окне git status
-             // :Git add | :Git reset (staged files)
D             // git diff vertical split
dv            // git diff vertical split
ds            // git diff horizontal split
dp            // git unified diff
O             // :Gtabedit
o             // :Gsplit
S             // :Gvsplit
q             // close status
R             // reload status
cc            // :Gcommit

:Glog         // загружает все изменения файла в quickfix
//..to be continued



//--------------------------------------------------------------------------------------
// `` B-1. Tweaks
// --------------------------------------------------------------------------------------

cw            // аналогично ciw (если находимся в начале слова)
yw            // аналогично yaw (если находимся в начале слова)
ye            // аналогично yiw (если находимся в начале слова)

<C-R><C-O>-   // вставляет текст не затирая регистр "."

