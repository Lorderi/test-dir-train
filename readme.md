1. Составить команду для баша Читает список процессов Находит по имени процесс notepad.exe Убивает его
kill `ps u | grep 'notepad.exe' | grep -o '[0-9]\{4\}' | head -n 1`

2. Для всех файлов в папке посмотреть размер файла и сохранить эту инфу в log.txt, в который попадут только файлы с расширением .zip (хотя в папке могут быть и другие типы файлов), но не все колонки, а чисто в формате: "имя файла - размер в байтах", тоже в одну строку на баше

find -name "*.txt" -printf '%f - %s\n' > log.txt && cat log.txt

3. Программа на си, которая читает аргументы из командной строки, т.е её можно вызвать допустим ./myprogram 1 5 8
Она просто складывает все числа и пишет их в файл result.txt, если колво аргуменов 1, или в аргументах передали не цифру - выводим ошибку команду составить