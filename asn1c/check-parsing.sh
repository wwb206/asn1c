#!/bin/sh

tmpfile=".check-parsing.$$.tmp"

ec=0

for ref in ../tests/*.asn1.-*; do
	src=`echo "$ref" | sed -e 's/\.-[-a-zA-Z0-9=]*$//'`
	flags=`echo "$ref" | sed -e 's/.*\.-//'`
	echo "Checking $src against $ref"
	./asn1c "-$flags" "$src" > "$tmpfile" || ec=$?
	if [ $? = 0 ]; then
		diff -a -u "$ref" "$tmpfile" || ec=$?
	fi
	rm -f "$tmpfile"
done

exit $ec
