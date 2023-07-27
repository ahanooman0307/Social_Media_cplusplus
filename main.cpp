#include <iostream>
#include "Post.hpp"
#include "Account.hpp"
#include "Network.hpp"
#include "LinkedList.hpp"
#include "General.hpp"


int main() {


    //make a linked listof posts ppinters
    //make some posts with random usernames
    //insert the posts into the linked list
    //sort it
    //iterate through the linked list and post the usernames

    LinkedList<Post*> posts;
    Post* post1 = new General("post1", "body1", "1");
    Post* post2 = new General("post2", "body2", "5");
    Post* post3 = new General("post4", "body4", "7");
    Post* post4 = new General("post5", "body5", "2");
    Post* post5 = new General("cheese", "pizza", "4");
    Post* post6 = new General("post6", "body6", "3");
    Post* post7 = new General("post7", "body7", "9");
    posts.insert(post1, 0);
    posts.insert(post2, 0);
    posts.insert(post3, 0);
    posts.insert(post4, 0);
    posts.insert(post5, 0);
    posts.insert(post6, 0);
    posts.insert(post7, 0);

    Node<Post*>* curr_item = posts.getHeadPtr();

    std::cout << "unsorted: \n";
    while(curr_item != nullptr){
        std::cout << curr_item->getItem()->getUsername() << std::endl;
        curr_item = curr_item->getNext();
    }
    std::cout << std::endl;


    int count = 0;
    posts.bubbleSort(std::greater<Post>(), &count);
    
    posts.getHeadPtr();

std::cout << "sorted: \n";
    curr_item = posts.getHeadPtr();
    while(curr_item != nullptr){
        std::cout << curr_item->getItem()->getUsername() << " ";
        curr_item = curr_item->getNext();
        
    }
    std::cout << "\nswap: " << count << "\n";




    


//     LinkedList<int> list1;
//     list1.insert(5,0);
//     list1.insert(8,0);
//     list1.insert(9,0);
//     list1.insert(10,0);
//     int x = 9;
// list1.moveItemToTop(x);

//  std::cout << "9: " << list1.getIndexOf(9) << std::endl;
//     std::cout << "5: " << list1.getIndexOf(5) << std::endl;
//    std::cout << "8: " << list1.getIndexOf(8) << std::endl;
//     std::cout << "9: " << list1.getIndexOf(9) << std::endl;
//     std::cout << "10: " << list1.getIndexOf(10) << std::endl;

//     LinkedList<int> list2(list1);


//     // cout << "5: " << copyList.getIndexOf(5) << endl;
//     // cout << "8: " << copyList.getIndexOf(8) << endl;
//     // cout << "9: " << copyList.getIndexOf(9) << endl;
//     // cout << "10: " << copyList.getIndexOf(10) << endl;

//     list2.reverseCopy(list1); //copies list 1 and returns it as reversed as list2


//         std::cout << "Reverse: " << std::endl;
        
//        std::cout << "5: " << list2.getIndexOf(5) << std::endl;
//     std::cout << "8: " << list2.getIndexOf(8) << std::endl;
//     std::cout << "9: " << list2.getIndexOf(9) << std::endl;
//     std::cout << "10: " << list2.getIndexOf(10) << std::endl;





//     string one = "hello hello hello";
//     string two = "fals";
//     bool found = false;
//     size_t size = -1;
//     size_t size2 = one.find(two);
//    if (size != size2)
//     std::cout << "true";
//     else{
//         cout << "false";
//     }
// Account acc("username","password");
// Account acc2("john", "cena");
// Post post("titleee", "bodyyyy", "john");





// Network<Account>* n = new Network<Account>;
// Account* acc1 = new Account("one", "password");
// Account acc2("two", "password");
// Account* acc2ptr = &acc2;
// // acc1->setNetwork(n);
// // acc2.setNetwork(n);
// n->addAccount(acc1);
// n->addAccount(acc2ptr);
// acc2.followAccount("one");
// General* post = new General("cheese", "pizza", "one");
// General* post2 = new General("u", "1", "2");
// acc1->addPost(post2);
// acc1->addPost(post);

// n->printFeedForAccount(acc2);
// acc1->removePost(post);
// acc1->updatePost(post, "title", "body");

// n->removeIfContains("cheese");
// std::cout << "new: aljdlajsladfsjlafjlafjalhdsal\n";
// n->printFeedForAccount(acc2);

// delete n, acc1, post, post2;
// n, acc1, post, post2 = nullptr;

// acc.setNetwork(&n);
// acc2.setNetwork(&n);




// n.addAccount(&acc);
// n.addAccount(&acc2);
// n.addToFeed(&post);
// n.authenticateFollow(acc, acc2.getUsername());
// acc2.addPost(&post);
// n.printFeedForAccount(acc);

// cout << "size: " << n.getSizeOfNetwork() << endl;

// cout << n.containsAccount(&acc) << endl;
// // cout << "index: " << n.getIndexOf(acc.getUsername()) << "\n";
// n.removeAccount(&acc);

// n.operator-=(n2);
// cout << n.isEmpty() << "\n";
// n.clear();








// n.populateNetwork("text.txt");
// cout << n.getSizeOfNetwork();



}

