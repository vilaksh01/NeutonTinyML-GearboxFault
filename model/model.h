#ifdef INCLUDED_BY_NEUTON_C

/* Model info */
#define NEUTON_MODEL_HEADER_VERSION 1
#define NEUTON_MODEL_QLEVEL 32
#define NEUTON_MODEL_FLOAT_SUPPORT 1
#define NEUTON_MODEL_TASK_TYPE 0  // multiclass classification
#define NEUTON_MODEL_NEURONS_COUNT 52
#define NEUTON_MODEL_WEIGHTS_COUNT 345
#define NEUTON_MODEL_INPUTS_COUNT 620
#define NEUTON_MODEL_INPUTS_COUNT_ORIGINAL 4
#define NEUTON_MODEL_INPUT_LIMITS_COUNT 1
#define NEUTON_MODEL_OUTPUTS_COUNT 6
#define NEUTON_MODEL_LOG_SCALE_OUTPUTS 0

/* Preprocessing */
#define NEUTON_PREPROCESSING_ENABLED 1
#define NEUTON_MODEL_WINDOW_SIZE 144
#define NEUTON_BITMASK_ENABLED 0

/* Scaling */
static const float modelInputScaleMin[] = {
	-58.7216, -32.769001, -27.4732, -27.311399, -58.7216, 4.1212301, -0.45958123,
	1.7767917, 24, 3.1547275, 0.50846547, 0.86806506, 1.0179647, -1.987704,
	-1.0108458, -32.769001, 4.3046699, -0.49843973, 1.794215, 25, 3.1968157,
	0.43074527, 0.91821438, 1.0237534, -1.9685192, -0.96108139, -27.4732, 3.93911,
	-0.38830605, 1.3817887, 26, 1.89735, 0.55950481, 0.90436476, 1.0242749,
	-1.4147167, -0.76583356, -27.311399, 4.2399201, -2.9558618, 1.5132793,
	23, 2.1999576, 0.52558744, 0.89909309, 1.0247959, -1.4210445, -0.82043278 };
static const float modelInputScaleMax[] = {
	56.7066, 30.928301, 23.5452, 32.3661, -4.00002, 56.7066, 0.40392566, 20.376753,
	84, 415.18674, 0.99479371, 1.4218878, 1.0538123, 1.1167333, 11.130979,
	-3.6602099, 30.928301, 0.3702783, 9.0339155, 102, 81.60511, 1.0033958,
	1.5977796, 1.059074, 1.3192873, 11.198201, -3.7109399, 23.5452, 0.34771055,
	8.2148247, 79, 67.475662, 0.90687567, 1.4102426, 1.0494536, 0.88279879,
	11.663396, -3.08813, 32.3661, 0.81804776, 8.8600817, 76, 78.432106, 0.9199295,
	1.5633705, 1.0513968, 2.2593248, 11.213644 };

/* Limits */
static const float modelInputMin[] = { 0 };
static const float modelInputMax[] = { 1 };

static const float modelOutputMin[] = { 0, 0, 0, 0, 0, 0 };
static const float modelOutputMax[] = { 1, 1, 1, 1, 1, 1 };

/* Types */
typedef float coeff_t;
typedef float weight_t;
typedef double acc_signed_t;
typedef double acc_unsigned_t;
typedef uint16_t sources_size_t;
typedef uint16_t weights_size_t;
typedef uint8_t neurons_size_t;

/* Structure */
static const weight_t modelWeights[] = {
	0.37633488, -0.54865253, -0.32679552, 0.45113331, 0.38558668, -0.080020905,
	0.84702915, -0.64482963, 0.67881352, 0.18303096, 0.50870955, -0.39022428,
	0.15099072, -0.32603049, 0.28623807, -0.27721733, -0.69613683, -0.74798691,
	0.40516391, 1, -0.24810475, -0.11672699, -0.04703588, 0.80408376, -0.19420478,
	0.11203526, -0.040922165, -0.078883141, -0.020932337, -1, 0.28973031, -0.15985659,
	0.23225737, 0.029380798, -0.86232352, -0.27520645, 0.9156462, 0.74452275,
	0.090967469, 0.27352607, 0.84463626, -0.49914062, -0.48020715, -0.33362201,
	-0.57783878, 0.3890152, -1, -0.23601162, 0.47994861, -0.58784091, 0.70643544,
	-0.45542908, 0.49033591, -0.99678224, 0.99999976, -0.54257536, -0.61875647,
	0.55114853, -0.21068573, -1, 0.46271455, 0.3631838, -0.31728318, -0.26946101,
	1, -0.19060223, 0.6774593, -0.28342286, 0.3818121, -0.26148304, -0.2732861,
	0.39543381, 0.30015168, -0.43994322, 0.44701284, -0.29827023, 1, 0.81956214,
	-0.25064683, -0.34164897, -0.66907686, 0.054984093, -0.88099307, -0.99999964,
	0.3661789, 0.45193666, 0.22659649, -0.37696618, -0.55305988, -0.88665503,
	0.31079102, 0.99308592, -0.98818493, 0.032254882, -0.24410205, -0.70382118,
	0.77950239, 0.32410908, 0.64785713, -0.33793896, -0.38703123, -0.9999997,
	0.4253394, -0.25152588, -0.094136387, 0.23423491, -0.96091598, 0.42822394,
	-0.51653582, 0.10622406, 0.35303903, -0.0030309709, -0.17176962, 0.6052506,
	-0.36097938, -0.068115234, 0.47546998, -0.13206033, -0.98248863, -0.31829292,
	-0.99999952, 0.44429779, 0.99999976, -0.86202478, -0.99804306, -0.30294961,
	-0.26414752, 0.62869263, -0.033309832, -0.47990632, -0.93228078, 0.67035985,
	-1, 0.86005616, 0.73302078, 0.83756113, -0.25680262, 0.41308534, 0.78587288,
	-0.80761081, -0.99999946, 0.031371951, -0.36432654, -0.50687337, -0.44195586,
	-0.4229075, 0.82222694, -0.090209961, 0.99999899, -0.97078764, -0.93491936,
	0.35403129, -0.93996686, 0.43959045, -0.66295785, -0.9999994, -0.78245133,
	0.70892859, 0.26176107, 0.58594131, -0.76782966, 0.52053654, 0.27773777,
	-0.36557823, -0.43249282, 0.21710205, -0.99684036, 0.17702439, 0.43371239,
	0.046970855, -0.22227938, 0.034065247, -0.86081702, -0.50077498, -0.093427867,
	0.33244899, 0.99985951, -0.25839615, 0.04876681, -0.44361079, 0.94883478,
	0.99999988, -0.90087873, -0.50740814, 0.44170639, -0.48922935, 0.52572858,
	-0.93383944, 0.22362854, -0.13510549, -0.13860953, -0.99999988, -0.077941053,
	0.44062743, 0.086448476, 0.15979004, -0.71168935, 0.36246446, 0.34337837,
	-0.61002147, 0.69107515, 1, -0.42852783, -0.21426523, 1, 0.24999999, -0.69821155,
	0.10958485, 0.081878848, 0.77551073, -0.34441614, -0.95716381, -0.99999988,
	0.073631331, -0.070444107, 0.37614998, 0.71248215, -0.16303115, -0.11113542,
	0.49305475, -0.40551758, 0.2439515, -0.99999833, 0.84717047, -0.28834003,
	-0.58618575, -0.42053223, -0.14085887, 0.16288197, -0.99999988, -0.8567313,
	0.92722416, 0.88987577, 0.099578857, -0.99999988, -1, 0.1460457, 0.0065815868,
	-0.17992741, 0.11979665, -0.30576169, -0.035400391, -0.86615491, 0.32174739,
	0.17039435, -0.2146665, -0.99674374, 0.40243387, 0.19581982, -0.36690235,
	-0.0077998028, -0.95371765, 0.99999976, -0.931027, 0.66834676, -0.35240573,
	0.99998987, -0.77626079, -0.9562304, -0.43193367, -0.35058695, 0.8908416,
	0.7199707, -0.029645421, -0.99999273, 0.43195945, -0.32409573, -0.70383579,
	0.75519228, -0.78587353, -0.3744573, 0.72431684, 0.86553657, -0.6584779,
	-0.90768623, 0.13256836, -0.40058917, 0.83693391, 0.37415919, -0.71672231,
	1, 0.70727932, 0.31870538, 0.31686664, 0.16755392, -0.87298316, -0.31856221,
	-0.98198688, 0.26443696, 0.18523037, -0.33665282, -0.46198344, 0.11497498,
	0.5353179, 0.48210129, -0.721663, -0.37182069, 0.59939611, -1, -0.080417633,
	-0.64727104, 0.3125, -0.50876421, -1, 0.71421713, 0.1875, -0.41332802,
	-0.89281225, -0.91382432, -0.26670346, 0.17984001, -0.99999964, 0.29203099,
	-1, 0.23688173, -0.18015827, 0.46023035, 0.069261342, 0.97734082, 0.52336746,
	-0.29248542, -0.65287071, -0.99999917, -0.12742805, 0.25000003, -0.50170815,
	-0.27355993, 0.60833043, 1, -0.62500012, -0.83596969, 0.14315528, -1, -0.19728191,
	0.14300792, -0.75248361, 0.090900652, -1, -0.9248507, -1, -0.59561265,
	-0.095709465, 0.097862706, -0.96874511, -0.036285676 };

static const sources_size_t modelLinks[] = {
	583, 586, 595, 603, 612, 620, 581, 593, 595, 612, 614, 618, 620, 1, 126,
	521, 582, 585, 618, 620, 1, 74, 552, 595, 602, 618, 620, 448, 564, 581,
	592, 601, 608, 620, 1, 3, 582, 594, 601, 620, 50, 195, 465, 466, 600, 620,
	0, 70, 578, 614, 618, 620, 4, 57, 254, 300, 591, 594, 620, 1, 8, 620, 1,
	5, 7, 75, 579, 597, 620, 6, 10, 462, 470, 597, 614, 620, 7, 105, 160, 238,
	596, 620, 5, 12, 620, 45, 61, 467, 473, 477, 620, 58, 475, 488, 489, 582,
	619, 620, 170, 522, 557, 586, 607, 620, 192, 335, 493, 499, 603, 620, 8,
	77, 152, 582, 604, 620, 217, 379, 579, 611, 616, 620, 63, 216, 384, 415,
	535, 620, 5, 81, 585, 592, 603, 619, 620, 387, 401, 454, 504, 582, 600,
	620, 16, 31, 290, 554, 617, 620, 96, 131, 462, 477, 521, 620, 201, 284,
	287, 410, 581, 620, 102, 187, 493, 584, 602, 620, 208, 319, 326, 537, 603,
	620, 56, 134, 388, 594, 615, 620, 168, 265, 271, 275, 500, 620, 47, 189,
	204, 489, 549, 620, 27, 92, 99, 331, 383, 620, 1, 181, 422, 510, 513, 619,
	620, 12, 14, 209, 476, 548, 620, 0, 33, 544, 586, 615, 620, 7, 23, 254,
	465, 615, 620, 18, 35, 347, 492, 493, 620, 11, 36, 436, 475, 517, 603,
	620, 4, 14, 16, 150, 553, 595, 608, 620, 2, 6, 33, 34, 35, 36, 37, 38,
	620, 1, 2, 3, 4, 347, 620, 345, 394, 501, 503, 565, 620, 41, 111, 158,
	200, 589, 620, 98, 204, 229, 361, 480, 508, 620, 0, 7, 21, 22, 23, 26,
	28, 31, 42, 43, 620, 2, 36, 55, 161, 435, 620, 77, 338, 354, 576, 594,
	614, 620, 265, 311, 471, 597, 612, 620, 3, 10, 18, 19, 20, 25, 29, 32,
	41, 47, 620, 0, 1, 2, 3, 33, 142, 620, 3, 371, 439, 466, 592, 620, 4, 11,
	14, 15, 16, 17, 24, 27, 30, 40, 45, 46, 49, 50, 620 };

static const weights_size_t modelIntLinksBoundaries[] = {
	0, 6, 14, 21, 27, 36, 40, 47, 53, 61, 65, 71, 77, 84, 85, 91, 98, 104,
	111, 116, 122, 129, 135, 143, 148, 154, 160, 166, 172, 178, 184, 190, 197,
	205, 211, 217, 223, 229, 237, 250, 255, 257, 264, 269, 286, 289, 293, 300,
	316, 321, 324, 344 };
static const weights_size_t modelExtLinksBoundaries[] = {
	6, 13, 20, 27, 34, 40, 46, 52, 59, 62, 69, 76, 82, 85, 91, 98, 104, 110,
	116, 122, 128, 135, 142, 148, 154, 160, 166, 172, 178, 184, 190, 196, 203,
	209, 215, 221, 227, 234, 242, 251, 257, 263, 269, 276, 287, 293, 300, 306,
	317, 324, 330, 345 };

static const coeff_t modelFuncCoeffs[] = {
	34.589977, 16.734638, 13.789446, 17.68228, 39.999985, 11.855087, 19.855934,
	10.026276, 14.372625, 14.983841, 32.518753, 20.049995, 38.753132, 16.042673,
	23.790627, 39.999992, 22.54372, 30.024986, 14.199186, 30.024988, 25.037502,
	12.025677, 35.01252, 19.768116, 30.024952, 39.999672, 18.614162, 40, 18.643917,
	30.024982, 29.832037, 35.012535, 39.999992, 30.024984, 20.050014, 20.050001,
	34.60276, 30.024986, 40, 12.426119, 40, 17.389668, 30.024981, 17.556252,
	17.743771, 19.525764, 35.012535, 30.024963, 12.760835, 25.037495, 40, 39.999908 };

static const neurons_size_t modelOutputNeurons[] = { 44, 9, 39, 48, 51, 13 };

#endif // INCLUDED_BY_NEUTON_C
