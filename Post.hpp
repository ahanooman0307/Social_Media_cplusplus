/****************************************************************************************************************************
//Name: Akshay Hanooman
//Date Due: November 20, 2022
//Post.cpp
//Project 5 - Made comparator functions to compare the usernames of the Network Feed
****************************************************************************************************************************/

#ifndef POST_
#define POST_

#include <iostream>
#include <string>
#include <time.h>

class Post {
public:

   enum priority { LOW, MEDIUM, HIGH };
   void like();
   int getLikes();
   void setPriority(priority priority_id);
   

  /**
     Parameterized constructor.
     @param      : The title of the post (a string)
     @param      : The body content of the post (a string)
     @param      : The username of the Account that added this post (a string)

     @post         : Sets the title, body and username to the value of the parameters
                     It will also generate the current time and store it
  */
    Post(std::string title, std::string body, std::string username);


    /**
       @return : the title of the Post
    */
    std::string getTitle() const;


    /**
      @param  : a reference to title of the Post
      @post   : sets the private data member to the value of the parameter
    */
    void setTitle(const std::string& title);


    /**
       @return : the body of the Post
    */
    std::string getBody() const;

    /**
       @param  : a reference to body of the Post
       @post   : sets the private data member to the value of the parameter
    */

    void setBody(const std::string& body);

    /*
       Accessor Function
       @return       : username associated with this Post
    */
    std::string getUsername() const;



    /*
       Mutator Function
       @param        : a reference to the username associated with this Post
       @post   : sets the private data member to the value of the parameter
    */
    void setUsername(const std::string& username);

    /**
       @post   : prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))
    */
    void getTimeStamp() const;

    /*
       Mutator Function
       @post   : sets the private data member to the current time
    */
    void updateTimeStamp();


    void virtual displayPost() = 0;

    bool operator<(const Post &post)const; //function to compare username
    bool operator>(const Post &post) const; //function to compare username
      

private:
    std::string post_title_;
    std::string post_body_;
    time_t time_stamp_;
    std::string username_;
    int likes_;
    priority priority_id;
   



};//end Post

#endif
