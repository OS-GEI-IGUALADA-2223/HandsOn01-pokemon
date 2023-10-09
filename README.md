# Resolució del HandsOn01 de l'assignatura

## Organització

* main: Conté la versió final amb les llibreries no visibles.
* pokemon-visible: Conté la versió inicial del HandsOn on l'estrctura del pokemon és visible per la resta de codi que utilitzen la llibreria.
* pokemon-novisible: Conté la història de les modificacions fetes al codi, podeu analitzar els diferent commits per veure com ha evolucionat.

## Instruccions d'ús

1. **Compilar la llibreria pokemon-lib utilitzant el seu Makefile**. Navegueu al directori pokemon-lib i executeu la comanda make a la terminal per compilar la llibreria.

    ```sh
    cd pokemon-lib
    make
    ```

2. **Provar la llibreria utilitzant make test**. Després de compilar la llibreria, executeu la comanda *make test* per executar les proves i assegurar-vos que la llibreria funcioni correctament.

    ```sh
    make test
    ```

3. **Compilar el programa principal (main) amb el seu Makefile**.Torneu al directori principal i executeu la comanda make per compilar el programa principal. Observeu que no funcionarà si no heu compilat la llibreria prèviament.

    ```sh
    cd ..
    make
    ```

4. **Executar el programa utilitzant make execute**.

    ```sh
    make execute
    ```

Assegureu-vos d'entendre bé tots els passos d'aquest codi.
