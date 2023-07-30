
run:
	g++ -std=c++20 -arch arm64 ./Day1/main.cpp -o output_executable
	./output_executable
	rm ./output_executable