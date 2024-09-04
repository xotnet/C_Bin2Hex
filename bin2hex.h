int char_count(char *str);

const char byte0 = 0b00000000;
const char byte1 = 0b00000001;
const char byte2 = 0b00000010;
const char byte3 = 0b00000011;
const char byte4 = 0b00000100;
const char byte5 = 0b00000101;
const char byte6 = 0b00000110;
const char byte7 = 0b00000111;
const char byte8 = 0b00001000;
const char byte9 = 0b00001001;
const char byteA = 0b00001010;
const char byteB = 0b00001011;
const char byteC = 0b00001100;
const char byteD = 0b00001101;
const char byteE = 0b00001110;
const char byteF = 0b00001111;

void bin2hex(char* input, char* output) {
  int inputLen = char_count(input);
	int outIndex = 0;
  for (int i = 0; i < inputLen; i++) {
	  if ((byte0 | *(input+i) >> 4) == (byte0)) {output[outIndex] = '0';}
		else if ((*(input+i) >> 4) == (byte1)) {output[outIndex] = '1';}
		else if ((*(input+i) >> 4) == (byte2)) {output[outIndex] = '2';}
		else if ((*(input+i) >> 4) == (byte3)) {output[outIndex] = '3';}
		else if ((*(input+i) >> 4) == (byte4)) {output[outIndex] = '4';}
		else if ((*(input+i) >> 4) == (byte5)) {output[outIndex] = '5';}
		else if ((*(input+i) >> 4) == (byte6)) {output[outIndex] = '6';}
		else if ((*(input+i) >> 4) == (byte7)) {output[outIndex] = '7';}
		else if ((*(input+i) >> 4) == (byte8)) {output[outIndex] = '8';}
		else if ((*(input+i) >> 4) == (byte9)) {output[outIndex] = '9';}
		else if ((*(input+i) >> 4) == (byteA)) {output[outIndex] = 'A';}
		else if ((*(input+i) >> 4) == (byteB)) {output[outIndex] = 'B';}
		else if ((*(input+i) >> 4) == (byteC)) {output[outIndex] = 'C';}
		else if ((*(input+i) >> 4) == (byteD)) {output[outIndex] = 'D';}
		else if ((*(input+i) >> 4) == (byteE)) {output[outIndex] = 'E';}
		else {output[outIndex] = 'F';}

		if ((char)(*(input+i) << 4) == (char)(byte0 << 4)) {output[outIndex+1] = '0';}
		else if ((char)(*(input+i) << 4) == (char)(byte1 << 4)) {output[outIndex+1] = '1';}
		else if ((char)(*(input+i) << 4) == (char)(byte2 << 4)) {output[outIndex+1] = '2';}
		else if ((char)(*(input+i) << 4) == (char)(byte3 << 4)) {output[outIndex+1] = '3';}
		else if ((char)(*(input+i) << 4) == (char)(byte4 << 4)) {output[outIndex+1] = '4';}
		else if ((char)(*(input+i) << 4) == (char)(byte5 << 4)) {output[outIndex+1] = '5';}
		else if ((char)(*(input+i) << 4) == (char)(byte6 << 4)) {output[outIndex+1] = '6';}
		else if ((char)(*(input+i) << 4) == (char)(byte7 << 4)) {output[outIndex+1] = '7';}
		else if ((char)(*(input+i) << 4) == (char)(byte8 << 4)) {output[outIndex+1] = '8';}
		else if ((char)(*(input+i) << 4) == (char)(byte9 << 4)) {output[outIndex+1] = '9';}
		else if ((char)(*(input+i) << 4) == (char)(byteA << 4)) {output[outIndex+1] = 'A';}
		else if ((char)(*(input+i) << 4) == (char)(byteB << 4)) {output[outIndex+1] = 'B';}
		else if ((char)(*(input+i) << 4) == (char)(byteC << 4)) {output[outIndex+1] = 'C';}
		else if ((char)(*(input+i) << 4) == (char)(byteD << 4)) {output[outIndex+1] = 'D';}
		else if ((char)(*(input+i) << 4) == (char)(byteE << 4)) {output[outIndex+1] = 'E';}
		else {output[outIndex+1] = 'F';}
		outIndex = outIndex + 2;
	}
}

void hex2str(char* input, char* output) {
	int inputLen = char_count(input);
	int outIndex = 0;
	for(int i = 0; i<inputLen; i = i+2) {
		if (*(input+i) == '0') {*(output+outIndex) = byte0;}
		else if (*(input+i) == '1') {*(output+outIndex) = byte1;}
		else if (*(input+i) == '2') {*(output+outIndex) = byte2;}
		else if (*(input+i) == '3') {*(output+outIndex) = byte3;}
		else if (*(input+i) == '4') {*(output+outIndex) = byte4;}
		else if (*(input+i) == '5') {*(output+outIndex) = byte5;}
		else if (*(input+i) == '6') {*(output+outIndex) = byte6;}
		else if (*(input+i) == '7') {*(output+outIndex) = byte7;}
		else if (*(input+i) == '8') {*(output+outIndex) = byte8;}
		else if (*(input+i) == '9') {*(output+outIndex) = byte9;}
		else if (*(input+i) == 'A') {*(output+outIndex) = byteA;}
		else if (*(input+i) == 'B') {*(output+outIndex) = byteB;}
		else if (*(input+i) == 'C') {*(output+outIndex) = byteC;}
		else if (*(input+i) == 'D') {*(output+outIndex) = byteD;}
		else if (*(input+i) == 'E') {*(output+outIndex) = byteE;}
		else {*(output+outIndex) = byteF;}

		if (*(input+i+1) == '0') {*(output+outIndex) = (*(output+outIndex) << 4) | byte0;}
		else if (*(input+i+1) == '1') {*(output+outIndex) = (*(output+outIndex) << 4) | byte1;}
		else if (*(input+i+1) == '2') {*(output+outIndex) = (*(output+outIndex) << 4) | byte2;}
		else if (*(input+i+1) == '3') {*(output+outIndex) = (*(output+outIndex) << 4) | byte3;}
		else if (*(input+i+1) == '4') {*(output+outIndex) = (*(output+outIndex) << 4) | byte4;}
		else if (*(input+i+1) == '5') {*(output+outIndex) = (*(output+outIndex) << 4) | byte5;}
		else if (*(input+i+1) == '6') {*(output+outIndex) = (*(output+outIndex) << 4) | byte6;}
		else if (*(input+i+1) == '7') {*(output+outIndex) = (*(output+outIndex) << 4) | byte7;}
		else if (*(input+i+1) == '8') {*(output+outIndex) = (*(output+outIndex) << 4) | byte8;}
		else if (*(input+i+1) == '9') {*(output+outIndex) = (*(output+outIndex) << 4) | byte9;}
		else if (*(input+i+1) == 'A') {*(output+outIndex) = (*(output+outIndex) << 4) | byteA;}
		else if (*(input+i+1) == 'B') {*(output+outIndex) = (*(output+outIndex) << 4) | byteB;}
		else if (*(input+i+1) == 'C') {*(output+outIndex) = (*(output+outIndex) << 4) | byteC;}
		else if (*(input+i+1) == 'D') {*(output+outIndex) = (*(output+outIndex) << 4) | byteD;}
		else if (*(input+i+1) == 'E') {*(output+outIndex) = (*(output+outIndex) << 4) | byteE;}
		else {*(output+outIndex) = (*(output+outIndex) << 4) | byteF;}
		outIndex++;
	}
}

int char_count(char *str) {
  int count = 0;
  while (*str != 0) {
    count++;
    str++;
  }
  return count;
}