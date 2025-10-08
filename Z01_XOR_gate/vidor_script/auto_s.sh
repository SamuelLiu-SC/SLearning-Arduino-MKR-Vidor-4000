ls -l
echo ----- copy MKRVIDOR4000.ttf
cp -f ../projects/MKRVIDOR4000_template/output_files/MKRVIDOR4000.ttf ./
ls -l
echo ----- convert 
./vidorcvt < MKRVIDOR4000.ttf > app.h
echo ----- copy app.h
cp -f app.h ../sketch/Sketch/
ls -l ../sketch/Sketch/
echo ----- done 
