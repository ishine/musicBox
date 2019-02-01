BIN_NAME = mozart
CC = aarch64-linux-gnu-c++ -std=c++11
CFLAGS = #-O2
DBUG = -g
INCLUDE = -I./out/include/ -I./three -I./utils -I.  -I./logApi/ -I./PlayBackAudio/ -I./AudioService
LD_FLAG = -L./out/lib
LIBS = -lasound -lpthread -lTwirlingCapture -lTwirlingWakeupNN -lwiringPi -lcurl -lsqlite3 -llog4cpp
OBJS = mozart.o ./logApi/log.o MicDataSource/MicDataSource.o ./AudioService/AsrService.o ./AudioService/AsrLauncher.o \
	AudioService/AudioPreprocessDispatcher.o  AudioService/IWakeupService.o \
	AudioService/WakeupEvent.o AudioService/LedService.o  \
	api/BaiduVoice.o api/TokenHolder.o api/TtsResult.o api/TwirlingVad.o \
	utils/util.o utils/fifo.o utils/serialControl.o AudioService/DeviceInfo.o 
DEP_DIR = ./MicDataSource ./AudioService ./api ./utils ./logApi
ADDR=pi@192.168.6.125
.PHONY : clean
all: dep $(BIN_NAME)

.c.o:
	$(CC) $(DBUG) -c $(CFLAGS)  $(INCLUDE) $<  
.cpp.o:
	$(CC) $(DBUG) -c $(CFLAGS)  $(INCLUDE) $<  
dep:
	$(foreach N, $(DEP_DIR),make -C $(N);)

$(BIN_NAME) : $(OBJS)
	$(CC) $(DBUG) -o $(BIN_NAME) $(OBJS) $(LD_FLAG) $(LIBS) $(INCLUDE)

alsa-record-example : $(OBJS)
	
test:
	-rm -f test
	$(CC) -o test ./test.c $(INCLUDE) $(LD_FLAG) $(CFLAGS) -lasound 
clean :
	$(foreach N, $(DEP_DIR),make clean -C $(N);)
	-rm -f $(OBJS) $(BIN_NAME)

install: all
	scp ./mozart $(ADDR):~/workspace/mozart
	scp ./run.sh $(ADDR):~/workspace/mozart
	scp ./mozart_script $(ADDR):~/workspace/mozart
	scp ./out/lib/libTwirlingCapture.so $(ADDR):~/workspace/mozart
	scp ./out/lib/libWakeup.so $(ADDR):~/workspace/mozart
	scp ./out/lib/libTwirlingWakeupNN.so $(ADDR):~/workspace/mozart
	scp ./out/lib/libwiringPi.so $(ADDR):~/workspace/mozart
	scp ./out/lib/libcurl.so.4.5.0 $(ADDR):~/workspace/mozart
	scp ./hmm/keywordslist.txt $(ADDR):~/workspace/mozart/
	scp ./hmm/wake.dict $(ADDR):~/workspace/mozart/
	scp ./hmm/* $(ADDR):~/workspace/mozart/hmm