// thank you very much @ all 😉
// for over 800 upvotes
//
// thank you very much @ all,
// for the code of the day
// that is awesome and great
//
//
// Example reverse a string 😉
// it seems that this code didn't
// run on iphones
//
//
// this code works not with emojies
// Blue posted this in the comments, thanks a lot!
//
//
// feel free to make a copy of this code
// to get no trouble, write
// thats a copy of tooselfishs code
//
//
// this code needs a string input


#include<iostream>
#include<algorithm>
#include<string>


int main() {

    std::string str{};

    // input: a string
    // INFO by Blue: these 😉 emojies doesn't work
    std::getline(std::cin, str);
    std::cout << "Your string is             :  " << str << std::endl;

    // for an impossible input failure
    // try it, if you find one
    // tell it in a comment
    // INFO by Blue: these 😉 emojies doesn't work
    if( std::cin.fail() ){
        std::cerr << "Wrong input!\n";
        return 1;
    }

    // reverse the string
    reverse(str.begin(), str.end());

    // output your reverse string
    std::cout << "\nThis is your reverse string:  " << str << std::endl;

    return 0;
}


// 30.03.2018, code of the day, my first, thank you very much @ all
// 31.03.2018, 500 upvotes, what the heck, thanks
// 30.03.2018, 350 upvotes, thanks
// 24.03.2018, 200 upvotes, thanks
// 24.03.2018, one week number 2, thanks
// 31.03.2018, number 1 in trending, thank you very much
