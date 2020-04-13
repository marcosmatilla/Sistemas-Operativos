#bin/bash.rc
cp programVerySimple ../programVerySimple
cd ..
make clean
make
./Simulator --debugSections= 0 programVerySimple 3 programVerySimple 1 programVerySimple
cd scriptsejercicios/
