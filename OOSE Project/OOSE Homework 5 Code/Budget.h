#include <string>
using namespace std;

#ifndef BUDGET_H
#define BUDGET_H

class Budget {

private:
	int budgetID;
	float limit;
	float currentSpent;
	function createBudget;
	function updateBudget;
	function resetBudget;
};

#endif
