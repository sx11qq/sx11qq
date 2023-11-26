#include <iostream>
#include <string>
using namespace std;

void print_flag_part_1() {
    string s = "ptech2041{13d0437_c741N1_go0M_c22j4h}";
    cout << s.substr(0, 5); 
}

void print_flag_part_2() {
    string s = "123452023{qwepois_zxeqyw_1234_hsad41}";
    cout << s.substr(5, 4);
}

void print_flag_part_3() {
    string s = "pt1c73092{R3m0v24_87fnwQ_123z_jf74ma}";
    cout << s.substr(9, 6);
}

void print_flag_part_4() {
    string s = "ptg3h2440{54aew3D_StRoap_asdk_jg72da}";
    cout << s.substr(15, 6);
}

void print_flag_part_5() {
    string s = "12ech2424{f72nfk5_fga1Ng_Fr1v_jr7aft}";
    cout << s.substr(21, 6); 
}

void print_flag_part_6() {
    string s = "ptech1111{R3m0v3D_hgya34_gf0M_G1t123}";
    cout << s.substr(27, 6);
}

void print_flag_part_7() {
    string s = "pt12h4094{s3s1s64_ey21jh_zxcv_b2gh4B}";
    cout << s.substr(33, 3);
}

void print_flag_part_8() {
    string s = "pt3Ch2028{hcxjwb1_qwb741_acta_a4ggaz}";
    cout << s.substr(36, 1);
}

int main() {
    print_flag_part_1();
    print_flag_part_2();
    print_flag_part_3();
    print_flag_part_4();
    print_flag_part_5();
    print_flag_part_6();
    print_flag_part_7();
    print_flag_part_8();
    cout << endl;
    return 0;
}
