#pragma once

template <typename Iterator>
void insertionSort(Iterator first, Iterator last)
{
	if(first == last)
		return;

	Iterator current = first;
	++current;
	for(; current != last; ++current)
	{
		auto key = *current;

		Iterator position = current;
		Iterator previous = current;
		--previous;
		while(key < *previous)
		{
			*position = *previous;
			position = previous;

			if(previous == first)
				break;
			--previous;
		}
		*position = key;
	}
}