/*	Definition section */
%{
    #include "common.h" //Extern variables that communicate with lex
	#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>    

	// #define YYDEBUG 1
    // int yydebug = 1;

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;

    void yyerror (char const *s)
    {
        printf("error:%d: %s\n", yylineno, s);
    }

    /* Symbol table function - you can add new function if needed. */
    static void create_symbol();
    static void insert_symbol(char* name,char* types, int type_mode);
    int lookup_symbol(char *id, int flag, int check);
    void dump_symbol();
	static void assign_symbol(int id, double data);
	
	int is_array = 0;
	int address_num = 0;
	int var_num = 0;
	int scope_flag = 0;
	int print_mode = 0;
	char string_value[10];
	char bool_value[10];
	int array_mode = 0;
	int for_flag = 0;

struct data{
	int index;	//0,1,2,3
	char type[10];	//int, float,
	char name[10];	//x,y,z
	int address;
	int lineno;
	char element[10];
	int type_mode;	
	
	//content
    	int int_value;
    	double dou_value;
	char str_value[10];
	char bool_val[6];

	int assign_bit;
	int scope;
	int be_dumped;
	}symbol_table[100];

%}

%error-verbose

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 */
%union {
    int i_val;
    float f_val;
    char *s_val;
    /* ... */
}

/* Token without return */
%token VAR 
%token INT FLOAT BOOL STRING VOID 
%token AND OR NOT LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE
%token ADD SUB MUL DIV REMAIN INC DEC
%token ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN QUO_ASSIGN REM_ASSIGN //assign
%token PRINT PRINTLN NEWLINE
%token LAND LOR
%token IF ELSE FOR 
%token EQL NEQ LSS LEQ GTR GEQ 
%token SEMICOLON COMMA

/* Token with return, which need to sepcify type */
%token <i_val> INT_LIT
%token <f_val> FLOAT_LIT
%token <s_val> STRING_LIT
%token <s_val> IDENT
%token <s_val> BOOL_LIT


/* Nonterminal with return, which need to sepcify type */
%type <i_val> Type INT FLOAT TypeName ArrayType 
%type <f_val> StatementList      
%type <f_val> DeclarationStmt PrintStmt IfStmt
%type <f_val> SimpleStmt IncDecStmt BLOCK AssignmentStmt ConversionExpr
%type <f_val> assign_op binary_op mul_op unary_op
%type <f_val> Expression PrimaryExpr UnaryExpr Elsestmt Forstmt Forclause FBLOCK
%type <f_val> Literal Operand condition IndexExpr

/* Yacc will start at this nonterminal */
%start Program

/* Grammar section */
%%

Program
    : StatementList {;}
;

StatementList
    : StatementList Statement{;}
    | Statement{;}
;

Statement
	:DeclarationStmt NEWLINE { ;}
	|SimpleStmt NEWLINE {;}
	|BLOCK NEWLINE 
	|PrintStmt NEWLINE
	|IfStmt NEWLINE
	|Forstmt NEWLINE
	|NEWLINE 	
;

DeclarationStmt :
		VAR IDENT Type ASSIGN Expression {
		int temp = lookup_symbol($2, scope_flag, 1);
		if(temp == -1){
			//insert_symbol($2, $3); 
			if( $3 == 1){ 					
				insert_symbol($2, "int32", $3);
				assign_symbol(1, $5);
				//dump_symbol();
			}
			else if( $3 == 2){
				insert_symbol($2, "float32", $3); 
			   	assign_symbol(1, $5); 
				//dump_symbol();
			}
			else if ($3 == 3){
					insert_symbol($2, "string", $3);
					int temp = lookup_symbol($2, scope_flag, 1);
					strcpy(symbol_table[temp].str_value, string_value); 
					//printf("%s\n", symbol_table[temp].str_value );
			}

			else if ($3 == 4){
					insert_symbol($2, "bool", $3); 	
					int temp = lookup_symbol($2, scope_flag, 1);
					strcpy( symbol_table[temp].bool_val, bool_value); 
					//printf("%s\n", symbol_table[temp].bool_val );		
			}
			else if( $3 == 1){ 					
				insert_symbol($2, "array", $3);
				assign_symbol(1, $5);
				//dump_symbol();
			}
			else if( $3 == 1){ 					
				insert_symbol($2, "array", $3);
				assign_symbol(1, $5);
				//dump_symbol();
			}
			
		}
		else{
			printf("error:%d: %s redeclared in this block. previous declaration at line %d\n",
				yylineno, $2, symbol_table[temp].lineno);		
		}
	}
		|VAR IDENT Type {
		int temp = lookup_symbol($2, scope_flag, 1);
		if(temp == -1){
				//int 
				if( $3 == 1){ 					
					insert_symbol($2, "int32", $3); 
				}
				else if( $3 == 2){
					insert_symbol($2, "float32", $3); 
				}
				else if ($3 == 3){
					insert_symbol($2, "string", $3);
				}
				else if ($3 == 4){
					insert_symbol($2, "bool", $3);
				}
				else if( $3 == 5){
					insert_symbol($2, "array", $3); 
				}
				else if( $3 == 6){
					insert_symbol($2, "array", $3); 
				}

			}
		
		else{
			
			printf("error:%d: %s redeclared in this block. previous declaration at line %d\n",
				yylineno, $2, symbol_table[temp].lineno);
		}
		}
;

BLOCK:
	LBRACE {scope_flag++ ;} StatementList{ } RBRACE { dump_symbol(); scope_flag-- ;}
;

FBLOCK:
	LBRACE {scope_flag++ ; for_flag = 1; for_flag =1; } StatementList{ } RBRACE { dump_symbol(); scope_flag-- ; for_flag = 0;}
;

StatementList : Statement
;



SimpleStmt
	: Expression {;}
	| IncDecStmt {;}
	| AssignmentStmt 
;

AssignmentStmt: Expression ASSIGN Expression 	  { printf("ASSIGN\n"); }
		|Expression ADD_ASSIGN Expression { if($1 >6 && $3 ==1){printf("error:%d: cannot assign to int32\n", yylineno);} 
							printf("ADD_ASSIGN\n"); }
		|Expression SUB_ASSIGN Expression { printf("SUB_ASSIGN\n"); }
		|Expression MUL_ASSIGN Expression { printf("MUL_ASSIGN\n"); }
		|Expression QUO_ASSIGN Expression { printf("QUO_ASSIGN\n"); }
		|Expression REM_ASSIGN Expression { printf("REM_ASSIGN\n"); }
;

Expression : UnaryExpr {;}
	| Expression ADD Expression	{ printf("ADD\n"); $$ = $1 + $3; }
	| Expression SUB Expression	{ printf("SUB\n"); $$ = $1 - $3; }
	| Expression MUL Expression	{ printf("MUL\n"); $$ = $1 * $3; }
	| Expression DIV Expression	{ printf("QUO\n"); /*$$ = $1 / $3;*/ }
	| Expression REMAIN Expression	{ printf("REM\n"); /*$$ = (int)$1 % (int)$3;*/ }

	| Expression EQL Expression	{ printf("EQL\n"); }
	| Expression NEQ Expression	{ printf("NEQ\n"); }
	| Expression GTR Expression	{ printf("GTR\n"); }
	| Expression LSS Expression	{ printf("LSS\n"); }
;

UnaryExpr : PrimaryExpr { $$ = $1; }
	|ADD UnaryExpr	{ printf("POS\n"); $$ = (float)$2; }
	|SUB UnaryExpr	{ printf("NEG\n"); $$ = $2 * (-1); }
	|NOT UnaryExpr	{ printf("NOT\n");  }
;

PrimaryExpr : Operand 	{ $$ = $1; }
	| ConversionExpr { $$ = $1; }
	| IndexExpr	{}
;
IndexExpr :PrimaryExpr LBRACK Expression RBRACK { $$ = $1; }
;

Operand : Literal 	{ $$ = $1;}
	| IDENT		{//printf("enter ident"); 
				int temp = lookup_symbol($1, scope_flag, 1);
				if(temp == -1){
					printf("error:%d: undefined: %s\n"
					, yylineno+1, $1);				
				}
				else{
			
				if(symbol_table[temp].type_mode == 1){
                    			//printf("xcvxcv\n");
                    			//$$ = symbol_table[temp].int_value;
					$$ = 1;
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
					print_mode = 1;                	  	
				}
                	  	else if(symbol_table[temp].type_mode == 2){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			$$ = symbol_table[temp].dou_value;
					print_mode = 2;                	  	
				}
				else if(symbol_table[temp].type_mode == 3){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    		//$$ = symbol_table[temp].dou_value;
					print_mode = 3;
                	  	}
				else if(symbol_table[temp].type_mode == 4){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    		//$$ = symbol_table[temp].dou_value;
					print_mode = 4;
                	  	}
				else if(symbol_table[temp].type_mode == 5){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			$$ = symbol_table[temp].dou_value;
					print_mode = 5; 
					array_mode = 1;               	  	
				}
				else if(symbol_table[temp].type_mode == 6){
					printf("IDENT (name=%s, address=%d)\n", symbol_table[temp].name, symbol_table[temp].address);
                    			$$ = symbol_table[temp].dou_value;
					print_mode = 6;                	  	
					array_mode = 2;				
				}
				}
				
			}
;

Literal : 
	INT_LIT 	{ $$ = 7; printf("INT_LIT %d\n", $1); 		print_mode = 1; }
	| FLOAT_LIT 	{ $$ = $1; printf("FLOAT_LIT %.6f\n", $1); 	print_mode = 2; }
	| STRING_LIT	{ printf("STRING_LIT %s\n", $1); strcpy(string_value, $1); print_mode = 3; }
	| BOOL_LIT 	{ strcpy(string_value, $1); print_mode = 4; }
;

ConversionExpr:Type LPAREN Expression RPAREN	{
						if($1 == 1) {
							if(print_mode == 2){
								printf("F to I\n");
							}
						} 
						else if($1 == 2) {
							if(print_mode == 1 ){
								printf("I to F\n"); 
							}
						}
					}
;

IfStmt:IF Expression BLOCK
	| IF Expression BLOCK ELSE BLOCK
	| IF Expression BLOCK ELSE IfStmt
;

Forstmt: FOR Expression FBLOCK
	|FOR Forclause FBLOCK
;

Forclause : SimpleStmt SEMICOLON Expression SEMICOLON SimpleStmt
; 

PrintStmt: PRINT LPAREN Expression RPAREN { 	if(print_mode == 1)	{ 
							if(array_mode == 2){ printf("PRINT float32\n"); }						else{
								printf("PRINT int32\n");} }
						else if(print_mode == 2){
							printf("PRINT float32\n"); }
						else if(print_mode == 3){ printf("PRINT string\n"); }
						else if(print_mode == 4){ printf("PRINT bool\n"); }
					;}
	|PRINTLN LPAREN Expression RPAREN { 	if(print_mode == 1)	{ if(array_mode == 2){ printf("PRINTLN float32\n"); }						else{
								printf("PRINTLN int32\n");} }
						else if(print_mode == 2){ printf("PRINTLN float32\n"); }
						else if(print_mode == 3){ printf("PRINTLN string\n"); }
						else if(print_mode == 4){ printf("PRINTLN bool\n"); }
					;}
;
IncDecStmt : Expression INC	{ printf("INC\n"); } 
	   | Expression DEC	{ printf("DEC\n"); }
;
Type : TypeName 	{ $$ = $1; }
	|ArrayType	{ $$ = $1; }
;

TypeName 
	: INT 		{ $$ = 1; }
    	| FLOAT 	{ $$ = 2; }
	| STRING 	{ $$ = 3; }
	| BOOL		{ $$ = 4; }
;

ArrayType: LBRACK Expression RBRACK Type { if($4 == 1) $$ = 5 ;
					if($4 == 2) $$ = 6; }

%%

/* C code section */
int main(int argc, char *argv[])
{
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }

    yylineno = 0;
    yyparse();

	dump_symbol();
	printf("Total lines: %d\n", yylineno);
    fclose(yyin);
    return 0;
}

static void create_symbol() {
}

static void assign_symbol(int id, double data)
{
    int type = symbol_table[id].type;
    if(type == 1){
        symbol_table[id].assign_bit = 1;
        symbol_table[id].int_value = (int)data;
    }
	
    else if(type == 2){
        symbol_table[id].assign_bit = 1;
        symbol_table[id].dou_value = data;
    }
		
}

static void insert_symbol(char* name, char* types, int type_modes) {
    	printf("> Insert {%s} into symbol table (scope level: %d)\n", name, scope_flag);
	strcpy(symbol_table[var_num].type, types);
    	strcpy(symbol_table[var_num].name, name);
	strcpy(symbol_table[var_num].element, "-");

	symbol_table[var_num].address = address_num;
	symbol_table[var_num].lineno = yylineno;
	
	symbol_table[var_num].type_mode = type_modes;

//	symbol_table[var_num].assign_bit = 0;
	symbol_table[var_num].scope = scope_flag;
	
	if(type_modes == 5) { strcpy(symbol_table[var_num].type, "array"); strcpy(symbol_table[var_num].element,"int32");} 
	
	if(type_modes == 6) { strcpy(symbol_table[var_num].type, "array"); strcpy(symbol_table[var_num].element,"float32");}
	//printf("insert completion");
	address_num++;
	var_num++;
}

int lookup_symbol(char* id, int flag, int check) {
	int i;
    	int temp = flag;

	if(for_flag == 0){ //normal
        	for(i = 0; i < var_num; i++){
            		if(strcmp(symbol_table[i].name, id) == 0 && symbol_table[i].scope == temp && symbol_table[i].be_dumped == 0){
			//printf("%d",i);
                	return i;
	        	}
        	}
	}
	else if(for_flag == 1){//fblock
		for(i = 0; i < var_num; i++){
            		if(strcmp(symbol_table[i].name, id) == 0 && symbol_table[i].scope <= temp && symbol_table[i].be_dumped == 0){
			//printf("%d",i);
                	return i;
	        	}
        	}
	}
	
    	return -1;
}

void dump_symbol() {
	int i, index = 0;
    printf("> Dump symbol table (scope level: %d)\n", scope_flag);
    printf("%-10s%-10s%-10s%-10s%-10s%-10s\n",
           "Index", "Name", "Type", "Address", "Lineno", "Element type");
	for(i = 0; i < var_num; i++){
		if(symbol_table[i].scope == scope_flag && symbol_table[i].be_dumped == 0){
	
    			printf("%-10d%-10s%-10s%-10d%-10d%s\n",
            		index, symbol_table[i].name, symbol_table[i].type, symbol_table[i].address, symbol_table[i].lineno, symbol_table[i].element);
		index++;
		symbol_table[i].be_dumped = 1;		
		}	
	}
}




