#include<string>
#include"LoanControl.h"
#include<time.h>
class LoanRecord 
{
	private:
		std::string loanDate;
		std::string returnedDate;
		std::string equipid;
		std::string userId;
		bool status;
	public:
		LoanRecord();
		LoanRecord(std::string equipid, std::string userId,LoanControl&s);
		std::string getLoanDate();
		std::string getReturnedDate();
		std::string getEquipId();
		std::string getUserId();
		std::string getUserName(LoanControl &s);
		std::string getEquipName(LoanControl &s);
		std::string displayStatus();
		std::string getLoanRecord();
};
