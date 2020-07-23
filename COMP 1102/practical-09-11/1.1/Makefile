All : Restaurant MaindishTest SnackTest DrinkTest MLTest SLTest DLTest UserTest UlTest CartTest
Restaurant : main.cpp Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o
	g++ -o Restaurant main.cpp Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o -no-pie

Food.o : Food.h Food.cpp
	g++ -c Food.cpp -no-pie

Maindish.o : Maindish.h Maindish.cpp
	g++ -c Maindish.cpp -no-pie

Maindishlist.o : Maindishlist.h Maindishlist.cpp
	g++ -c Maindishlist.cpp -no-pie

Snack.o : Snack.h Snack.cpp
	g++ -c Snack.cpp -no-pie

Snacklist.o : Snacklist.h Snacklist.cpp
	g++ -c Snacklist.cpp -no-pie

Drink.o : Drink.h Drink.cpp
	g++ -c Drink.cpp -no-pie

Drinklist.o : Drinklist.h Drinklist.cpp
	g++ -c Drinklist.cpp -no-pie

Cart.o : Cart.h Cart.cpp
	g++ -c Cart.cpp -no-pie

User.o : User.h User.cpp	
	g++ -c User.cpp -no-pie

Usercollection.o : Usercollection.h Usercollection.cpp
	g++ -c Usercollection.cpp


MaindishTest  :  Food.o Maindish.o Unit_test_Maindish.cpp
	g++ -o MaindishTest Food.o Maindish.o Unit_test_Maindish.cpp -no-pie

SnackTest  : Food.o Snack.o Unit_test_Snack.cpp
	g++ -o SnackTest Food.o Snack.o Unit_test_Snack.cpp -no-pie

DrinkTest  : Food.o Drink.o Unit_test_Drink.cpp
	g++ -o DrinkTest Food.o Drink.o Unit_test_Drink.cpp -no-pie

MLTest  : Food.o Maindish.o Maindishlist.o Unit_test_ML.cpp
	g++ -o MLTest Food.o Maindish.o Maindishlist.o Unit_test_ML.cpp -no-pie

SLTest  : Food.o Snack.o Snacklist.o Unit_test_SL.cpp
	g++ -o SLTest Food.o Snack.o Snacklist.o Unit_test_SL.cpp -no-pie

DLTest  : Food.o Drink.o Drinklist.o Unit_test_DL.cpp
	g++ -o DLTest Food.o Drink.o Drinklist.o Unit_test_DL.cpp -no-pie

UserTest  : Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Unit_test_User.cpp
	g++ -o UserTest Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Unit_test_User.cpp -no-pie

UlTest  : Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o Unit_test_UL.cpp
	g++ -o UlTest Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o User.o Usercollection.o Unit_test_UL.cpp -no-pie

CartTest : Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o Unit_test_Cart.cpp
	g++ -o CartTest Food.o Maindish.o Snack.o Drink.o Maindishlist.o Snacklist.o Drinklist.o Cart.o Unit_test_Cart.cpp -no-pie

test : MaindishTest SnackTest DrinkTest MLTest SLTest DLTest UserTest UlTest CartTest Restaurant
	./MaindishTest 
	./SnackTest 
	./DrinkTest 
	./MLTest 
	./SLTest 
	./DLTest 
	./UserTest 
	./UlTest 
	./CartTest
	./Restaurant < test.txt