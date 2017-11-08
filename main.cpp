// Made by Jonathan Attar.
// c++ object to parse data into entities and relations tables for data base use.

#include <iostream>
#include <vector>
#include <table.h>

using namespace std;

typedef vector<vector<string>> entity;
typedef vector<vector<string>> relation;


int main()
{

    ////////////////////////
    // [0] LOAD DATA BASE //
    ////////////////////////

    // Table tab;
    // tab.loadData("C:/path_to_directory/file.csv");

    /////////////////////////////
    // [1] CREATE ENTITY TABLE //
    /////////////////////////////

    // entity tableName = tab.createEntity({ "Id_something", "property" });
    // "Id" always in the first position;

    //////////////////////////////////
    // [1bis] CREATE RELATION TABLE //
    //////////////////////////////////

    // relation tableName = tab.createRelation({ "Id_something1", "Id_something2" });

    ////////////////////////////
    // [3] EXPORT TO CSV FILE //
    ////////////////////////////

    // Table.createCSVTable ("fileName.csv", entity or relation to export);


//    //  example with "example_gares.csv":
//    //  [0]
//    Table tab;
//    tab.loadData("D:/parserData/example_gares.csv");
//    //  [1]
//    entity departement = tab.createEntity({ "Iddepartement", "Numdepartement" });
//    entity ville = tab.createEntity({ "Idville", "Nomville", "Iddepartement"});
//    entity codepostal = tab.createEntity({ "Idcodepostal", "Numcodepostal"});
//    entity ligne = tab.createEntity({ "Idligne", "Codeligne" });
//    entity desserte = tab.createEntity({ "Iddesserte", "Naturedesserte" });
//    entity gare = tab.createEntity({ "Idgare", "Nomgare", "Idville" });
//    //  [1bis]
//    relation ville_cp = tab.createRelation({ "Idville", "Idcodepostal" });
//    relation gare_cp = tab.createRelation({ "Idgare", "Idcodepostal" });
//    relation ligne_gare_desserte = tab.createRelation({ "Latitude_wgs84", "Longitude_wgs84", "WGS84", "Idgare", "Idligne", "Iddesserte"  });
//    //  [3]
//    tab.createCSV("departement.csv", departement);
//    tab.createCSV("codepostal.csv", codepostal);
//    tab.createCSV("ligne.csv", ligne);
//    tab.createCSV("desserte.csv", desserte);
//    tab.createCSV("ville.csv", ville);
//    tab.createCSV("gare.csv", gare);
//    tab.createCSV("Ville_Posseder_Codepostal.csv", ville_cp);
//    tab.createCSV("Gare_Posseder_Codepostal.csv", gare_cp);
//    tab.createCSV("Ligne_dessert_gare_naturedesserte.csv", ligne_gare_desserte);
//    //  [cout]
//    //  tab.seeTable(ligne_gare_desserte);
//    //  tab.seeDataBase();

    cout << endl; return 0;
}

