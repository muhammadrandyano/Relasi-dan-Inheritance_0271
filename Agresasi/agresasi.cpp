#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"  

int main(){
    ibu*varibu = new ibu("dini");
    ibu*varibu2 = new ibu("novi");
    anak*varAnak1 = new anak ("tono");
    anak*varAnak2 = new anak ("rini");
    anak*varAnak3 = new anak ("dewi");
    
    varibu->tambahkanAnak(varAnak1);
    varibu2->tambahkanAnak(varAnak2);
    varibu2->tambahkanAnak(varAnak3);
    varibu2->tambahkanAnak(varAnak1);

    varibu->cetakAnak();
    varibu2->cetakAnak();