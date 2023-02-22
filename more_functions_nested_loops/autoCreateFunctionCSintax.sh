echo "Please type file name"
read fileName

echo "Please type function name"
read funcName

echo "Please type function description"
read funcDesc

echo "Please type param type"
read paramType

echo "Please type the return description"
read retDesc

echo "Please type function type"
read funcType

cat <<EOT >> $fileName
#include "main.h"

/**
 * $funcName - $funcDesc
 *
 * @n: $paramType
 * Return: $retDesc
 */
$funcType $funcName($paramType n)
{
	return ();
}
EOT

echo "$funcType $funcName($paramType);" >> main.h

echo "File created successfuly."
