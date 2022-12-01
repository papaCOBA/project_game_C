# Проектная работа по разработке кроссплатформенных программных систем 

Проект выполнен на языке C

# Windows

Чтобы запустить игру в Windows, вам нужно установить MinGW-w64, затем создать файл make.bat в каталоге, где находится ваш исходный код, и записать строки, перечисленные ниже:

- PATH=path to mingw64/bin 
- gcc -std=c99 -Wall -Wpedantic Safe.c

Затем в VS Code откройте терминал и введите:
+ ./make.bat

Запустится приложение a.exe:

![image](https://user-images.githubusercontent.com/78841422/205030657-5097860b-4bc5-4b50-a3d0-4736d7ae218f.png)

# Linux

Для запуска игры на Linux вам необходимо скачать компилятор gcc:

- sudo apt update
- sudo apt install build-essential
Затем скомпилируйте файл с исходным кодом:

- gcc RabbitChase.c -o game где game это имя скомпилированного файла
Затем запустите:

- ./game для запуска игры.

![pmqbNzdQS5f1lXziOHJY2mjgCHecgKIR0meL057N1QsJtbPx5wlwxQkctd0gkSYQEfsa8aNIzsKaVQ_IOULL4wwS](https://user-images.githubusercontent.com/78841422/205079687-0c3c5b22-0a64-4985-8e93-85a8a09dd71c.jpg)

# WEB

Инструкции по установке с использованием emsdk

Основной драйвер Emscripten SDK (emsdk) представляет собой сценарий Python. Вы можете получить его в первый раз с

#Get the emsdk repo

git clone https://github.com/emscripten-core/emsdk.git
#Enter that directory

cd emsdk
Выполните следующие команды emsdk, чтобы получить последние инструменты с GitHub и сделать их активными:

- git pull
- ./emsdk install latest
- ./emsdk activate latest
- source ./emsdk_env.sh
В Windows запустите emsdk вместо ./emsdk и emsdk_env.bat вместо исходного ./emsdk_env.sh.

![03AYtDadoO_8a_hbfEnYohODPOKDNTabZrwfAOdBcpfqyELN4EEMsQuskJgETKlszPHDec3bJQ9l_vNiQJMPokXM](https://user-images.githubusercontent.com/78841422/205080057-4a395448-be62-4a1e-881a-1af3b49daa62.jpg)

# Android

Для запуска игры на Android вам необходимо скачать и установить компилятор C/C++. Затем сохраните файл с исходным кодом из этого репозитория с расширением .c и запустите компилятор.
