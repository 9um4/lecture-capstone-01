# 컴파일러와 플래그 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 타겟 이름
TARGET = multimap

# 소스 파일
SRCS = multimap.cpp ../utils/file.cpp ../utils/multimap.cpp ../utils/time.cpp

# 헤더 파일
HEADERS = ../utils/file.h ../utils/multimap.h ../utils/time.h

# 빌드 대상
$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 클린 명령
clean:
	rm -f $(TARGET)

# 자동 실행
auto-run: clean $(TARGET)
	./$(TARGET)