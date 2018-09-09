#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include "Name_addres.h"
using namespace System;
using namespace System::Data::OleDb;


int BD() {

	auto con = gcnew OleDbConnection("Provider=sqloledb; Data Source=GRIFON; Initial Catalog=master; Integrated Security=SSPI");
	con->Open();
	std::string create_table;

	for (auto NameBD_addres : BDName_addresToFile) {
		create_table = "CREATE TABLE " + NameBD_addres.first + " (XMLCol xml)";

		String^ create_table_str = gcnew String(create_table.c_str());
		auto command = gcnew OleDbCommand(create_table_str, con);
		
		try 
		{
			command->ExecuteNonQuery();
		}
		catch (Exception ^ err)
		{
			//std::cout << "Ошибка" << std::endl;
		}
		
		
			std::string query =
				"INSERT INTO " + NameBD_addres.first + "(XMLCol) --\n\
				 SELECT * FROM OPENROWSET( --\n\
						BULK \'" + NameBD_addres.second + "\', SINGLE_CLOB) AS x;";

			String^ query_str = gcnew String(query.c_str());
			command->CommandText = query_str;
			command->ExecuteNonQuery();


	}
	std::cout << "Файлы загружены в БД" << std::endl;
	con->Close();
	return 0;
}








