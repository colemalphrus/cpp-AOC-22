
run1:
	g++ -std=c++20 -arch arm64 ./Day1/main.cpp -o output_executable
	./output_executable
	rm ./output_executable

run2:
	g++ -std=c++20 -arch arm64 ./Day2/main.cpp -o output_executable
	./output_executable
	rm ./output_executable

run3:
	g++ -std=c++20 -arch arm64 ./Day3/main.cpp -o output_executable
	./output_executable
	rm ./output_executable