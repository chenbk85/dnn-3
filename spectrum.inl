struct RGB { int r,g,b; };
/*std::vector<RGB> _pallet = {
{  0,102,255}, {  0,107,255}, {  0,112,255}, {  0,117,255}, {  0,127,255}, {  0,132,255}, {  0,137,255}, {  0,142,255}, 
{  0,153,255}, {  0,158,255}, {  0,163,255}, {  0,168,255}, {  0,178,255}, {  0,183,255}, {  0,188,255}, {  0,193,255}, 
{  0,204,255}, {  0,209,255}, {  0,214,255}, {  0,219,255}, {  0,229,255}, {  0,234,255}, {  0,239,255}, {  0,244,255}, 
{  0,255,255}, {  0,255,242}, {  0,255,229}, {  0,255,216}, {  0,255,191}, {  0,255,178}, {  0,255,165}, {  0,255,153}, 
{  0,255,127}, {  0,255,114}, {  0,255,102}, {  0,255, 89}, {  0,255, 63}, {  0,255, 51}, {  0,255, 38}, {  0,255, 25}, 
{  0,255,  0}, {  3,255,  0}, {  7,255,  0}, { 10,255,  0}, { 18,255,  0}, { 21,255,  0}, { 25,255,  0}, { 29,255,  0}, 
{ 36,255,  0}, { 40,255,  0}, { 43,255,  0}, { 47,255,  0}, { 54,255,  0}, { 58,255,  0}, { 61,255,  0}, { 65,255,  0}, 
{ 72,255,  0}, { 76,255,  0}, { 80,255,  0}, { 83,255,  0}, { 91,255,  0}, { 94,255,  0}, { 98,255,  0}, {102,255,  0}, 
{109,255,  0}, {112,255,  0}, {116,255,  0}, {120,255,  0}, {127,255,  0}, {131,255,  0}, {134,255,  0}, {138,255,  0}, 
{145,255,  0}, {149,255,  0}, {153,255,  0}, {156,255,  0}, {163,255,  0}, {167,255,  0}, {171,255,  0}, {174,255,  0}, 
{182,255,  0}, {185,255,  0}, {189,255,  0}, {193,255,  0}, {200,255,  0}, {204,255,  0}, {207,255,  0}, {211,255,  0}, 
{218,255,  0}, {222,255,  0}, {225,255,  0}, {229,255,  0}, {236,255,  0}, {240,255,  0}, {244,255,  0}, {247,255,  0}, 
{255,255,  0}, {255,251,  0}, {255,247,  0}, {255,243,  0}, {255,235,  0}, {255,231,  0}, {255,227,  0}, {255,223,  0}, 
{255,215,  0}, {255,211,  0}, {255,207,  0}, {255,204,  0}, {255,196,  0}, {255,192,  0}, {255,188,  0}, {255,184,  0}, 
{255,176,  0}, {255,172,  0}, {255,168,  0}, {255,164,  0}, {255,156,  0}, {255,153,  0}, {255,149,  0}, {255,145,  0}, 
{255,137,  0}, {255,133,  0}, {255,129,  0}, {255,125,  0}, {255,117,  0}, {255,113,  0}, {255,109,  0}, {255,105,  0}, 
{255, 98,  0}, {255, 94,  0}, {255, 90,  0}, {255, 86,  0}, {255, 78,  0}, {255, 74,  0}, {255, 70,  0}, {255, 66,  0}, 
{255, 58,  0}, {255, 54,  0}, {255, 51,  0}, {255, 47,  0}, {255, 39,  0}, {255, 35,  0}, {255, 31,  0}, {255, 27,  0}, 
{255, 19,  0}, {255, 15,  0}, {255, 11,  0}, {255,  7,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, {255,  0,  0}, 
{255,  0,  0}, {252,  0,  0}, {250,  0,  0}, {248,  0,  0}, {243,  0,  0}, {241,  0,  0}, {239,  0,  0}, {237,  0,  0}, 
{232,  0,  0}, {230,  0,  0}, {228,  0,  0}, {225,  0,  0}, {221,  0,  0}, {219,  0,  0}, {217,  0,  0}, {214,  0,  0}, 
{210,  0,  0}, {208,  0,  0}, {205,  0,  0}, {203,  0,  0}, {199,  0,  0}, {196,  0,  0}, {194,  0,  0}, {192,  0,  0}, 
{188,  0,  0}, {185,  0,  0}, {183,  0,  0}, {181,  0,  0}, {176,  0,  0}, {174,  0,  0}, {172,  0,  0}, {170,  0,  0}, 
{165,  0,  0}, {163,  0,  0}, {161,  0,  0}, {159,  0,  0}, {154,  0,  0}, {152,  0,  0}, {150,  0,  0}, {147,  0,  0}, 
{143,  0,  0}, {141,  0,  0}, {138,  0,  0}, {136,  0,  0}, {132,  0,  0}, {130,  0,  0}, {127,  0,  0}, {125,  0,  0}, 
{121,  0,  0}, {118,  0,  0}, {116,  0,  0}, {114,  0,  0}, {109,  0,  0}, {107,  0,  0}, {105,  0,  0}, {103,  0,  0}, 
{ 98,  0,  0}, { 96,  0,  0}, { 94,  0,  0}, { 92,  0,  0}, { 87,  0,  0}, { 85,  0,  0}, { 83,  0,  0}, { 80,  0,  0}};
*/
