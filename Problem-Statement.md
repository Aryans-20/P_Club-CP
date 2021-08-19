# Horcrux Quest
The Dark Lord has come back to life yet again, turns out that he had another horcrux and this time he has it hidden in n identical caves making it very hard to find. So much so that even Dumbledore cannot find it. :fearful:

Things look grim huh? 

Well, not quite. Dumbledore has been doing some investigating of his own and says that Griphook is willing to help if he is given maximum possible number of galleons from these caves.

This is what Dumbledore found out:

1.)  The cave is in form of a tree of depth m, where each node has 2 children where each node is either a dead-end or contains a number of Galleons and from each node it is only possible to go to its children.

2.)  Each cave is guarded by Death Eaters. So, there is only a specific range of nodes(nodes numbered between l and r) where you can begin your exploration of the cave without being detected. These are the places you apparate to from outside and once you are in undetected you put on your Cloak of Invisibility and roam the caves freely but remember that from a given node you can only travel to its children.

3.)  Griphook will meet you at the end of your quest and will give you the **Horcrux** if you can give him the maximum number of Galleons that you could have picked up in your quest without being detected.


Dumbledore has drawn a map of the caves for you which would be given in the form of an array with indices starting from 0.
The Golden-trio has specially requested for your assistance for this taxing task. Help them out and save the day.

## Input
The first line contains 2 integers n and m.

The second line contains an (2^m-1) integers a0,a1,a2.... where the value ai is either a positive integer representing the number of galleons at node i or "-1" for representing a dead end.

Note that this array represents a tree structure where the children of node at index i lie at indices 2i+1 and 2i+2 of the array and all the children of a dead end are also dead-ends. 

This is followed by n lines containing 2 integer l,r representing the safe landing range for each of the caves. Given l and r it is safe to land at index i of iff l≤ i ≤ r.

## Contraints
1 ≤ n ≤ 1000000

0 ≤ li ≤ ri ≤ (n-1) 
 
1 ≤ m ≤ 20

-1 ≤ ai ≤ 1000

## Output
n lines where ith line conatins the maximum number of attainable galleons for the ith cave.

## Example
### Input
2 3

1 -1 7 -1 -1 2 6

1 2

3 4

### Output
13

0
### Explanation

 So for cave 1 the best you can do is apparate to node 2(with 7 galleons) and then go to node 6( with 6 galleons). Hence you get 13 galleons.
  
 For cave 2 only places you can arrive at are dead ends therefore you cannot take any money from  cave 2.
  

