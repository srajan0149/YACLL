/*
this file is intended to test invalid identifier names
the output should be an error statement
*/

int fun6() {
    bool 9invalid = false  ; // to test detection of unknown
    return  "testing\n"  ;
}