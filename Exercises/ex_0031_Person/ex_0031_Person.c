// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

// Function definitions
// TODO: implement ex_0031_Person
void ex_0031_Person()
{
   Person table[10] = {{"Knuth", "Donald", 1938},
                  {"Kernighan", "Brian", 1942},
                  {"Ritchie", "Dennis", 1941},
                  {"Thompson", "Ken", 1943},
                  {"Minsky", "Marvin", 1927},
                  {"Dijkstra", "Edsger", 1930},
                  {"Stroustrup", "Bjarne", 1950},
                  }; 
    
   int nbrePerson = 0;
   for(int i = 0; i < 10; ++i)
   {
      if(table[i].birthYear != 0)
      {
         ++nbrePerson;
      }
   }
   printf("%d Persons\n", nbrePerson);

   printf("Persons less than 80 years old:\n");
   for(int i = 0; i < nbrePerson; ++i)
   {
      if((2020 - table[i].birthYear) < 80)
      {
         printf("%s %s %d years\n",table[i].firstName, table[i].name, (2020-table[i].birthYear));
      }
   }

   int first = 0;
   int last = 0;

   for (int i = 1; i < nbrePerson; ++i)
   {
      if (strcmp(table[i].name, table[first].name) < 0)
      {
         first = i;
      }

      if (strcmp(table[i].name, table[last].name) > 0)
      {
         last = i;
      }
   }

   printf("\nAlphabetic order:\n");
   printf("The first is: %s\n", table[first].name);
   printf("The last is: %s\n", table[last].name);
}
