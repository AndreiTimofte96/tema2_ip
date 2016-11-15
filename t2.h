#include <cstring>
#define MAX_ADN 35
#define MAX_CARTONASE 1000
#define MAX_SIR 15

using namespace std;
typedef struct {
    char galben;
    union {
        char verde;
        char portocaliu[3];
    };
} cartonas;

struct mutare {
    cartonas nod;
    struct mutare *urmator;
};

typedef mutare* lista;

void codificareADN(long long nrIntreg, char sirADN[MAX_ADN]);
long long decodificareADN(char sirADN[MAX_ADN]);
void adunareADN(char primulSir[MAX_ADN], char alDoileaSir[MAX_ADN], char suma[MAX_ADN]);
void scadereADN(char primulSir[MAX_ADN], char alDoileaSir[MAX_ADN], char diferenta[MAX_ADN]);
lista mutariJoc(cartonas vecCartonase[MAX_CARTONASE], char literaStart, char sirFinal[MAX_SIR]);
