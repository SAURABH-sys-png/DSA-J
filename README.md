# DSA-J — Data Structures, Algorithms & Competitive Programming

Personal C++ problem archive: **LeetCode**, **CSES**, **Codeforces**, tree implementations, and Modern C++ notes.  
**222** `.cpp` files in repository (July 2026).

---

## Repository structure

```
DSA-J/
├── cses_probs/           (33)  CSES Introductory / Sorting & Searching
├── codeforces/           (35)  CF ad-hoc, math, and live contest solutions
├── leetcodeprobs/        (131) LeetCode-style + weekly/contest practice
├── advancedConcept/      (20)  BST, AVL (draft), heaps, greedy classics, search algorithms
├── ModernC++/             (3)   const / static / contest I/O notes
└── README.md
```

---

## Detailed File Documentation

### advancedConcept/ (20 files)

Core data structure implementations, greedy classics, and search techniques:

| File | Topic | Status | Notes |
|------|-------|--------|-------|
| `ac_activity_selection.cpp` | Activity Selection | ✓ Complete | Sort by end time; greedy interval scheduling |
| `ac_avl_tree_implementation.cpp` | AVL Tree | **Draft** | Incomplete insert/balance logic; passes by value bug |
| `ac_b_tree.cpp` | B-Tree | **Stub** | Empty structure, no implementation |
| `ac_binary_search_basic.cpp` | Binary Search | ✓ Complete | Linear search on sorted array [1,23...100] for value 1; tracks iteration count |
| `ac_binary_search_tree.cpp` | BST | ✓ Complete | Insert (by reference), search, traversal, incomplete delete |
| `ac_connect_n_ropes.cpp` | Connect N Ropes | ✓ Complete | Min-heap greedy; classic Huffman-style rope joining |
| `ac_heaps.cpp` | Max Heap | ✓ Complete | Dual classes: `insertion_Heaps` and `deletion_Heaps`; upheapify logic |
| `ac_interpolation_search.cpp` | Interpolation Search | ✓ Complete | Adaptive search formula: `mid = beg + (end-beg)*((num-arr[beg])/(arr[end]-arr[beg]))` |
| `ac_knapsak.cpp` | Knapsack | **Stub** | Empty `solve()`; fractional knapsack planned |
| `ac_matches_org.cpp` | Tournament Bracket | ✓ Complete | Interactive single-elimination bracket with bye handling |
| `ac_merge_overlapping_intervals.cpp` | Merge Intervals | ✓ Complete | Sort + sweep; merges overlapping `[a,b]` pairs |
| `ac_min_fibonacci.cpp` | Fibonacci Representation | ✓ Complete | Greedy decomposition of integer into Fibonacci numbers |
| `ac_minimum_platforms.cpp` | Minimum Platforms | Partial | O(n²) brute overlap check; not the sweep-line optimal |
| `ac_min_rotations.cpp` | Min Rotations | **Incomplete** | Empty `solve()` body |
| `ac_placeholder_greeting.cpp` | - | Stub | Hello-world placeholder |
| `ac_prime_pair_sieve.cpp` | Sieve + Pairs | ✓ Complete | Generates consecutive prime pairs; Sieve of Eratosthenes up to 200000 |
| `ac_smallest_arraysize_sum_greaterthanrest.cpp` | Two-pointer Trim | ✓ Complete | Shrinks array from ends until remaining sum > 0 |
| `ac_threaded_binary_tree.cpp` | Threaded BT | Partial | Constructor, insert scaffolding with threading flags `lThread`, `rThread` |
| `ac_tree_inorder_traversal.cpp` | Tree Traversal | ✓ Complete | Classic recursive inorder (left → node → right) for LeetCode-style `TreeNode` |
| `.longcon.cpp` | Longest Consecutive | Partial | Sort-based approach; duplicates handled but not optimal O(n) hash set |

---

### codeforces/ (35 files)

Ad-hoc, greedy, math, and live contest problems. Split into legacy `cf_*` files and contest-named solutions.

#### Legacy `cf_*` problems (18 files)

| File | Problem | Difficulty | Status |
|------|---------|------------|--------|
| `cf_army.cpp` | Range sum query | ⭐ Easy | ✓ Reads array, computes sum in range [a, b) |
| `cf_array_max_sum.cpp` | Seven elements optimization | ⭐ Easy | ✓ Finds max, minimizes (sum - 2*max) |
| `cf_array_permutation.cpp` | Permutation construction | ⭐ Easy | ✓ Alternates count (1,2,3...) and place descending |
| `cf_convergence.cpp` | Minimize max difference | ⭐⭐ Medium | ✓ Tries each element as target; counts L/R differences |
| `cf_digit_construction.cpp` | Build smallest number | ⭐⭐ Medium | Partial | Greedy digit selection with prefix building |
| `cf_distance_calculation.cpp` | Circular distance | ⭐ Easy | ✓ min(diff, n - diff) with median case handling |
| `cf_divisibility_check.cpp` | Divisibility logic | ⭐⭐ Medium | ⚠️ Buggy | Incomplete divisor checking loop |
| `cf_divisible_groups.cpp` | Grouping by divisibility | ⭐⭐ Medium | ✓ Counts elements % 3 == 0; pairs remainder elements |
| `cf_euclidsseq.cpp` | Euclid sequence check | ⭐⭐ Medium | ✓ Validates descending GCD chain or outputs -1 |
| `cf_games_onTrains.cpp` | Train game range | ⭐ Easy | ✓ Answer is max − min + 1 |
| `cf_gcd_lcm.cpp` | GCD/LCM operations | ⭐⭐ Medium | **Broken** | Incomplete; doesn't compile |
| `cf_omsk_programmers.cpp` | Omsk programmers | ⭐⭐ Medium | **Stub** | Empty `solve()` |
| `cf_sequence_generation.cpp` | Sequence from n | ⭐ Easy | ✓ Builds pattern: 2, then n, n-1... 3, then 1 |
| `cf_simple_increment.cpp` | Special case n=67 | ⭐ Easy | ✓ Returns 67 if n==67, else n+1 |
| `cf_switch_indexes.cpp` | Binary string parity | ⭐⭐ Medium | ✓ Checks each residue class mod k has even count of 1s |
| `cf_tatar_tv.cpp` | Frequency assignment | ⭐⭐ Medium | Partial | Greedy frequency-to-boolean assignment |
| `cf_tournaments.cpp` | Tournament winnability | ⭐⭐ Medium | ✓ Checks if jth element is max OR k>1 |
| `cf_codeforces_1.cpp` | Cost optimization | ⭐⭐ Medium | ✓ Uses 3*a vs b heuristic for bulk pricing |

#### Contest solutions (17 files)

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `A_Another_Popcount_Problem.cpp` | Min popcount sum | Greedy bit decomposition | ✓ Takes largest power-of-2 chunks |
| `A_Another_Puzzle_from_Papyrus.cpp` | Path cost on grid | Case split + INF fallback | ✓ Two orientation checks with swap cost |
| `A_Swap_Columns_and_Find_a_Path.cpp` | Column swap path | Greedy max per row + min bonus | ✓ Sum maxima + largest minimum |
| `B_AI_Finds_Nothing_Here.cpp` | Grid coloring count | Combinatorics + mod pow | ✓ 2^(free cells) mod 998244353 |
| `B_Crimson_Triples.cpp` | Triple counting | Math summation | ✓ Σ (n/i)² for i = 1..n |
| `B_Good_times_Good_times.cpp` | Next number construction | Digit manipulation | ✓ Builds 10^digits + 1 |
| `B_K_Sort.cpp` | K-sort cost | Difference array + sorting | ✓ Tracks deficit from running max |
| `B_Matrix_Stabilization.cpp` | Matrix stabilization | Grid simulation | Partial | Direction class; neighbor sum checks |
| `B_Transfusion.cpp` | Odd/even balance | Prefix sums on parity | ✓ Checks odd/even position sums divisible |
| `C_Card_Game.cpp` | Card game winner | Game theory casework | ✓ Alice/Bob based on last two cards |
| `C_Good_Prefixes.cpp` | Good prefix count | Prefix sum − max tracking | ✓ Counts when prefix − max equals max |
| `C_Kevin_and_Binary_Strings.cpp` | Binary string ops | Template + logic | Present | Full contest template; solution present |
| `C_RemovevomeR.cpp` | Remove consecutive dupes | String compression | ✓ Collapse runs; answer 1, 2, or compressed size |
| `D_An_Alternative_Way.cpp` | Column adjustment | Reverse greedy pass | ✓ Propagates overflow diff right-to-left |
| `D_Counting_Pairs.cpp` | Pair counting | PBDS order statistics | ✓ **Strong**: ordered_set for range count on suffix sums |
| `D_Manhattan_Circle.cpp` | Find circle center | Grid scan | Partial | Finds densest row of `#` chars |
| `Distinct_Values_Subarrays.cpp` | Distinct subarrays | - | **Stub** | Empty `solve()` |

> Note: `A_Divide_and_Conquer.cpp` exists only under `codeforces/.cph/` (CPH judge copy), not in the main folder.

---

### cses_probs/ (33 files)

CSES Introductory + Sorting & Searching problems:

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `cses_apartments.cpp` | Apartment assignment | Two-pointer matching | ✓ Matches n customers to m apartments within tolerance k |
| `cses_apple_division.cpp` | Partition apples | Recursive backtracking | ✓ Minimizes \|sum1 − sum2\| via explore both splits |
| `cses_bit_strings.cpp` | Binary strings | Modular exponentiation | ✓ Computes 2^n mod (10^9+7) |
| `cses_coin_piles.cpp` | Coin piles | Greedy validation | ✓ Checks if (a+b)%3==0 and b <= 2*a |
| `cses_collecting_num.cpp` | Count when collecting numbers | Set tracking | ✓ Increments counter when (num-1) is NOT in set |
| `cses_collecting_num_ii.cpp` | Collecting numbers II | Set + erase | ✓ Variant with removal logic |
| `cses_concert_tickets.cpp` | Concert ticket assignment | Multiset + greedy | ✓ Assigns closest available ticket price |
| `cses_find_distinct.cpp` | Find distinct elements | Set | ✓ Counts unique values |
| `cses_gondole.cpp` | Ferris wheel pairs | Two-pointer on sorted weights | ✓ Greedy pairing with capacity limit |
| `cses_grey_code.cpp` | Grey code generation | Bit manipulation | ✓ Outputs n-bit Gray code sequence |
| `cses_increasing_array.cpp` | Make array non-decreasing | Greedy | ✓ Increments decreasing elements; counts ops |
| `cses_longest_repetitions.cpp` | Longest consecutive elements | Linear scan | ✓ Tracks run length of equal adjacent values |
| `cses_maximum_subarraysum.cpp` | Max subarray sum | Kadane's algorithm | ✓ Classic O(n) max subarray |
| `cses_missing_number.cpp` | Find missing 1..n | Sum formula | ✓ Uses n*(n+1)/2 − sum |
| `cses_missing_sum.cpp` | Missing sum variant | Math | Present |
| `cses_number_spiral.cpp` | Spiral traversal | Math formula | ✓ Closed-form position in number spiral |
| `cses_palidrome_reorder.cpp` | Palindrome reordering | Frequency counting | ✓ At most one odd-count character allowed |
| `cses_permutation_of_strings.cpp` | String permutations | Combinatorics | Present |
| `cses_playlist.cpp` | Longest unique playlist | Sliding window + map | ✓ **Strong**: max window with no repeated song |
| `cses_possible_permutations.cpp` | Generate permutations | Backtracking | Present |
| `cses_remove_child.cpp` | Josephus problem | Queue simulation | ✓ Classic skip-one elimination order |
| `cses_remove_children.cpp` | Josephus variant | Vector erase | ✓ Circular elimination with index tracking |
| `cses_restorent_custo.cpp` | Restaurant customers | - | **Stub** | Empty `solve()`; comment says "will do with time" |
| `cses_room_allocation.cpp` | Room allocation | Sort + min-heap | ✓ **Strong**: greedy room assignment with priority queue |
| `cses_stick_lenght.cpp` | Stick length optimization | Greedy median | ✓ Minimize cost to equal lengths |
| `cses_tower_hanoi.cpp` | Tower of Hanoi | Recursive pattern | ✓ Prints move sequence |
| `cses_towers.cpp` | Towers (LIS variant) | Multiset | ✓ Longest increasing subsequence via multiset |
| `cses_traffic_light.cpp` | Traffic lights | Set + multiset | ✓ **Strong**: tracks max gap after each insertion |
| `cses_trailing_zeros.cpp` | Trailing zeros in n! | Divisibility | ✓ Counts factors of 5: n/5 + n/25 + ... |
| `cses_two_knights.cpp` | Two knights placement | Combinatorics | ⚠️ **Known bug**: Fails for n=2 |
| `cses_two_set.cpp` | Partition into two equal sets | Greedy construction | ✓ Builds two sets summing to n*(n+1)/4 |
| `cses_two_sum.cpp` | Two sum problem | Two-pointer on sorted | ✓ Finds pair summing to target |
| `cses_weird_algo.cpp` | Collatz-like sequence | Simulation | ✓ if even divide by 2, else 3*n+1 |

---

### leetcodeprobs/ (131 files)

LeetCode + weekly/contest problems (arrays, trees, graphs, DP, strings):

#### Easy & Fundamentals (Sorted/Searching/Arrays)

| File | Problem | Topic | Status |
|------|---------|-------|--------|
| `lc_two_sum_sorted.cpp` | Two sum (sorted) | Two-pointer | ✓ Returns 1-indexed positions |
| `lc_three_sum.cpp` | 3Sum | Sorting + three-pointer | ✓ Deduplicates triplets correctly |
| `lc_3sum_closest.cpp` | 3Sum Closest | Two-pointer | ✓ Tracks closest sum to target |
| `lc_merge_sorted_arrays.cpp` | Merge sorted arrays | In-place merge | Present |
| `lc_search_in_rotated_array.cpp` | Search in rotated array | Binary search | ⚠️ **Falls back to linear scan** if rotated |
| `lc_find_minimum.cpp` | Find minimum in array | Reduction | **Naive**: Uses `min_element` on full array |
| `lc_rotated_array_check.cpp` | Check if rotated | Pivot detection | Present |
| `lc_rotate_matrix_90.cpp` | Rotate 90° | In-place transpose | Present |
| `lc_search_2d_matrix.cpp` | Search 2D sorted matrix | Binary search | Present |
| `lc_search_2d_grid.cpp` | Search 2D grid | Linear search | Present |
| `lc_plus_one.cpp` | Plus one (digit increment) | Array manipulation | ✓ Increments rightmost; propagates carries |
| `lc_reverse_integer.cpp` | Reverse integer | Math/string | Present |
| `lc_best_time_buy_stock.cpp` | Best time buy stock | One-pass | Present |
| `lc_adjacent_digits_check.cpp` | Check adjacent digits | String iteration | Present |
| `lc_partition_array.cpp` | Pivot array | Three-way partition | ✓ Less / equal / greater buckets |
| `lc_prefix_suffix.cpp` | Prefix/suffix sums | Prefix array | Partial | Left sums built; right side incomplete |
| `lc_largest_Alitude.cpp` | Largest altitude | Prefix sum | ✓ Running max of altitude changes |
| `lc_valid_subarray.cpp` | Valid subarrays mod x | Brute force | Partial | O(n²) subarray enumeration |
| `lc_maximum_total_subarray.cpp` | Max total value | Greedy range | Partial | Uses max − min × k heuristic |
| `lc_maximumm_subarrY.cpp` | Max total value v2 | Sort + greedy | Partial | Sorts and pairs extremes |

#### Hashing & Strings

| File | Problem | Data Structure | Status |
|------|---------|----------------|--------|
| `lc_group_anagrams.cpp` | Group anagrams | Sort + hash | **Empty**: Sorts strings but no grouping |
| `lc_prefix_freq.cpp` | Prefix frequency | Hashmap | Present |
| `lc_unique_subarray_hash.cpp` | Unique subarray | Hash + sliding window | Present |
| `lc_hash_table_demo.cpp` | Hash table demo | Unordered_map | Present |
| `lc_longest_substring_no_repeat.cpp` | Longest substring no repeat | Sliding window | Present |
| `lc_longest_prefix.cpp` | Longest prefix | String comparison | Present |
| `lc_alternating_binary_string.cpp` | Alternating binary | String check | ✓ Validates 01...01 or 10...10 |
| `lc_string_alternating.cpp` | String alternating | Pattern | Present |
| `lc_rotate_string.cpp` | Rotate string | String manipulation | Present |
| `lc_valid_parentheses_linked_list.cpp` | Valid parentheses (LL) | Stack + linked list | Present |
| `lc_waveiness.cpp` | Waveiness count | Digit peaks/valleys | ✓ Counts local maxima and minima in digits |
| `lc_second_largest_in_string.cpp` | Second largest digit | Linear scan | ✓ Tracks largest and second-largest digit |
| `lc_valid_binary.cpp` | Valid binary strings | Backtracking | ✓ Generates strings without consecutive 1s |
| `lc_num_st.cpp` | Substring pattern count | `string::find` | ✓ Counts patterns appearing in word |
| `lc_process_string.cpp` | Process string with * | Prefix expansion | Partial | Handles `*` repetition logic |
| `lc_weightedstring.cpp` | Weighted string decode | Hash maps | Partial | Maps char ↔ weight for decoding |
| `lc_zig_zag.cpp` | Zigzag conversion | Simulation | Partial | Row-by-row string placement |
| `lc_maximum_no_baloons.cpp` | Max balloons | Frequency count | ✓ min count of b,a,l/2,o/2,n |

#### Linked Lists & Trees

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_add_two_numbers_list.cpp` | Add two numbers (LL) | Digit-by-digit add | Present |
| `lc_remove_duplicates_linked_list.cpp` | Remove duplicates (LL) | Pointer manipulation | Present |
| `lc_rotate_linked_list.cpp` | Rotate linked list | Circular + unwind | Present |
| `lc_decode_cipher_linked_list.cpp` | Decode cipher (LL) | Custom parsing | Present |
| `lc_delete_middle_node.cpp` | Delete middle node | Slow/fast pointers | ✓ Two-pointer middle deletion |
| `lc_tree_depth.cpp` | Max tree depth | BFS/DFS recursion | Present |
| `lc_symmetric_tree.cpp` | Symmetric tree check | Recursive comparison | Present |
| `lc_same_tree_check.cpp` | Same tree check | Recursion | ⚠️ **Bug**: Pass-by-value issue |
| `lc_same_tree_optimized.cpp` | Same tree (optimized) | Reference-based recursion | ✓ Fixed version |
| `lc_bst_from_array.cpp` | BST from array | Recursive construction | Present |

#### DP & Combinatorics

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_unique_bsts.cpp` | Unique BSTs | Interval DP + memoization | ✓ **Strong**: Memoized recursion; all structurally unique BSTs |
| `lc_min_moves_dp.cpp` | Min moves DP | Dynamic programming | **Buggy**: Logic error |
| `lc_min_distance_both_directions.cpp` | Min distance | Two-direction search | Present |
| `lc_min_distance_index.cpp` | Min distance index | Array indexing | Present |
| `lc_min_cost_move_boxes.cpp` | Min cost move boxes | DP | Present |
| `lc_min_cost_target_sum.cpp` | Min cost target sum | DP | Present |
| `lc_min_cost_optimization.cpp` | Cost optimization | Greedy/DP | Present |
| `lc_min_cost_greedy.cpp` | Greedy cost | Greedy | Present |
| `lc_min_flips_incomplete.cpp` | Min flips | **Incomplete** | Stub |
| `lc_lmap_snack_20.cpp` | Divisibility chain DP | Nested loops | Partial | Counts divisible pairs per element |
| `lc_maxi_usbset.cpp` | Max subset length | Frequency map | Partial | Handles frequency-1 special case |
| `lc_third_problem_problem.cpp` | Tree weight DP | DFS on tree map | Partial | Earliest/latest child scheduling |

#### Greedy & Optimization

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_rgb_string_construction.cpp` | RGB string construction | Greedy | Present |
| `lc_rgb_string_final.cpp` | RGB string (final) | Optimized greedy | ✓ Clean version |
| `lc_rgb_string_optimized.cpp` | RGB string (opt) | ✓ **Strong**: Minimal state tracking |
| `lc_students_sandwiches.cpp` | Students sandwiches | Queue simulation | ✓ Simulates preference queue |
| `lc_separate_digits.cpp` | Separate digits | Array construction | Present |
| `lc_special_char_2.cpp` | Special char | Pattern | Present |
| `lc_time_required_buy_tickets.cpp` | Time to buy tickets | Queue | Present |
| `lc_earliest.cpp` | Earliest (time-based) | Sorting | Present |
| `lc_minimum_effort_tasks.cpp` | Min effort tasks | Sorting + greedy | Present |
| `lc_minimum_common_valu.cpp` | Minimum common value | Comparison | Present |
| `lc_minimum_replacement.cpp` | Minimum replacement | Greedy | Present |
| `lc_minimum_absolute_difference.cpp` | Min absolute diff | Sorting | Present |
| `lc_minimum_price_to_buy_at_discount.cpp` | Min price (discount) | Discount logic | Present |
| `lc_minimum_timefor_land_water_2.cpp` | Land/water scheduling | Interval merge | Partial | Sorts land/water intervals; scheduling logic |
| `lc_max_rating.cpp` | Max ratings grid | Per-row sort + greedy | Partial | Picks second-min per row; adjusts with global min |
| `lc_max_total_val.cpp` | Max total value | Priority queue | ✓ Greedy max-heap with decay re-insertion |
| `lc_asteroids.cpp` | Destroy asteroids | Greedy sort | ✓ Absorbs smaller asteroids in sorted order |
| `lc_jump_game.cpp` | Jump game I | Greedy reach | ✓ Tracks max reachable index |
| `lc_cp.cpp` | Light bulb intervals | Greedy merge | Partial | Sorts intervals; greedy coverage |

#### Advanced (Graphs, BFS, Binary Search, Math)

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_robot_collision.cpp` | Robot collision | Linked list + simulation | ✓ **Strong**: Complex state tracking for colliding robots |
| `lc_rotate_box_gravity.cpp` | Rotate box (gravity) | 2D grid simulation | Present |
| `lc_jump_game_3.cpp` | Jump game III | BFS/reachability | ✓ Set-based visited tracking |
| `lc_jump_game_7.cpp` | Jump game VII | BFS range reachability | Present |
| `lc_jump_game_max_value.cpp` | Jump game max value | DP | Present |
| `lc_jump_queue_bfs.cpp` | Jump queue BFS | **Empty** | Stub |
| `lc_maxi_safeness.cpp` | Maximum safeness factor | Multi-source BFS + BS | ✓ **Strong**: Thief-distance BFS then binary search on grid |
| `lc_shortest_path.cpp` | Shortest path k-th label | Graph BFS | **Incomplete** | Builds adjacency map; search unfinished |
| `lc_happy_number.cpp` | Happy number | Cycle detection | **Incomplete** |
| `lc_good_array_validator.cpp` | Good array validator | Validation logic | Present |
| `lc_no_of_ops_on_zeroes.cpp` | Ops on zeroes | Counter logic | ⚠️ **Bug**: Assignment `n = no_of_zeroes` instead of `==` |
| `lc_no_zero_integers.cpp` | No-zero integers | Number property check | Present |
| `lc_count_same.cpp` | Count same elements | Frequency | Present |
| `lc_count_kth_roots.cpp` | Count k-th roots | **Incomplete** | Stub |
| `lc_sum_of_cubes.cpp` | Sum of cubes | Math | Present |
| `lc_sum_primes_reverse_range.cpp` | Sum primes reverse | Sieve + sum | Present |
| `lc_product_array_except_self.cpp` | Product except self | Prefix/suffix product | ⚠️ **Suboptimal**: Uses unordered_map instead of O(n) space |
| `lc_product_except_self_v2.cpp` | Product except self v2 | - | Alternative version |
| `lc_decode_slanted_cipher.cpp` | Decode slanted cipher | Grid parsing | Present |
| `lc_find_kth_string_in_nth_ns.cpp` | Find k-th string | String generation | Present |
| `lc_find_unique_biunaryu_strings.cpp` | Find unique binary strings | Backtracking | Present |
| `lc_trapping_rainwater.cpp` | Trapping rain water | Layer-peel approach | ⚠️ **Inefficient**: O(n·max_height) instead of two-pointer O(n) |
| `lc_daily_temperatures.cpp` | Daily temperatures | Monotonic stack | **Brute O(n²)** or incomplete |
| `lc_daily_temperatures_incomplete.cpp` | Daily temperatures (draft) | **Incomplete** | Stub |
| `lc_longest_balanced_substring.cpp` | Longest balanced substring | **Incomplete** | Stub |
| `lc_max_path_score_incomplete.cpp` | Max path score | **Incomplete** | Stub |
| `lc_min_operations_grid.cpp` | Min operations grid | Grid manipulation | Present |
| `lc_min_ops_to_modulo.cpp` | Min ops to modulo | Hash + DP | ✓ **Strong**: Remainder buckets for even/odd positions |
| `lc_manhatten.cpp` | Robot origin return | Simulation | ✓ Counts return-to-origin paths |
| `lc_grey_code.cpp` | Gray code | Bit manipulation | ✓ `i ^ (i >> 1)` generation |
| `lc_angle_clock.cpp` | Clock angle | Math | ✓ Computes angle between hour and minute hands |
| `lc_check_god_int.cpp` | Good integer check | Digit sum / square sum | Partial | Digit and square-sum validation |
| `lc_first_01.cpp` | Consecutive 11 bits | Bit scan | ✓ Checks exactly one "11" pair in binary |

#### Weekly / Contest / Practice

| File | Problem | Category | Status |
|------|---------|----------|--------|
| `lc_contest_01.cpp` | Contest problem 1 | Contest | Present |
| `lc_contest_02.cpp` | Contest problem 2 | Contest | Present |
| `lc_cf_interactive_query.cpp` | Interactive query (CF) | Interactive | Present |
| `lc_first.cpp` | First attempt | Practice | Present |
| `lc_second.cpp` | Second attempt | Practice | Present |
| `lc_third.cpp` | Third attempt | Practice | Present |
| `lc_firrst_problem_June20.cpp` | Grid construction | Weekly | Partial | Alternating `.` / `#` grid builder |
| `lc_second_problem.cpp` | Min lights | Interval coverage | Partial | Range illumination from light positions |
| `lc_prob_2.cpp` | Max subarray variant | Kadane | Partial | Kadane-style max sum helper |
| `lc_prob_3.cpp` | Contest problem 3 | Contest | Present |
| `lc_prop_1.cpp` | Contest problem | Template | Present | Full competitive programming template |
| `lc_hard_8.cpp` | Hard problem 8 | **Stub** | Empty solution body |
| `lc_weekly.cpp` | Weekly contest | **Stub** | Empty `solve()` |
| `lc_new.cpp` | Bit-string sum | Greedy | Partial | Conditional sum based on s[i] |
| `lc_cms.cpp` | Majority subarrays | Brute force | Partial | O(n²) subarray majority check |
| `lc_no_of_ss_c.cpp` | ABC substring count | State tracking | ✓ Tracks seen a/b/c with sliding logic |
| `lc_no_of_ways_to_assighn_weight.cpp` | Weight assignment | **Stub** | Empty `solve()` |
| `lc_get_lenght.cpp` | Get length | Practice | Present |
| `lc_sudoku_validator.cpp` | Sudoku validator | Logic | ✓ Checks rows, cols, 3×3 boxes |
| `lc_longest_repetitions.cpp` | Longest repetitions | String/array | Present |

---

### ModernC++/ (3 files)

Modern C++ concepts, const-correctness, and competitive programming notes:

| File | Topic | Focus | Status |
|------|-------|-------|--------|
| `mc_learning_01.cpp` | Hash rolling + unique subarray | Rolling hash; hash collision theory | ✓ Advanced: Hashing strategy for finding unique subarrays |
| `mc_learning_02.cpp` | Practice snippet | General C++ | Present |
| `mc_the_use_constants.cpp` | const vs #define | Comparison of storage/performance | ✓ Documents: const double vs #define (memory efficiency) |

---

## Brutal reality check — how good a competitive programmer are you?

**Short answer:** You are a **motivated early-intermediate learner** moving toward **low Div.2**, not yet a reliable competitive programmer. You have **volume, contest exposure, and improving DS usage**; you still lack **consistency, closure, and contest discipline**.

### Estimated level (honest bands)

| Platform / lens | Where you are | What that means |
|-----------------|---------------|-----------------|
| **CSES** | Introductory + early Sorting/Searching | ~20+ tasks solid; room allocation, traffic lights, playlist are strong; `cses_two_knights` still wrong |
| **Codeforces** | Weak Div.2 → emerging | 17 contest files + legacy cf_*; `D_Counting_Pairs` (PBDS) and several B/C solves show growth |
| **LeetCode (interview lens)** | ~130 "touched", **~55–65 submittable** | ~15 mediums done well; new hard signal: `lc_maxi_safeness` (BFS + binary search) |
| **ICPC / serious CP** | Not competition-ready yet | No DSU, segtree, flows, bitmask DP, or clean template library |

**Rating metaphor:** Think **900–1200 CF** range in *potential* — contest folder activity is real progress — but the repo still shows **inconsistent execution** and too many stubs for the file count.

### What the code actually says (not what the file count implies)

1. **Breadth without depth** — 131 LeetCode files, but ~35+ are empty stubs, broken, or wouldn't submit cleanly.
2. **You iterate, but don't always finish** — RGB string (3 versions), same tree (2), jump game (4+) — good learning habit; bad if no single **clean AC** version remains.
3. **Wrong "done" is worse than unsolved** — `lc_trapping_rainwater` (layer peel), `lc_search_in_rotated_array` (linear fallback), `lc_find_minimum` (`min_element`), `lc_product_array_except_self` (hash map).
4. **CSES block is your strongest CP signal** — greedy, sliding window, heaps on newer files (`room_allocation`, `traffic_light`, `playlist`).
5. **Codeforces contest folder is new and promising** — template headers, multi-test `solve()`, and non-trivial D (`Counting_Pairs` with PBDS).
6. **advancedConcept is coursework + greedy classics** — activity selection, connect ropes, merge intervals added; AVL still broken.
7. **Organization still hurts** — misnamed files, debug `cout`, empty `solve()` bodies, `.longcon.cpp` hidden dotfile naming.

**Bottom line:** You are **not** "bad at math" or "unable to think algorithmically" — proofs: `lc_three_sum`, `lc_robot_collision`, `lc_maxi_safeness`, `lc_min_ops_to_modulo`, `D_Counting_Pairs`, `cses_room_allocation`. You **are** still bad at **shipping one correct solution per problem**, **naming/organizing**, and **advanced topic coverage**. That gap is fixable.

---

## Strengths (structured)

| Area | Level | Evidence |
|------|-------|----------|
| **Greedy / ad-hoc intuition** | ★★★☆☆ | `cses_increasing_array`, `cses_coin_piles`, `cf_codeforces_1`, `lc_rgb_string_optimized`, `B_K_Sort` |
| **Basic math / counting** | ★★★☆☆ | `cses_trailing_zeros`, `B_Crimson_Triples`, `A_Another_Popcount_Problem`, `lc_min_ops_to_modulo` |
| **Two pointers / sorting tricks** | ★★★☆☆ | `lc_three_sum`, `lc_3sum_closest`, `lc_two_sum_sorted` |
| **Heaps / ordered structures** | ★★★☆☆ | `cses_room_allocation`, `cses_towers`, `ac_connect_n_ropes`, `D_Counting_Pairs` (PBDS) |
| **BFS / multi-source reachability** | ★★★☆☆ | `lc_jump_game_3`, `lc_maxi_safeness` |
| **Sliding window** | ★★★☆☆ | `cses_playlist`, `lc_longest_substring_no_repeat` |
| **Simulation + custom structures** | ★★★☆☆ | `lc_robot_collision`, `lc_students_sandwiches` |
| **Interval DP / combinatorics** | ★★★☆☆ | `lc_unique_bsts` |
| **Contest I/O habits** | ★★★☆☆ | Template headers on newer CF files; `solve()` + fast I/O widespread |
| **Persistence / iteration** | ★★★★☆ | Multiple drafts per problem; active contest participation |

---

## Weaknesses (structured)

| Area | Level | Evidence / impact |
|------|-------|-------------------|
| **Correctness discipline** | ★☆☆☆☆ | `cses_two_knights` (n=2), `lc_same_tree_check` (pass-by-value), `lc_no_of_ops_on_zeroes` (`=` vs `==`) |
| **Complexity awareness** | ★★☆☆☆ | `lc_trapping_rainwater`, `ac_minimum_platforms` (O(n²)), `lc_daily_temperatures` brute only |
| **Finishing problems** | ★★☆☆☆ | 4× `_incomplete`, empty stubs (`lc_jump_queue_bfs`, `Distinct_Values_Subarrays`, `cf_omsk_programmers`) |
| **Graphs** | ★☆☆☆☆ | `lc_shortest_path` unfinished; index BFS only otherwise |
| **Advanced DS** | ★☆☆☆☆ | No DSU, trie, segtree, Fenwick; one PBDS use in `D_Counting_Pairs` |
| **DP maturity** | ★★☆☆☆ | Strong: `lc_unique_bsts`, `lc_maxi_safeness`; weak: `lc_min_moves_dp`, several partial tree DPs |
| **Monotonic stack / heap fluency** | ★★☆☆☆ | Daily temperatures incomplete; heap used but not fluently beyond classics |
| **Bitmask / state DP** | ☆☆☆☆☆ | Not present |
| **Repo hygiene** | ★☆☆☆☆ | Misnamed files, debug prints, empty returns, dotfile `.longcon.cpp`, stubs mixed with finals |
| **Pointer / tree implementation** | ★★☆☆☆ | AVL insert by value; BST delete incomplete |
| **Codeforces depth** | ★★☆☆☆ | Growing contest folder but several partial/buggy legacy `cf_*` files remain |

---

## Topic coverage matrix

| Topic | Files (approx) | Quality |
|-------|----------------|---------|
| Arrays / two-pointer | 35+ | Mixed — strong 3Sum/closest, weak rotated search |
| Strings | 18+ | Improving (waveiness, valid binary, balloons) |
| Trees (LC style) | 7 | OK traversals; weak "same tree" first attempt |
| Linked lists | 6 | Decent rotate / add two / delete middle |
| Stack / queue sim | 8 | **Robot collision** is highlight |
| Graphs / BFS | ~6 | **maxi_safeness** is new highlight; shortest path unfinished |
| Heaps / ordered sets | 6+ | Room allocation, towers, connect ropes, PBDS pair |
| Sliding window | 4+ | Playlist, longest substring, no_of_ss_c |
| DP | 10+ | 2–3 strong, rest weak or partial |
| Math / sieve | 8+ | Sieve, popcount, crimson triples |
| CSES intro + sorting | 25+ | Mostly solid; a few stubs |
| CF ad-hoc + contest | 35 | Inconsistent legacy; contest folder improving |

**Barely or not covered:** DSU, trie, segment tree, Dijkstra, topo sort, bitmask DP, binary lifting, FFT/NTT, geometry beyond snippets.

---

## Showcase solutions (actually strong)

| File | Why it counts |
|------|----------------|
| `leetcodeprobs/lc_maxi_safeness.cpp` | Multi-source BFS for thief distances + binary search on answer — real hard |
| `leetcodeprobs/lc_robot_collision.cpp` | Real medium/hard simulation — sort, stack, health tracking |
| `leetcodeprobs/lc_three_sum.cpp` | Canonical sort + two pointers + duplicate skip |
| `leetcodeprobs/lc_unique_bsts.cpp` | Memoized interval DP — hard territory |
| `leetcodeprobs/lc_jump_game_3.cpp` | Clean BFS + visited set |
| `leetcodeprobs/lc_min_ops_to_modulo.cpp` | Non-trivial modeling (remainder buckets for even/odd positions) |
| `leetcodeprobs/lc_rgb_string_optimized.cpp` | Clean greedy with minimal state |
| `codeforces/D_Counting_Pairs.cpp` | PBDS order statistics for range counting — advanced technique |
| `codeforces/cf_codeforces_1.cpp` | Greedy case split (pack of 3 vs singles) |
| `cses_probs/cses_room_allocation.cpp` | Correct heap-based room assignment |
| `cses_probs/cses_traffic_light.cpp` | Multiset gap tracking after each insertion |
| `cses_probs/cses_playlist.cpp` | Classic sliding window for longest unique subarray |
| `cses_probs/cses_coin_piles.cpp` | Correct game theory + multi-test |
| `advancedConcept/ac_prime_pair_sieve.cpp` | Contest-shaped sieve + `solve()` function |

---

## Fix immediately (highest ROI)

1. **`cses_two_knights.cpp`** — wrong for n=2; use closed form instead of deep recursion.
2. **Delete or fix empty files** — `lc_group_anagrams`, `lc_happy_number`, `lc_jump_queue_bfs`, `Distinct_Values_Subarrays`, `cf_omsk_programmers`, `cses_restorent_custo`.
3. **Finish or delete** 4× `_incomplete` files + BFS/graph stubs (`lc_shortest_path`).
4. **Audit** `cf_gcd_lcm`, `cf_divisibility_check` — likely incomplete.
5. **Fix assignment bugs** — `lc_no_of_ops_on_zeroes.cpp` has `if (n = no_of_zeroes)`.

### What to deprioritize for now

- More AVL/threaded tree **implementation** (unless for coursework).
- New **easy** LeetCode volume without closing existing drafts.
- **Hard** problems before mediums are consistently optimal.

---

## How to compile & run

```bash
g++ -std=c++17 -O2 -Wall -o sol filename.cpp
./sol < input.txt
```

Many files use competitive patterns:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

For PBDS (`D_Counting_Pairs.cpp`):

```bash
g++ -std=c++17 -O2 -Wall -o sol D_Counting_Pairs.cpp
```

---

## Stats snapshot (July 2026)

| Metric | Value |
|--------|------:|
| Total `.cpp` files | **222** |
| CSES | 33 |
| Codeforces | 35 |
| LeetCode folder | 131 |
| advancedConcept | 20 |
| ModernC++ | 3 |
| Incomplete / stub (estimate) | ~40–45 |
| Reliable submittable (estimate) | ~60–70 |
| Strong mediums+ | ~20 |

---

## Learning path (priority order)

> Do **not** add 50 new easy problems. **Close, correct, and compress** what you have first.

### Phase 1 — Discipline (2–3 weeks)

- **One file = one AC solution** per problem; archive old drafts in `drafts/` or delete them.
- **CSES Introductory + Sorting/Searching complete** — fix knights, finish `cses_restorent_custo`, 100% AC on judge.
- **Monotonic stack** — finish `lc_daily_temperatures` properly; do 5 stack problems (496, 739, 84, 85, 907).
- **Repo cleanup** — fix broken files listed above; no `cout` debug in final versions.

### Phase 2 — Core CP gaps (4–6 weeks)

| Week focus | Topics | Target |
|------------|--------|--------|
| Graphs I | BFS/DFS, connected components, flood fill | 15 problems |
| Graphs II | Topo sort, shortest path (Dijkstra, 0–1 BFS) | 10 problems |
| DSU | Union-find + Kruskal-style problems | 8 problems |
| DP I | 1D/2D classic (knapsack, LIS, grid path) | 15 problems |
| DP II | Interval DP (you started with BSTs) | 8 problems |

**CSES progression:** Finish Sorting/Searching → Dynamic Programming (in order).

**Codeforces:** Virtual contests on Div.2 only; target A + B consistently; keep contest-named files, drop empty stubs.

### Phase 3 — Interview + CP convergence (ongoing)

- **Sliding window** — 10 problems; replace erase-based string code.
- **Binary search on answer** — 8 problems (CSES + LC); you started with `lc_maxi_safeness`.
- **Template library** — one `template.cpp` with fast I/O, DSU, dijkstra.
- **Weekly rhythm:** 2× CF virtual + 3 new mediums + 1× re-solve old weak file.

---

**Last updated:** July 2, 2026  
**Assessment method:** Comprehensive read of all 222 `.cpp` files in the repository.

*This README is an honest code quality assessment, not a problem count flex. Consistent one solid solution per problem beats 100 broken attempts.*
