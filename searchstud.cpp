void searchstud(long int prn)
{
    for(i=0, i<n; i++)
    {
        if(prn == studentObj.prn_no[i])
        {
            cout<<"Prn found"<<endl;
            cout << "\nPRN: " <<    studentObj.prn_no[i]
         << "\nName: " << studentObj.name
         << "\nRoll Number: " << studentObj.roll_no[i]
         << "\nDate of Birth: " << studentObj.dateOfBirth[i]
         << "\nGender: " << studentObj.gender[i] << endl;
        }

    }
    
}