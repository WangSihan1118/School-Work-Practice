

// implementation of a Panda constructor taking a name and food type                      
Panda::Panda(string pname, string pfav_food)
{
        myid = id++ ;
        name = pname;
        species = "panda";
        fav_food = pfav_food;
        cout << "Created a Panda with ID: " << myid << endl;
}

// implementation of a Panda constructor taking a species and a type                                                                               
Panda::Panda(string spec, string myType)
{
        myid = id++ ;
        name = "anon";
        species = spec;
        fav_food = "bamboo";
        type = myType;
        cout << "Created a Panda with ID: " << myid << endl;
}
