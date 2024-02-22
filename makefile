
all: song


song: Song.o
	g++ Song.o -o song



Song.o: Song.cpp
	g++ -c Song.cpp


clean:
	rm -f *.o song

