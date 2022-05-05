#include <bits/stdc++.h>
using namespace std;
struct SCP {
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string* addendums;
    int numAddendums;
};
string convertToString(SCP obj) {
    // Student answer
    string result = "";
    string id = to_string(obj.id);
    while(id.size() < 3) id = "0" + id;
    string objClass = (obj.objClass == 0) ? "Safe" : (obj.objClass == 1) ? "Euclid" : "Keter ";
    result += "Item #: SCP-" + id + "\n" + "Object Class: " + objClass + "\n";
    result += "Special Containment Procedures: " + obj.speConProcedures + "\n" + "Description: " + obj.description + "\n";
    for(int i = 0; i < obj.numAddendums; i++){
        result += obj.addendums[i];
        if(i != obj.numAddendums - 1) result += "\n";
    }
    return result;
}
int main(){
    string* addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP obj {55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    cout << convertToString(obj);

    delete [] addendums;
}