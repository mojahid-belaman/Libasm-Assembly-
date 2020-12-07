nasm -f macho64 filename.s
ld fiename.o -o outputfile -macosx_version_min 10.13 -lSystem
./outputfile

nasm -f macho64 hello.s && ld -macosx_version_min 10.7.0 -lSystem -o hello hello.o && ./hello 