#include "main.h"
/**
*_islower -  function that checks for lowercase character 
*@c: charecter to check
*Return: 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
