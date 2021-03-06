/*
-------------------------------------------------------------------------------
Adapted header file for lookup3.c (hash_function.c for this project) by Bob Jenkins
-------------------------------------------------------------------------------
*/

#ifndef HASH_FUNCTION_H
#define HASH_FUNCTION_H
# include <stdint.h>     /* defines uint32_t etc */
/**
 * Hash function
 *
 * At this moment lookup3 by Bob Jerkins
 *
 * @param key key
 * @param length key length
 * @param initval hash init val
 * @return hash value of key
 * @see http://burtleburtle.net/bob/hash/index.html
 * @author Bob Jenkins <bob_jenkins@burtleburtle.net>
 */
uint32_t hash_function(const void *key, uint32_t length, uint32_t initval);

#endif /* HASH_FUNCTION_H */
