#makefile

include ../util/make.config

CC := $(CUDA_DIR)/bin/nvcc

INCLUDE := $(CUDA_INC)

all: particlefilter_naive particlefilter_float

particlefilter_naive: ex_particle_CUDA_naive_seq.cu
	$(CC) -I$(INCLUDE) -L$(CUDA_LIB_DIR) $(CUDA_LIB) -g -lm -O3 -use_fast_math -arch sm_30 \
		ex_particle_CUDA_naive_seq.cu -o particlefilter_naive.out --cudart shared
	
particlefilter_float: ex_particle_CUDA_float_seq.cu
	$(CC) -I$(INCLUDE) -L$(CUDA_LIB_DIR) $(CUDA_LIB) -g -lm -O3 -use_fast_math -arch sm_30 \
		ex_particle_CUDA_float_seq.cu -o particlefilter_float.out

clean:
	rm particlefilter_naive.out particlefilter_float.out
