#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <string>
# include <iostream>
# include <cstdlib>
# include <sys/time.h>
# include <iomanip>

std::vector<long>	merge_insert_sort( std::vector<long> vec, int first, int last );
std::deque<long>	merge_insert_sort( std::deque<long> deq, int first, int last );

#endif
