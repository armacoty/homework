echo building...
for i in *.cpp;
do
	echo compiling $i
	g++ $i #-o ${i}.out
done
