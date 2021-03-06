# Λυμένα Παραδείγματα 2

## Παράδειγμα 1

Διορθώστε τα συντακτικά λάθη στον παρακάτω κώδικα:

```c
#include stdio.h

#define ONE 1
#define TWO 2
#define ΤΕΣΣΕΡΑ 4

main()
{
    int c = 3, a, b, γ;
    float c = 5.6;
    b = ONE + TWO;
    a = printf("Hello World!");
    printf('Telos');
    return 0;
} 
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-01.c).

## Παράδειγμα 2

Να γραφεί ένα πρόγραµµα το οποίο να ζητάει τρεις δεκαδικούς αριθµούς, να υπολογίζει, και να εµφανίζει το µέσο όρο τους.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-02.c).

## Παράδειγμα 3

Τι θα εµφανίσει στην οθόνη το ακόλουθο πρόγραµµα;

```c
#include <stdio.h>

int main()
{
    int a = 4,b = 5;
    char ch;
    ch = 'A';
    printf("%d %d %c", a, b, ch);
    printf("%d%d %d\n", a, b, ch);
    printf("%d\n%d \n%c\n", a, b, ch);
    printf("Telos\n");
    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-03.c).

## Παράδειγμα 4

Να γραφεί πρόγραµµα το οποίο να ζητάει 3 αριθµούς και να υπολογίζει το άθροισµα, το γινόµενο, και το µέσο όρο τους. Το πρόγραµµα να µας βγάζει µηνύµατα για το τι πρέπει να δώσουµε και να βγάζει τα αποτελέσµατα όπως στο παρακάτω παράδειγµα.

```none
∆ώσε τον πρώτο αριθµό: 6
∆ώσε το δεύτερο αριθµό: 2
∆ώσε τον τρίτο αριθµό: 10
Το άθροισµα των 6,2,10 είναι 18
Το γινόµενο των 6,2,10 είναι 120
Ο µέσος όρος των 6,2,10 είναι 6
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-04.c).

## Παράδειγμα 5

Να γραφεί πρόγραµµα το οποίο να ζητάει να πληκτρολογήσουµε δύο ακέραιους αριθµούς που θα χωρίζονται µε ένα κόµµα (,) και έναν αστερίσκο (*) και να εµφανίζει το άθροισµά
τους.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-05.c).

## Παράδειγμα 6

Να γραφεί πρόγραµµα το οποίο θα διαβάζει την ακτίνα ρ ενός κύκλου και θα εµφανίζει την περίµετρο και το εµβαδόν του (περίµετρος = 2*π*ρ, εµβαδόν = π*ρ^2). Το πρόγραµµα να
προτρέπει το χρήστη για την είσοδο δεδοµένων µε τη φράση "∆ώσε ακτίνα:". Η τιµή του π να ορίζεται ως σταθερά µε τιµή 3.141592.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-06.c).

## Παράδειγμα 7

Να γραφεί πρόγραμμα το οποίο θα ζητάει να πληκτρολογήσουμε ένα ποσό και το ποσοστό (%) ΦΠΑ στο οποίο ανήκει. Το πρόγραμμα θα υπολογίζει και θα εμφανίζει το τελικό κόστος (ποσό + ΦΠΑ).

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-07.c).

## Παράδειγμα 8

Ο δείκτης Μάζας Σώματος (ΔΜΣ) υπολογίζεται από τον τύπο Β/Υ^2, όπου Β το βάρος σε κιλά και Υ το ύψος σε μέτρα. Να γραφεί πρόγραμμα το οποίο θα ζητάει να πληκτρολογήσουμε το βάρος και το ύψος ενός ατόμου και θα υπολογίζει τον ΔΜΣ. Το πρόγραμμα θα εμφανίζει το ύψος και το βάρος που δώσαμε, καθώς και τον ΔΜΣ που υπολόγισε.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-08.c).

## Παράδειγμα 9

Τι θα εμφανίσει στην οθόνη το ακόλουθο πρόγραμμα;

```c
#include <stdio.h>

int main()
{
    int a, b, aa, bb, x, y;
    x = y = 100;
    a = ++x;
    b = y++;
    aa = ++x;
    bb = y++;
    printf("Η τιμή του a ειναι %d\n", a);
    printf("Η τιμή του b ειναι %d\n", b);
    printf("Η τιμή του aa ειναι %d\n", aa);
    printf("Η τιμή του bb ειναι %d\n", bb);
    return 0;
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-09.c).

## Παράδειγμα 10

Να γραφούν οι επόµενες τρεις προτάσεις ως µία πρόταση,χρησιµοποιώντας τον τελεστή ++.

```c
y = y + 1; 
z = x + y; 
x = x + 1;
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-10.c).

## Παράδειγμα 11

Τι θα εµφανίσει στην οθόνη το ακόλουθο πρόγραµµα;

```c
#include <stdio.h>

int main()
{

    int a, b, c, d, e;
    a = b = c = d = 5;
    a++;
    b = ++a;
    c = --d;
    e = ++a * d--;

    printf("Η τιµή του a ειναι %d\n", a);
    printf("Η τιµή του b ειναι %d\n", b);
    printf("Η τιµή του c ειναι %d\n", c);
    printf("Η τιµή του d ειναι %d\n", d);
    printf("Η τιµή του e ειναι %d\n", e);

    return 0; 
}
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-11.c).


## Παράδειγμα 12

Να γραφεί πρόγραµµα το οποίο να εµφανίζει τους κωδικούς των χαρακτήρων 'a', '*', και του κενού διαστήµατος ' '.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-12.c).

## Παράδειγμα 13

Να γραφεί πρόγραµµα το οποίο να εµφανίζει τους χαρακτήρες µε κωδικούς ASCII 80, 125, και 192.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-13.c).

## Παράδειγμα 14

Ποιο θα είναι το αποτέλεσµα του επόµενου προγράµµατος:

```c
#include <stdio.h>

int main()
{
    char ch = 68,let = 'L';
    int a = 2,b = 4;
    a = ch + let;
    ch = ++let;
    printf("a = %d ch = %c let = %c\n", ++a, ch, let);

    return 0;
}
```

- Η παράσταση ch+let έχει αποτέλεσµα 144 (68 + 76) δεδοµένου ότι ο κωδικός ASCII του 'L' είναι 76.
- Η πρόταση ++let αυξάνει τη let κατα 1 και την κάνει 77, που είναι ο ο κωδικός ASCII του 'Μ'.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-14.c).

## Παράδειγμα 15

Να γραφεί πρόγραµµα το οποίο να δέχεται έναν αριθµό από το πληκτρολόγιο και να εµφανίζει το χαρακτήρα µε αυτόν τον κωδικό ASCII.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-15.c).

## Παράδειγμα 16

Να γραφεί πρόγραµµα το οποίο να εµφανίζει στην οθόνη τα αποτελέσµατα του παρακάτω πλαισίου. Το πλαίσιο µε τη διπλή γραµµή θα πρέπει να υλοποιηθεί µε χαρακτήρες που θα εντοπίσετε στον πίνακα ASCII.

```none
╔═══╗ 
║ C ║ 
╚═══╝ 
```

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-16.c).

## Παράδειγμα 17

Τι αποτέλεσµα θα έχει το επόµενο πρόγραµµα και γιατί;

```c
#include <stdio.h>

int main(void)
{
    float d;
    int a = 5,b = 6;
    d = (a + b) / 2;
    printf("%f\n", d);

    return 0;
}
```

- Η παράσταση `(a+b)/2` θα έχει αποτέλεσµα τύπου `int` διότι όλα τα µέλη της είναι τύπου `int`. Έτσι το αποτέλεσµά της θα είναι 5, και όχι 5.5 που θα ήταν το αναµενόµενο.
- Αν θέλαµε να υπολογιζόταν σωστά, τότε θα έπρεπε να γραφεί ως `(a+b)/2.0`. Το `2.0`, που είναι τύπου `double`, "εξαναγκάζει" την όλη παράσταση να έχει αποτέλεσµα `double`, οπότε διατηρεί τα δεκαδικά της ψηφία.

Για να κατεβάσετε την **ΛΥΣΗ** πατήστε [εδώ](../source/lecture-02/example-17.c).
