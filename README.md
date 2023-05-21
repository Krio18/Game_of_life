# Game_of_life

"Game of Life" is a computer program that simulates an environment composed of living and dead cells, originally developed by the British mathematician John Conway in 1970. This simulation is based on a set of simple rules that determine the evolution of cells over generations.

------------------------------------------------------------------------------------
![Image de démonstration](asset/game-of-life.png)

------------------------------------------------------------------------------------

## Installation :

Get `this` commande in your shell :

    curl -o get_cell.sh https://raw.githubusercontent.com/Krio18/Game_of_life/main/get_cell.sh && bash get_cell.sh

`After that` you can delete 'get_cell.sh' of your root.


## Rules :

1.  A living cell with fewer than two living neighbors dies, simulating underpopulation.
2.  A living cell with two or three living neighbors survives, simulating a balanced population.
3.  An empty space with exactly three living neighbors becomes a cell in the next generation, simulating reproduction.
4.  A living cell with more than three living neighbors dies, simulating overpopulation.



### Run :

`Because it's cool to use it :`

<pre>Usage: cell [optional_file_map] [optional_number]"</pre>

