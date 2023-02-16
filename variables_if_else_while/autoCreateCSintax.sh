echo "Please type file name"
read fileName

cat <<EOT >> $fileName
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
EOT

echo "File created successfuly."
