## Install dependencies

```sh
curl -O https://www.antlr.org/download/antlr-4.13.1-complete.jar
brew install cmake
```

## How to build?

```sh
cmake -B ./build
make -C ./build
```

## Run the demo program:

```sh
$ ./build/demo   
[@0,0:5='CREATE',<197>,1:0]
[@1,7:15='PROCEDURE',<728>,1:7]
[@2,17:30='HumanResources',<1169>,1:17]
[@3,31:31='.',<1187>,1:31]
[@4,32:46='uspGetEmployees',<1169>,1:32]
[@5,52:60='@LastName',<1166>,2:4]
[@6,62:69='NVARCHAR',<1153>,2:14]
[@7,70:70='(',<1192>,2:22]
[@8,71:72='50',<1168>,2:23]
[@9,73:73=')',<1193>,2:25]
[@10,74:74=',',<1194>,2:26]
[@11,80:89='@FirstName',<1166>,3:4]
[@12,91:98='NVARCHAR',<1153>,3:15]
[@13,99:99='(',<1192>,3:23]
[@14,100:101='50',<1168>,3:24]
[@15,102:102=')',<1193>,3:26]
[@16,104:105='AS',<56>,4:0]
[@17,111:113='SET',<887>,5:4]
[@18,115:121='NOCOUNT',<598>,5:8]
[@19,123:124='ON',<649>,5:16]
[@20,125:125=';',<1195>,5:18]
[@21,131:136='SELECT',<865>,6:4]
[@22,138:146='FirstName',<1169>,6:11]
[@23,147:147=',',<1194>,6:20]
[@24,149:156='LastName',<1169>,6:22]
[@25,157:157=',',<1194>,6:30]
[@26,159:166='JobTitle',<1169>,6:32]
[@27,167:167=',',<1194>,6:40]
[@28,169:178='Department',<1169>,6:42]
[@29,184:187='FROM',<378>,7:4]
[@30,189:202='HumanResources',<1169>,7:9]
[@31,203:203='.',<1187>,7:23]
[@32,204:222='vEmployeeDepartment',<1169>,7:24]
[@33,228:232='WHERE',<1060>,8:4]
[@34,234:242='FirstName',<1169>,8:10]
[@35,244:244='=',<1174>,8:20]
[@36,246:255='@FirstName',<1166>,8:22]
[@37,257:259='AND',<37>,8:33]
[@38,261:268='LastName',<1169>,8:37]
[@39,270:270='=',<1174>,8:46]
[@40,272:280='@LastName',<1166>,8:48]
[@41,281:281=';',<1195>,8:57]
[@42,282:281='<EOF>',<-1>,8:58]
(tsql_file (batch (batch_level_statement (create_or_alter_procedure CREATE PROCEDURE (func_proc_name_schema (id_ HumanResources) . (id_ uspGetEmployees)) (procedure_param @LastName (data_type (id_ (keyword NVARCHAR)) ( 50 ))) , (procedure_param @FirstName (data_type (id_ (keyword NVARCHAR)) ( 50 ))) AS (sql_clauses (another_statement (set_statement (set_special SET (id_ (keyword NOCOUNT)) (on_off ON) ;)))) (sql_clauses (dml_clause (select_statement_standalone (select_statement (query_expression (query_specification SELECT (select_list (select_list_elem (expression_elem (expression (full_column_name (id_ FirstName))))) , (select_list_elem (expression_elem (expression (full_column_name (id_ LastName))))) , (select_list_elem (expression_elem (expression (full_column_name (id_ JobTitle))))) , (select_list_elem (expression_elem (expression (full_column_name (id_ Department)))))) FROM (table_sources (table_source (table_source_item (full_table_name (id_ HumanResources) . (id_ vEmployeeDepartment))))) WHERE (search_condition (search_condition (predicate (expression (full_column_name (id_ FirstName))) (comparison_operator =) (expression (primitive_expression @FirstName)))) AND (search_condition (predicate (expression (full_column_name (id_ LastName))) (comparison_operator =) (expression (primitive_expression @LastName))))))) ;))))))) <EOF>)
```
