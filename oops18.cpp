/* class a {};
a.obj;
cout << sizeof(obj);  //1  */


/*class a {
    char c;
    int b;
};
a.obj;
cout << sizeof(obj);  //8  ---> concept of padding to read data in an efficient manner */


/*class a {
    char c;
    char d;
    int b;
};
a.obj;
cout << sizeof(obj);  //8 */



/*class a { 
    char c;
    int b;
    char d;
};
a.obj;
cout << sizeof(obj);  //12 */
// c p p p b b b b d p p p


/*class a {
    char c;
    char d;
    int b;
    double e;
};
a.obj;
cout << sizeof(obj);  //16 */
// c d p p b b b b e e e e e e e e


/*class a {
    char c;
    int b;
    char d;
    double e;
};

a.obj;
cout << sizeof(obj);  //24 */
// c p p p b b b b d p p p p p p p e e e e e e e e