CC=g++

todo: FracClient.cpp Fraction.cpp 
	$(CC) -o FracClient FracClient.cpp Fraction.cpp
