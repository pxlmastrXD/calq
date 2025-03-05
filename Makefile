CXX = g++
CXXFLAGS = -Wall -Wextra -O2

.PHONY: build run clean
build:
	@mkdir -p target
	@$(CXX) $(CXXFLAGS) -o target/main
	@echo "Build Complete!"

run: build
	@clear
	@./target/main

clean:
	@rm -rf target