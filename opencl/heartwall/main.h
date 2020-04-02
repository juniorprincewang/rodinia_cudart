//==============================================================================
//	DEFINE / INCLUDE
//==============================================================================

#define fp float

#ifdef RD_WG_SIZE_0_0
#define NUMBER_THREADS RD_WG_SIZE_0_0
#elif defined(RD_WG_SIZE_0)
#define NUMBER_THREADS RD_WG_SIZE_0
#elif defined(RD_WG_SIZE)
#define NUMBER_THREADS RD_WG_SIZE
#else
#define NUMBER_THREADS 256
#endif

#define CHECK 37
// #define TEST_CHECKSUM
// #define TEST_OUTPUT
// #define INIT

// need to define these for static allocation of constant memory in GPU,
// because it cannot be allocated dynamically
#define ENDO_POINTS 20
#define EPI_POINTS 31
#define ALL_POINTS 51

//==============================================================================
//	PARAMS_COMMON STRUCTURE
//==============================================================================

typedef struct params_common {

    //==========================================================================
    //	HARDCODED INPUTS FROM MATLAB
    //==========================================================================

    //==========================================================================
    //	UNIQUE PARAMETER STRUCTURE MEMORY SIZE
    //==========================================================================

    int common_change_mem;
    int common_mem;
    int unique_mem;

    //==========================================================================
    //	USER INPUT
    //==========================================================================

    int frames_processed;

    //==========================================================================
    //	CONSTANTS
    //==========================================================================

    int sSize;
    int tSize;
    int maxMove;
    fp alpha;

    //==========================================================================
    //	FRAME
    //==========================================================================

    int no_frames;
    int frame_rows;
    int frame_cols;
    int frame_elem;
    int frame_mem;

    //==========================================================================
    //	ENDO POINTS
    //==========================================================================

    int endoPoints;
    int endo_mem;

    //==========================================================================
    //	EPI POINTS
    //==========================================================================
    int epiPoints;
    int epi_mem;

    //==========================================================================
    //	ALL POINTS
    //==========================================================================

    int allPoints;

    //==========================================================================
    //	End
    //==========================================================================

    //==========================================================================
    //	RIGHT TEMPLATE 	FROM 	TEMPLATE ARRAY
    //==========================================================================

    int in_rows;
    int in_cols;
    int in_elem;
    int in_mem;

    //==========================================================================
    //	IN_POINTER
    //==========================================================================

    int in_pointer_mem;

    //==========================================================================
    // 	AREA AROUND POINT		FROM	FRAME
    //==========================================================================

    int in2_rows;
    int in2_cols;
    int in2_elem;
    int in2_mem;

    //==========================================================================
    //	CONVOLUTION
    //==========================================================================

    int conv_rows;
    int conv_cols;
    int conv_elem;
    int conv_mem;
    int ioffset;
    int joffset;

    //==========================================================================
    //	CUMULATIVE SUM 1
    //==========================================================================

    //==========================================================================
    //	PAD ARRAY, VERTICAL CUMULATIVE SUM
    //==========================================================================

    int in2_pad_add_rows;
    int in2_pad_add_cols;
    int in2_pad_cumv_rows;
    int in2_pad_cumv_cols;
    int in2_pad_cumv_elem;
    int in2_pad_cumv_mem;

    //==========================================================================
    //	SELECTION
    //==========================================================================

    int in2_pad_cumv_sel_rows;
    int in2_pad_cumv_sel_cols;
    int in2_pad_cumv_sel_elem;
    int in2_pad_cumv_sel_mem;
    int in2_pad_cumv_sel_rowlow;
    int in2_pad_cumv_sel_rowhig;
    int in2_pad_cumv_sel_collow;
    int in2_pad_cumv_sel_colhig;

    //==========================================================================
    //	SELECTION 2, SUBTRACTION, HORIZONTAL CUMULATIVE SUM
    //==========================================================================

    int in2_pad_cumv_sel2_rowlow;
    int in2_pad_cumv_sel2_rowhig;
    int in2_pad_cumv_sel2_collow;
    int in2_pad_cumv_sel2_colhig;
    int in2_sub_cumh_rows;
    int in2_sub_cumh_cols;
    int in2_sub_cumh_elem;
    int in2_sub_cumh_mem;

    //==========================================================================
    //	SELECTION
    //==========================================================================

    int in2_sub_cumh_sel_rows;
    int in2_sub_cumh_sel_cols;
    int in2_sub_cumh_sel_elem;
    int in2_sub_cumh_sel_mem;
    int in2_sub_cumh_sel_rowlow;
    int in2_sub_cumh_sel_rowhig;
    int in2_sub_cumh_sel_collow;
    int in2_sub_cumh_sel_colhig;

    //==========================================================================
    //	SELECTION 2, SUBTRACTION
    //==========================================================================

    int in2_sub_cumh_sel2_rowlow;
    int in2_sub_cumh_sel2_rowhig;
    int in2_sub_cumh_sel2_collow;
    int in2_sub_cumh_sel2_colhig;
    int in2_sub2_rows;
    int in2_sub2_cols;
    int in2_sub2_elem;
    int in2_sub2_mem;

    //==========================================================================
    //	End
    //==========================================================================

    //==========================================================================
    //	CUMULATIVE SUM 2
    //==========================================================================

    //==========================================================================
    //	MULTIPLICATION
    //==========================================================================

    int in2_sqr_rows;
    int in2_sqr_cols;
    int in2_sqr_elem;
    int in2_sqr_mem;

    //==========================================================================
    //	SELECTION 2, SUBTRACTION
    //==========================================================================

    int in2_sqr_sub2_rows;
    int in2_sqr_sub2_cols;
    int in2_sqr_sub2_elem;
    int in2_sqr_sub2_mem;

    //==========================================================================
    //	End
    //==========================================================================

    //==========================================================================
    //	FINAL
    //==========================================================================

    int in_sqr_rows;
    int in_sqr_cols;
    int in_sqr_elem;
    int in_sqr_mem;

    //==========================================================================
    //	TEMPLATE MASK CREATE
    //==========================================================================

    int tMask_rows;
    int tMask_cols;
    int tMask_elem;
    int tMask_mem;

    //==========================================================================
    //	POINT MASK INITIALIZE
    //==========================================================================

    int mask_rows;
    int mask_cols;
    int mask_elem;
    int mask_mem;

    //==========================================================================
    //	MASK CONVOLUTION
    //==========================================================================

    int mask_conv_rows;
    int mask_conv_cols;
    int mask_conv_elem;
    int mask_conv_mem;
    int mask_conv_ioffset;
    int mask_conv_joffset;

    //==========================================================================
    //	End
    //==========================================================================

} params_common;

//==============================================================================
//	END OF STRUCTURE
//==============================================================================
