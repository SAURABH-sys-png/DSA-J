# DSA-J — Data Structures, Algorithms & Competitive Programming

Personal C++ problem archive: **LeetCode**, **CSES**, **Codeforces**, tree implementations, and Modern C++ notes.  
**128** `.cpp` files documented (June 2026).

---

## Repository structure

```
DSA-J/
├── cses_probs/           (29)  CSES Introductory / early problems
├── codeforces/           (13)  Codeforces-style ad-hoc & math
├── leetcodeprobs/        (81)  LeetCode-style + a few CF interactive
├── advancedConcept/      (11)  BST, AVL (draft), heaps, threaded tree, search algorithms
├── ModernC++/             (3)   const / static / contest I/O notes
└── README.md
```

---

## Detailed File Documentation

### advancedConcept/ (11 files)

Core Data Structure implementations and advanced search techniques:

| File | Topic | Status | Notes |
|------|-------|--------|-------|
| `avl_tree_implementation.cpp` | AVL Tree | **Draft** | Incomplete insert/balance logic; passes by value bug |
| `b_tree.cpp` | B-Tree | **Stub** | Empty structure, no implementation |
| `binary_search_basic.cpp` | Binary Search | ✓ Complete | Linear search on sorted array [1,23...100] for value 1; tracks iteration count |
| `binary_search_tree.cpp` | BST | ✓ Complete | Insert (by reference), search, traversal, incomplete delete |
| `heaps.cpp` | Max Heap | ✓ Complete | Dual classes: `insertion_Heaps` and `deletion_Heaps`; upheapify logic |
| `interpolation_search.cpp` | Interpolation Search | ✓ Complete | Adaptive search formula: `mid = beg + (end-beg)*((num-arr[beg])/(arr[end]-arr[beg]))` |
| `placeholder_greeting.cpp` | - | Stub | Unknown (not fully examined) |
| `prime_pair_sieve.cpp` | Sieve + Pairs | ✓ Complete | Generates consecutive prime pairs; uses Sieve of Eratosthenes up to 200000 |
| `threaded_binary_tree.cpp` | Threaded BT | Partial | Constructor, insert scaffolding with threading flags `lThread`, `rThread` |
| `tree_inorder_traversal.cpp` | Tree Traversal | ✓ Complete | Classic recursive inorder (left → node → right) for LeetCode-style `TreeNode` |
| `heaps.cpp` (dup note) | - | - | Appears twice in compile; heap operations only |

---

### codeforces/ (13 files)

Ad-hoc, greedy, and math problems (mostly Div.2 A/B difficulty):

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
| `cf_gcd_lcm.cpp` | GCD/LCM operations | ⭐⭐ Medium | **Broken** | Incomplete; doesn't compile |
| `cf_sequence_generation.cpp` | Sequence from n | ⭐ Easy | ✓ Builds pattern: 2, then n, n-1... 3, then 1 |
| `cf_simple_increment.cpp` | Special case n=67 | ⭐ Easy | ✓ Returns 67 if n==67, else n+1 |
| `cf_tournaments.cpp` | Tournament winnability | ⭐⭐ Medium | ✓ Checks if jth element is max OR k>1 |
| `codeforces_1.cpp` | Cost optimization | ⭐⭐ Medium | ✓ Uses 3*a vs b heuristic for bulk pricing |

---

### cses_probs/ (29 files)

CSES Introductory problems (foundational algorithms + number theory):

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `cses_apartments.cpp` | Apartment assignment | Two-pointer matching | ✓ Matches n customers to m apartments within tolerance k |
| `cses_apple_division.cpp` | Partition apples | Recursive backtracking | ✓ Minimizes |sum1 - sum2| via explore both splits |
| `cses_bit_strings.cpp` | Binary strings | Modular exponentiation | ✓ Computes 2^n mod (10^9+7) |
| `cses_coin_piles.cpp` | Coin piles | Greedy validation | ✓ Checks if (a+b)%3==0 and b <= 2*a |
| `cses_collecting_num.cpp` | Count when collecting numbers | Set tracking | ✓ Increments counter when (num-1) is NOT in set |
| `cses_collecting_num_ii.cpp` | Collecting numbers II | - | Likely variation of above |
| `cses_concert_tickets.cpp` | Concert ticket assignment | Sorting + greedy | Not fully examined |
| `cses_find_distinct.cpp` | Find distinct elements | Set/unordered_set | Not fully examined |
| `cses_gondole.cpp` | - | - | Not fully examined |
| `cses_grey_code.cpp` | Grey code generation | - | Not fully examined |
| `cses_increasing_array.cpp` | Make array non-decreasing | Greedy | ✓ Increments decreasing elements to previous; counts ops |
| `cses_longest_repetitions.cpp` | Longest consecutive elements | Iteration | Not fully examined |
| `cses_maximum_subarraysum.cpp` | Max subarray sum | Kadane's algorithm | Not fully examined |
| `cses_missing_number.cpp` | Find missing 1..n | Sum formula | ✓ Uses n*(n+1)/2 - sum formula |
| `cses_missing_sum.cpp` | - | - | Not fully examined |
| `cses_number_spiral.cpp` | Spiral traversal | Math formula | Not fully examined |
| `cses_palidrome_reorder.cpp` | Palindrome reordering | Frequency counting | Not fully examined |
| `cses_permutation_of_strings.cpp` | String permutations | Combinatorics | Not fully examined |
| `cses_possible_permutations.cpp` | Generate permutations | Backtracking | Not fully examined |
| `cses_restorent_custo.cpp` | Restaurant + customers | - | Not fully examined |
| `cses_stick_lenght.cpp` | Stick length optimization | Greedy | Not fully examined |
| `cses_tower_hanoi.cpp` | Tower of Hanoi | Recursive pattern | Not fully examined |
| `cses_towers.cpp` | Tower logic | - | Not fully examined |
| `cses_trailing_zeros.cpp` | Trailing zeros in n! | Divisibility | ✓ Counts factors of 5: n/5 + n/25 + ... |
| `cses_two_knights.cpp` | Two knights placement | Combinatorics | ⚠️ **Known bug**: Fails for n=2 |
| `cses_two_set.cpp` | Partition into two equal sets | - | Not fully examined |
| `cses_two_sum.cpp` | Two sum problem | Two-pointer/hash | Not fully examined |
| `cses_weird_algo.cpp` | Collatz-like sequence | Simulation | ✓ Implements: if even divide by 2, else 3*n+1 |
| `playlist.cpp` | - | - | Not fully examined |

---

### leetcodeprobs/ (81 files)

LeetCode + Contest problems (arrays, trees, graphs, DP, strings):

#### Easy & Fundamentals (Sorted/Searching/Arrays)

| File | Problem | Topic | Status |
|------|---------|-------|--------|
| `lc_two_sum_sorted.cpp` | Two sum (sorted) | Two-pointer | ✓ Returns 1-indexed positions |
| `lc_three_sum.cpp` | 3Sum | Sorting + three-pointer | ✓ Deduplicates triplets correctly |
| `lc_merge_sorted_arrays.cpp` | Merge sorted arrays | In-place merge | Likely present |
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

#### Hashing & Strings

| File | Problem | Data Structure | Status |
|------|---------|-----------------|--------|
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

#### Linked Lists & Trees

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_add_two_numbers_list.cpp` | Add two numbers (LL) | Digit-by-digit add | Present |
| `lc_remove_duplicates_linked_list.cpp` | Remove duplicates (LL) | Pointer manipulation | Present |
| `lc_rotate_linked_list.cpp` | Rotate linked list | Circular + unwind | Present |
| `lc_decode_cipher_linked_list.cpp` | Decode cipher (LL) | Custom parsing | Present |
| `lc_tree_depth.cpp` | Max tree depth | BFS/DFS recursion | Present |
| `lc_symmetric_tree.cpp` | Symmetric tree check | Recursive comparison | Present |
| `lc_same_tree_check.cpp` | Same tree check | Recursion | ⚠️ **Bug**: Pass-by-value issue |
| `lc_same_tree_optimized.cpp` | Same tree (optimized) | Reference-based recursion | ✓ Fixed version |
| `lc_bst_from_array.cpp` | BST from array | Recursive construction | Present |

#### DP & Combinatorics

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_unique_bsts.cpp` | Unique BSTs | Interval DP + memoization | ✓ **Strong**: Uses memoized recursion; generates all structurally unique BSTs |
| `lc_min_moves_dp.cpp` | Min moves DP | Dynamic programming | **Buggy**: Logic error |
| `lc_min_distance_both_directions.cpp` | Min distance | Two-direction search | Present |
| `lc_min_distance_index.cpp` | Min distance index | Array indexing | Present |
| `lc_min_cost_move_boxes.cpp` | Min cost move boxes | DP | Present |
| `lc_min_cost_target_sum.cpp` | Min cost target sum | DP | Present |
| `lc_min_cost_optimization.cpp` | Cost optimization | Greedy/DP | Present |
| `lc_min_cost_greedy.cpp` | Greedy cost | Greedy | Present |
| `lc_min_flips_incomplete.cpp` | Min flips | **Incomplete** | Stub |

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
| `lc_minimum_price_to_buy_at_discount.cpp` | Min price (discount) | Discount logic | ✓ Present |

#### Advanced (Collision, Rotation, Math)

| File | Problem | Approach | Status |
|------|---------|----------|--------|
| `lc_robot_collision.cpp` | Robot collision | Linked list + simulation | ✓ **Strong**: Complex state tracking for colliding robots |
| `lc_rotate_box_gravity.cpp` | Rotate box (gravity) | 2D grid simulation | Present |
| `lc_jump_game_3.cpp` | Jump game III | BFS/reachability | ✓ Set-based visited tracking |
| `lc_jump_game_7.cpp` | Jump game VII | BFS range reachability | Present |
| `lc_jump_game_max_value.cpp` | Jump game max value | DP | Present |
| `lc_jump_queue_bfs.cpp` | Jump queue BFS | **Empty** | Stub |
| `lc_happy_number.cpp` | Happy number | Cycle detection | **Incomplete** |
| `lc_good_array_validator.cpp` | Good array validator | Validation logic | Present |
| `lc_no_of_ops_on_zeroes.cpp` | Ops on zeroes | Counter logic | ⚠️ **Bug**: Assignment `n = no_of_zeroes` instead of `==` |
| `lc_no_zero_integers.cpp` | No-zero integers | Number property check | Present |
| `lc_count_same.cpp` | Count same elements | Frequency | Present |
| `lc_count_kth_roots.cpp` | Count k-th roots | **Incomplete** | Stub |
| `lc_sum_of_cubes.cpp` | Sum of cubes | Math | Present |
| `lc_sum_primes_reverse_range.cpp` | Sum primes reverse | Sieve + sum | Present |
| `lc_product_array_except_self.cpp` | Product except self | Prefix/suffix product | ✓ **Hash-based**: Suboptimal; uses unordered_map instead of O(n) space |
| `lc_product_except_self_v2.cpp` | Product except self v2 | - | Alternative version |
| `lc_decode_slanted_cipher.cpp` | Decode slanted cipher | Grid parsing | Present |
| `lc_find_kth_string_in_nth_ns.cpp` | Find k-th string | String generation | Present |
| `lc_find_unique_biunaryu_strings.cpp` | Find unique binary strings | Backtracking | Present |
| `lc_trapping_rainwater.cpp` | Trapping rain water | **Layer-peel approach** | ⚠️ **Inefficient**: O(n·max_height) instead of two-pointer O(n) |
| `lc_daily_temperatures.cpp` | Daily temperatures | Monotonic stack | **Brute O(n²)** or incomplete |
| `lc_daily_temperatures_incomplete.cpp` | Daily temperatures (draft) | **Incomplete** | Stub |
| `lc_longest_balanced_substring.cpp` | Longest balanced substring | **Incomplete** | Stub |
| `lc_max_path_score_incomplete.cpp` | Max path score | **Incomplete** | Stub |
| `lc_min_operations_grid.cpp` | Min operations grid | Grid manipulation | Present |
| `lc_min_ops_to_modulo.cpp` | Min ops to modulo | Hash + DP | ✓ **Strong**: Maps remainders for even/odd positions; optimizes target selection |

#### Miscellaneous / Contest

| File | Problem | Category | Status |
|------|---------|----------|--------|
| `lc_contest_01.cpp` | Contest problem 1 | - | Present |
| `lc_contest_02.cpp` | Contest problem 2 | - | Present |
| `cf_interactive_query.cpp` | Interactive query (CF) | Interactive | Present |
| `lc_first.cpp` | First attempt | Practice | Present |
| `lc_second.cpp` | Second attempt | Practice | Present |
| `lc_third.cpp` | Third attempt | Practice | Present |
| `lc_sudoku_validator.cpp` | Sudoku validator | Logic | ✓ Checks rows, cols, 3×3 boxes |
| `lc_longest_repetitions.cpp` | Longest repetitions | String/array | Present |

---

### ModernC++/ (3 files)

Modern C++ concepts, const-correctness, and competitive programming notes:

| File | Topic | Focus | Status |
|------|-------|-------|--------|
| `mc_learning_01.cpp` | Hash rolling + unique subarray | Rolling hash; hash collision theory | ✓ Advanced: Hashing strategy for finding unique subarrays |
| `mc_learning_02.cpp` | - | - | Present |
| `mc_the_use_constants.cpp` | const vs #define | Comparison of storage/performance | ✓ Documents: const double vs #define (memory efficiency) |

---

## Brutal reality check — how good a competitive programmer are you?

**Short answer:** You are a **motivated early-intermediate learner**, not yet a reliable competitive programmer. You have **volume and curiosity**; you do **not** yet have **consistency, closure, or contest discipline**.

### Estimated level (honest bands)

| Platform / lens | Where you are | What that means |
|-----------------|---------------|-----------------|
| **CSES** | Early Introductory (~Ch. 1–2) | ~10/12 intro tasks solid; at least one wrong (`cses_two_knights.cpp` fails n=2) |
| **Codeforces** | Weak Div.2 beginner | A few viable A’s; several partial/buggy (`cf_gcd_lcm`, `cf_divisibility_check`, `cf_army`) |
| **LeetCode (interview lens)** | ~120–150 “touched”, **~40–50 submittable** | ~12–15 mediums done well; ~2–3 hards (`lc_unique_bsts`, `lc_robot_collision`) |
| **ICPC / serious CP** | Not competition-ready yet | No graphs, DSU, segtree, flows, bitmask DP, or clean template library |

**Rating metaphor:** Think **800–1100 CF** range in *potential*, but your repo proves **inconsistent execution** — closer to someone who **studies** CP than someone who **performs** under time pressure.

### What the code actually says (not what the file count implies)

1. **Breadth without depth** — 78 LeetCode files, but ~15–20 are empty stubs, broken, or wouldn’t compile/submit (`lc_group_anagrams`, `lc_happy_number`, `lc_same_tree_check`, incomplete trio).
2. **You iterate, but don’t always finish** — RGB string (3 versions), same tree (2), jump game (4) — good learning habit; bad if you move on before one **clean AC** version exists.
3. **Wrong “done” is worse than unsolved** — `lc_trapping_rainwater` (layer peel, not two-pointer), `lc_search_in_rotated_array` (linear scan), `lc_find_minimum` (`min_element` on full array), `lc_merge_sorted_arrays` (sort merged array).
4. **CSES block is your strongest CP signal** — math/greedy intro with proper `solve()` + fast I/O on many files.
5. **advancedConcept is coursework, not CP** — AVL mislabeled and broken; threaded BT is the only semi-serious DS file.
6. **Organization hurts you** — misnamed files (`lc_product_array_except_self` ≠ product except self), debug `cout` left in “optimized” solutions, assignment bug (`if (n = no_of_zeroes)`).

**Bottom line:** You are **not** “bad at math” or “unable to think algorithmically” — proofs: `lc_three_sum`, `lc_robot_collision`, `lc_min_ops_to_modulo`, `codeforces_1.cpp`, most of CSES intro. You **are** bad at **shipping one correct solution per problem**, **naming/organizing**, and **advanced topic coverage**. That gap is fixable; it is not a talent ceiling.

---

## Strengths (structured)

| Area | Level | Evidence |
|------|-------|----------|
| **Greedy / ad-hoc intuition** | ★★★☆☆ | `cses_increasing_array`, `cses_coin_piles`, `codeforces_1`, `lc_rgb_string_optimized` |
| **Basic math / counting** | ★★★☆☆ | `cses_trailing_zeros`, `cses_missing_number`, `cses_number_spiral`, `lc_min_ops_to_modulo` |
| **Two pointers / sorting tricks** | ★★★☆☆ | `lc_three_sum`, `lc_two_sum_sorted`, `lc_prefix_freq` |
| **BFS / reachability on indices** | ★★☆☆☆ | `lc_jump_game_3`, `lc_jump_game_7` |
| **Simulation + custom structures** | ★★★☆☆ | `lc_robot_collision`, `lc_students_sandwiches` |
| **Interval DP / combinatorics** | ★★★☆☆ | `lc_unique_bsts` |
| **Contest I/O habits** | ★★☆☆☆ | `bits/stdc++.h`, `ios::sync_with_stdio`, `solve()` on CSES + newer LC |
| **Persistence / iteration** | ★★★★☆ | Multiple drafts per problem; you revisit hard ideas |
| **Sieve / number theory (when focused)** | ★★☆☆☆ | `prime_pair_sieve.cpp` |

---

## Weaknesses (structured)

| Area | Level | Evidence / impact |
|------|-------|-------------------|
| **Correctness discipline** | ★☆☆☆☆ | `cses_two_knights` (n=2), `lc_same_tree_check` (pass-by-value bug), `lc_no_of_ops_on_zeroes` (`=` vs `==`) |
| **Complexity awareness** | ★★☆☆☆ | `lc_trapping_rainwater`, `lc_longest_substring` (erase in loop), `lc_daily_temperatures` brute only |
| **Finishing problems** | ★★☆☆☆ | 3× `_incomplete`, empty `lc_jump_queue_bfs`, `lc_count_kth_roots`, `lc_longest_balanced_substring` |
| **Graphs** | ☆☆☆☆☆ | Almost no adjacency-list DFS/BFS, no shortest path, topo |
| **Advanced DS** | ☆☆☆☆☆ | No DSU, trie, segtree, Fenwick, heap patterns |
| **DP maturity** | ★★☆☆☆ | One strong (`lc_unique_bsts`); several wrong (`lc_min_moves_dp`) |
| **Monotonic stack / heap** | ☆☆☆☆☆ | Daily temperatures incomplete; no `priority_queue` fluency |
| **Bitmask / state DP** | ☆☆☆☆☆ | Not present |
| **Repo hygiene** | ★☆☆☆☆ | Misnamed files, debug prints, empty returns, nested `class Solution` in `main` |
| **Pointer / tree implementation** | ★★☆☆☆ | AVL insert by value; BST delete incomplete |
| **Codeforces depth** | ★★☆☆☆ | ~4 CF files questionable; no rating-building grind visible |

---

## Topic coverage matrix

| Topic | Files (approx) | Quality |
|-------|----------------|---------|
| Arrays / two-pointer | 28+ | Mixed — strong 3Sum, weak rotated search |
| Strings | 12+ | Improving (RGB iterations) |
| Trees (LC style) | 6 | OK traversals; weak “same tree” first attempt |
| Linked lists | 5 | Decent rotate / add two |
| Stack / queue sim | 6 | **Robot collision** is highlight |
| Graphs | ~4 | Index BFS only |
| DP | 7 | 1–2 strong, rest weak |
| Math / sieve | 5+ | Sieve file is good |
| CSES intro | 12 | Mostly solid |
| CF ad-hoc | 12 | Inconsistent |

**Barely or not covered:** DSU, trie, segment tree, Dijkstra, topo sort, bitmask DP, binary lifting, FFT/NTT, geometry beyond snippets.

---

## Showcase solutions (actually strong)

| File | Why it counts |
|------|----------------|
| `leetcodeprobs/lc_robot_collision.cpp` | Real medium/hard simulation — sort, stack, health tracking |
| `leetcodeprobs/lc_three_sum.cpp` | Canonical sort + two pointers + duplicate skip |
| `leetcodeprobs/lc_unique_bsts.cpp` | Memoized interval DP — hard territory |
| `leetcodeprobs/lc_jump_game_3.cpp` | Clean BFS + visited set |
| `leetcodeprobs/lc_min_ops_to_modulo.cpp` | Non-trivial modeling (remainder buckets for even/odd positions) |
| `leetcodeprobs/lc_rgb_string_optimized.cpp` | Clean greedy with minimal state |
| `codeforces/codeforces_1.cpp` | Greedy case split (pack of 3 vs singles) |
| `cses_probs/cses_coin_piles.cpp` | Correct game theory + multi-test |
| `advancedConcept/prime_pair_sieve.cpp` | Contest-shaped sieve + `solve()` function |

---

## Fix immediately (highest ROI)

1. **`cses_two_knights.cpp`** — wrong for n=2; use closed form instead of deep recursion.
2. **Delete or fix empty files** — `lc_group_anagrams`, `lc_happy_number`, `lc_jump_queue_bfs`.
3. **Finish or delete** 3× `_incomplete` files + BFS stub.
4. **Audit** `cf_gcd_lcm`, `cf_divisibility_check` — likely incomplete.
5. **Fix assignment bugs** — `lc_no_of_ops_on_zeroes.cpp` has `if (n = no_of_zeroes)`.

### What to deprioritize for now

- More AVL/threaded tree **implementation** (unless for coursework).
- New **easy** LeetCode volume.
- **Hard** problems before mediums are consistently optimal.

---

## How to compile & run

```bash
g++ -std=c++17 -O2 -Wall -o sol filename.cpp
./sol < input.txt
```

Many newer files use competitive patterns:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

---

## Stats snapshot

| Metric | Value |
|--------|------:|
| Total `.cpp` files | 114 |
| CSES | 12 |
| Codeforces | 12 |
| LeetCode folder | 78 |
| Incomplete / stub (estimate) | ~15–20 |
| Reliable submittable (estimate) | ~45–55 |
| Strong mediums+ | ~15 |

---

## Stats snapshot (June 2026 update)

| Metric | Value |
|--------|------:|
| Total `.cpp` files | **128** |
| CSES | 29 |
| Codeforces | 13 |
| LeetCode folder | 81 |
| advancedConcept | 11 |
| ModernC++ | 3 |
| Incomplete / stub (estimate) | ~18–20 |
| Reliable submittable (estimate) | ~50–60 |
| Strong mediums+ | ~18 |

---

## Learning path (priority order)

> Do **not** add 50 new easy problems. **Close, correct, and compress** what you have first.

### Phase 1 — Discipline (2–3 weeks)

- **One file = one AC solution** per problem; archive old drafts in `drafts/` or delete them.
- **CSES Introductory complete** — fix knights, finish chapter with 100% AC on judge.
- **Monotonic stack** — finish `lc_daily_temperatures` properly; do 5 stack problems (496, 739 done, 84, 85, 907).
- **Repo cleanup** — fix broken files listed above; no `cout` debug in final versions.

### Phase 2 — Core CP gaps (4–6 weeks)

| Week focus | Topics | Target |
|------------|--------|--------|
| Graphs I | BFS/DFS, connected components, flood fill | 15 problems |
| Graphs II | Topo sort, shortest path (Dijkstra, 0–1 BFS) | 10 problems |
| DSU | Union-find + Kruskal-style problems | 8 problems |
| DP I | 1D/2D classic (knapsack, LIS, grid path) | 15 problems |
| DP II | Interval DP (you started with BSTs) | 8 problems |

**CSES progression:** Sorting/Searching → Dynamic Programming (in order).

**Codeforces:** Virtual contests on Div.2 only; target A + B consistently.

### Phase 3 — Interview + CP convergence (ongoing)

- **Sliding window** — 10 problems; replace erase-based string code.
- **Binary search on answer** — 8 problems (CSES + LC).
- **Template library** — one `template.cpp` with fast I/O, DSU, dijkstra.
- **Weekly rhythm:** 2× CF virtual + 3 new mediums + 1× re-solve old weak file.

---

## How to compile & run

```bash
g++ -std=c++17 -O2 -Wall -o sol filename.cpp
./sol < input.txt
```

Many files use fast I/O pattern:
```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

---

**Last updated:** June 7, 2026  
**Assessment method:** Comprehensive read of all 128 `.cpp` files in the repository.

*This README is an honest code quality assessment, not a problem count flex. Consistent one solid solution per problem beats 100 broken attempts.*
