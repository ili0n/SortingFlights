#include "SortCounter.h"

void SortCounter::comparationCountInc() {
	this->comparationCount++;
}
void SortCounter::swapCountInc() {
	this->swapCount++;
}
void SortCounter::iterationCountInc() {
	this->iterationCount++;
}

int SortCounter::getComparationCount() const {
	return this->comparationCount;
}
int SortCounter::getSwapCount() const {
	return this->swapCount;
}
int SortCounter::getIterationCount() const {
	return this->iterationCount;
}

SortCounter::SortCounter():swapCount(0),iterationCount(0),comparationCount(0) {}
