All : Restaurant MaindishTest SnackTest DrinkTest MLTest SLTest DLTest UserTest UlTest CartTest
Restaurant : main.cpp Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o
	g++ -o Restaurant main.cpp Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o

MaindishTest  : Maindish.o Unit_test_Maindish.cpp
	g++ -o MaindishTest Maindish.o Unit_test_Maindish.cpp

SnackTest  : Snack.o Unit_test_Snack.cpp
	g++ -o SnackTest Snack.o Unit_test_Snack.cpp

DrinkTest  : Drink.o Unit_test_Drink.cpp
	g++ -o DrinkTest Drink.o Unit_test_Drink.cpp

MLTest  : Maindishlist.o Unit_test_ML.cpp
	g++ -o MLTest Maindishlist.o Unit_test_ML.cpp

SLTest  : Snacklist.o Unit_test_Snacklist.cpp
	g++ -o SLTest Snacklist.o Unit_test_Snacklist.cpp

DLTest  : Drinklist.o Unit_test_Drinklist.cpp
	g++ -o DLTest Drinklist.o Unit_test_Drinklist.cpp

UserTest  : User.o Unit_test_User.cpp
	g++ -o UserTest User.o Unit_test_User.cpp

UlTest  : Usercollection.o Unit_test_Usercollection.cpp
	g++ -o UlTest Usercollection.o Unit_test_Usercollection.cpp

CartTest : Cart.o Unit_test_Cart.cpp
	g++ -o CartTest Cart.o Unit_test_Cart.cpp

Food.o : Food.h Food.cpp
	g++ -c Food.cpp

Maindish.o : Maindish.h Maindish.cpp
	g++ -c Maindish.cpp

Maindishlist.o : Maindishlist.h Maindishlist.cpp
	g++ -c Maindishlist.cpp

Snack.o : Snack.h Snack.cpp
	g++ -c Snack.cpp

Snacklist.o : Snacklist.h Snacklist.cpp
	g++ -c Snacklist.cpp

Drink.o : Drink.h Drink.cpp
	g++ -c Drink.cpp

Drinklist.o : Drinklist.h Drinklist.cpp
	g++ -c Drinklist.cpp

Cart.o : Cart.h Cart.cpp
	g++ -c Cart.cpp

User.o : User.h User.cpp	
	g++ -c User.cpp

Usercollection.o : Usercollection.h Usercollection.cpp
	g++ -c Usercollection.cpp

test : MaindishTest SnackTest DrinkTest MLTest SLTest DLTest UserTest UlTest CartTest
	./MaindishTest 
	./SnackTest 
	./DrinkTest 
	./MLTest 
	./SLTest 
	./DLTest 
	./UserTest 
	./UlTest 
	./CartTest