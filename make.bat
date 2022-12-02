MyProject : Safe.o Safe.c
	gcc Safe.o -o Safe
	./a.exe
MyProject : Safe.c
	gcc -c Safe.c -o Safe.o
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc Safe.c -s WASM=1 -o pge.html
	npm i http-server -g
runserver:
	  cd ../emrun pge.html