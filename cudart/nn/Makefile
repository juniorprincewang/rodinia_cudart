include ../util/make.config

LOCAL_CC = gcc -g -O3 -Wall
CC := $(CUDA_DIR)/bin/nvcc

EXE_NN = nn.out
EXE_HURRICANE = hurricane_gen.out

all : $(EXE_NN)  $(EXE_HURRICANE)

clean :
	rm -rf *.o $(EXE_NN) $ $(EXE_HURRICANE) *.ii

$(EXE_NN)  : nn_cuda.cu
	$(CC) -cuda nn_cuda.cu --cudart shared
	$(CC) -o $(EXE_NN)  nn_cuda.cu --cudart shared

clang: $(SRC)
	clang++ nn_cuda.cu -o $(EXE_NN) -I../util --cuda-gpu-arch=sm_30 \
		-I$(CUDA_INC) -L$(CUDA_LIB_DIR) $(CUDA_LIB) -ldl -lrt -pthread -DTIMING

$(EXE_HURRICANE) : hurricane_gen.c
	$(LOCAL_CC) -o $@ $< -lm

#data :
#	mkdir data
#	./gen_dataset.sh
