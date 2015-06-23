#include <msclr\marshal.h>
#include <stdlib.h>
#include <string.h>
#include <String.h>
#include <string>

using namespace msclr::interop;
using namespace std;

namespace NSSTW
{
	public ref class CFEW
	{
	public:
		CFEW() {}

		static System::String^ echo(System::String^ stringToReturn)
		{
			return stringToReturn;
		}

		static bool InitFile(System::String^ fileName, System::String^ container)
		{

			msclr::interop::marshal_context context;

			std::string sys_fileName = context.marshal_as<std::string>(fileName);;
			std::string sys_container = context.marshal_as<std::string>(container);;
			return enc.InitFile(sys_fileName, sys_container);
		}

		  