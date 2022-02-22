#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#include <myhtml/api.h>


using namespace std;

int main(int argc, const char* argv[]) {
    // cout << "aaa" << endl;
    char html[] = "<div><span>HTML</span></div>";

    // init.
    myhtml_t* myhtml = myhtml_create();
    myhtml_init(myhtml, MyHTML_OPTIONS_DEFAULT, 1, 0);
    myhtml_tree_t* tree = myhtml_tree_create();
    myhtml_tree_init(tree, myhtml);

    // parse.
    myhtml_parse(tree, MyENCODING_UTF_8, html, strlen(html));

    // print.
    mycore_string_raw_t str = {0};
    myhtml_serialization_tree_buffer(myhtml_tree_get_document(tree), &str);
    cout << str.data << endl;
    // printf("%s\n", str.data);

    // release resource.
    mycore_string_raw_destroy(&str, false);
    myhtml_tree_destroy(tree);
    myhtml_destroy(myhtml);

    return 0;
}
