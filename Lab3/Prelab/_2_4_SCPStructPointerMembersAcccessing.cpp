#include <iostream>
#include <string>
using namespace std;
struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};
void addAddendum(SCP &obj, string addendum);
int main(){
    string* addendums = new string [2];
    addendums[0] = "Request 500-1774-k\nDr. [500-0022F] has requested one (1) SCP-500 pill for testing with SCP-038. Request has been approved.";
    addendums[1] = "Request 500-1862-b\nDr. Gears has requested one (1) SCP-500 pill for testing in SCP-914. Request has been approved.";
    SCP obj {500, 0, "SCP-500 must be stored in a cool and dry place away from bright light.", "SCP-500 is a small plastic can which at the time of writing contains forty-seven (47) red pills.", addendums, 2};
    addAddendum(obj, "Addendum 500-1: Two (2) pills have been authorized for use with SCP-008. As a result of conducting a series of tests on Class D subjects infected with SCP-008, it appears that even in the most advanced stages of the disease one whole pill will accomplish full recovery. Number of pills is fifty-seven (57) at the time of writing. - Dr. [500-0021D]");
    cout << obj.numAddendums;
    delete [] obj.addendums;
}
void addAddendum(SCP &obj, string addendum){
    int numAdden = obj.numAddendums + 1;
    string *temp = new string[numAdden];
    for(int i = 0; i < numAdden; i++){
        if(i < numAdden - 1) temp[i] = obj.addendums[i];
        else temp[i] = addendum;
    }
    obj.addendums = temp;
    obj.numAddendums = numAdden;
    
}