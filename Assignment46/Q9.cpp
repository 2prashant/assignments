9. Given two maps map1 and map2 having a string as the key and arrays of integers as
values, the task is to merge them in one map such that if a key is common in both the
maps, the respective arrays should be merged.
Example:
Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
Explanation: After merging key1 array will become {0, 1} and for key2 after merging
array will become {0, 1, 2}
