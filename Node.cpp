/*
List class implementation for term projects
CSCI 235 Fall 2022
Hunter College
*/

//Name: Akshay Hanooman
//Date Due: October 28, 2022
//Node.cpp
//Project 4 - Given Node Class

/*
    Default Constructor
*/
template <class ItemType>
Node<ItemType>::Node() : next_{nullptr} {} //lets the new node point to nullptr [][nullptr]


/*
    Parametarized Constructor
    @param item - the item to be constructed
    @param next_node - the next node to point to
 */
template <class ItemType>
Node<ItemType>::Node(const ItemType& item, Node<ItemType> *next_node) : item_{item}, next_{next_node} {}


/*
    Setter function for node item
    @param anItem - the item to be set in item_
*/
template <class ItemType>
void Node<ItemType>::setItem(const ItemType &anItem) {
    item_ = anItem;
}


/*
    Setter function for pointer to next node in chain
    @param nextNodePtr - the nextNodePtr to be set in next_
*/
template <class ItemType>
void Node<ItemType>::setNext(Node<ItemType> *nextNodePtr){
    next_ = nextNodePtr;
}



/*
    @return returns the value for item_
*/
template <class ItemType>
ItemType Node<ItemType>::getItem() const { return item_; }


/*
    @return returns the value for next_
*/
template <class ItemType>
Node<ItemType> *Node<ItemType>::getNext() const { return next_; }
