# Game_of_life

"Game of Life" is a computer program that simulates an environment composed of living and dead cells, originally developed by the British mathematician John Conway in 1970. This simulation is based on a set of simple rules that determine the evolution of cells over generations.

------------------------------------------------------------------------------------

## Rules

1.  A living cell with fewer than two living neighbors dies, simulating underpopulation.
2.  A living cell with two or three living neighbors survives, simulating a balanced population.
3.  An empty space with exactly three living neighbors becomes a cell in the next generation, simulating reproduction.
4.  A living cell with more than three living neighbors dies, simulating overpopulation.


## comment L'utiliser :

### build :

`make`

### run :

<pre>`./gameoflife` - generates a random life. (in progress)</pre>
<pre>`./gameoflife [example_map]` - generates life based on the given map. (in progress)</pre>
<pre>`./gameoflife [optional_map] [number]` - generates life and only displays the requested life cycle. (in progress)</pre>
