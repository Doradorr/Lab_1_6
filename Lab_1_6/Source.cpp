int main()
{
	//Describing and initiating symbolic type constants and variables

	const char CONST1 = '5';
	char chVar1;
	chVar1 = 'b';

	//Initiating objects with the assignment operator, using values from the variant(Table 2.11), which are given in the form of character literals and codes symbols.

	char chVar2 = '!';
	const char CONST2 = 0xc;//f
	char chVar3;
	chVar3 = 0x68;//h
	char chVar4 = 0x2b;//+

	//Description of variables of types int, float, unsigned short

	int nA;
	float fltB;
	unsigned short wC;

	//Initializing the variables described in paragraph 1 of this task

	nA = 274;
	fltB = 1.001e-2;
	wC = 78;

	//Description of variables of types double, int, char.

	double dblD;
	int nE;
	char chF;

	//Initializing variables using implicit type casting

	dblD = nA;
	nE = fltB;
	chF = wC;

	//using explicit cast

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	// bypassing strict typing

	double* pdblD;
	void* pV;
	pV = &nA;
    pdblD = (double*)pV;
    dblD = *pdblD;
	
	int* pnE;
	pV = &fltB;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;
}