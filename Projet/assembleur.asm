.data
tableau:    .float  1.5, 2.3, 4.0, 5.2, 7.8
taille:     .word   5
somme:      .float  0.0

.text
main:       
    # Initialisation on utilise .s pour les float par exemple l.s au lieu de lw
    la      $t0,    tableau                 # Charger l'adresse du tableau dans $t0 (compteur)
    lw      $t1,    taille                  # Charger la taille du tableau dans $t1
    l.s     $f2,    somme                   # Charger 0.0 dans $f2 (somme)

    # Boucle de calcul de la somme
boucle:     
    l.s     $f0,    0($t0)                  # Charger l'élément courant du tableau dans $f0
    add     $t0,    $t0,        4           # Avancer à l'élément suivant
    add.s   $f2,    $f2,        $f0         # Ajouter l'élément courant à la somme
    addi    $t1,    $t1,        -1          # Décrémenter la taille du tableau
    bnez    $t1,    boucle                  # Continuer la boucle tant que la taille n'est pas nulle

    # Afficher le résultat
    li      $v0,    2                       # Code pour l'affichage d'une nombre reel
    mov.s   $f12,   $f2                     # Charger la somme dans $f12
    syscall # syscall 2 affiche la valeur dans $f12

    # Terminer le programme
    li      $v0,    10
    syscall 
