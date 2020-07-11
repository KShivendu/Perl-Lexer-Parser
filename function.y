// FUNCTION DEFINITION

FuncDef:
		T_FUNCTION
		;
		
// DECLARATION

Declaration:
		T_IDENTIFIER T_LRB ParameterList T_RRB
		;
		
ParameterList:
	 	Parameter 
	|       ParameterList T_CMA Parameter ParameterList'
		;
	
ParameterList': 
		%empty 
	|	T_CMA Parameter ParameterList'
		;	
Parameter:
		T_VARIABLE
		;

		
// CALLING

Calling:
		T_VARIABLE T_EQ Declaration
		;
	


	

