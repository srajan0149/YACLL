/*
this file tests the lexer on detecting all possible token types
all kinds of identifiers, comments, types, operators and constructs valid in YACLL have been used in the following functions
*/

int types_and_operators(){
    text name_checker_98  =  "test_986\n@$#%(*&[{!}])"  ; // checking whitespace and identifier syntax
    int _ = sizeof(name_checker_98); // int, assignment
    fp string = 4.56;// string isn't a keyword, fp is
    char c = 't'; // char
    struct tested { // struct
        bool invalid = false&&(5>=90) || !(5>6) && true||false; // bool, logical operators
        text n = "the answer to life, the universe, and everything"; // text
        fp float = 42.0; // fp
    };
    struct tested T;
    struct tested *T;
    const int _0 = 0; // const, identifier name test
    int arithmetic = ((5+4-0*16)/8)%3**2;
    int* ptr = &arithmetic; // pointer, dereference, address
    bool True = (1<=0) || (2<3) || (4!=5) || (6==7); // Ture isn't a keyword, relational operators
    bool * bptr = & True; // pointer, dereference, address with whitespace
    tensors(15, 20);
}

void tensors(int x, int y){ // just to test function call and definition syntax detection
// single comment, metasyntactic variable _ foo && bar +
    tensor<int , 2, 7> a; // creating a tensor a with dimensions 2X7
    tensor<int, 7, 2> b;
    tensor<int, 7, 2> c;
    tensor<int, 7, 2> d = b .+ c;// .+, element wise addition
    tensor<int, 7, 2> e = b .- c;// .-, element wise subtraction
    tensor<int, 7, 2> f = b .* c;// .*, element wise multiplication
    tensor<int, 7, 2> g = b ./ c;// ./, element wise division
    tensor<int, 2, 2> h = a @ b;// @, tensor contraction
    tensor<int, 7, 2, 7, 2> i = b @* c;// @*, tensor product

    for item in a axis(1, 0)
    {
        int a = item.value;
        int i = item.indices[0];
    }

    int x = a[0][0];
}

void loops(){ // testing labelled loops
    `loop_label1: // single forward apostrophe
    while(True){
        int i = 0;
        while(True){
            if(i > 5){
                break loop_label1;
            }
            else if (i>100){
                i=i+3;
            }
            i=i+1;
        }
    }
}