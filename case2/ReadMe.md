2. Given a matrix of size M*N with only 0s and 1s, provide the options to perform the following:
Option 1 Row wise processing of the
numbers to replace the repeating
number by only one
representation of the same
E.g : Sample I/P -
{ 1, 0, 0, 0 },
{ 1, 1, 0, 1 },
{ 0, 1, 0, 0 },
{ 1, 1, 1, 1 }
number and remaining spaces to
be filled by ‘*’
Expected O/P -
1, 0, *, *
1, 0, 1, *
0, 1, 0, *
1, *, *, *
Option 2 Column wise processing of the
numbers to replace the repeating
number by only one
representation of the same
number and remaining spaces to
be filled by ‘*’
E.g : Sample I/P -
{ 1, 0, 0, 0 },
{ 1, 1, 0, 1 },
{ 0, 1, 0, 0 },
{ 1, 1, 1, 1 }
Expected O/P -
1, 0, 0, 0
0, 1, 1, 1
1, *, *, 0
*, *, *, 1
Option 3
Diagonal (both the diagonals) wise
processing of the numbers to
replace the repeating number by
only one representation of the
same number and remaining
spaces to be filled by ‘*’
E.g : Sample I/P -
{ 1, 0, 0, 0 },
{ 1, 1, 0, 1 },
{ 0, 1, 0, 0 },
{ 1, 1, 1, 1 }
Expected O/P -
1, 0, 0, 0
0, 0, 1, 1
1, *, 1, 0
*, 1, 1, *
Corner
case
If the complete sequence in the
matrix has no repeating elements,
then display an appropriate
message to the user
