//IT21321436 - Gunatilleke M.B.D.S

#include "RegisteredUser.h"

#include "Administrator.h"

#include <iostream>
#include <cstring>

int main() {

    
    Administrator* a1 = new Administrator("RMAD001","ManulaGunatilleke","Admin","M005G0010",20,
    "Manula@RM.lk","0705883826");

    a1->displayAdministrator();
    a1->SetVacancyApproveStatus(1000, 5000, 300, 50);
    a1->displayVacancyApproveReport();

    delete a1;

    return 0;
} 