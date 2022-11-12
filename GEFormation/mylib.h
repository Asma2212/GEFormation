struct date
{
    int jour;
    int mois;
    int annee;

};
typedef struct date DATE;

struct specialite
{
    int codeSp;
    int nomSp;

};
typedef struct specialite SPECIALITE;

struct candidat
{
    int ce;
    DATE dateNaiss;
    int numTel;
    char nom[20];
    char prenom[20];
    char email[20];


};
typedef struct candidat CANDIDAT;

struct formateur
{
    int ceF;
    DATE dateNaissF;
    int numTel;
    char nomF[20];
    char prenomF[20];
    char emailF[20];
    int nbSpecialite ;
    SPECIALITE *spF ;

};
typedef struct formateur FORMATEUR;