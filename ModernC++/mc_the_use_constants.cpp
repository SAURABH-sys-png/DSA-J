//1. The Left-Right Rule for Pointers

//he syntax for const with pointers often trips people up, but Meyers gives you an infallible rule of thumb to read it. Look at the asterisk (*):

//    const to the LEFT of the *: The data being pointed to is constant. You cannot change the value of the object, but you can move the pointer to point somewhere else.

 //   const to the RIGHT of the *: The pointer itself is constant. The pointer is locked to one memory address, but you can alter the data sitting at that address.

 //   const on BOTH sides: Everything is constant. You cannot move the pointer, and you cannot change the data.