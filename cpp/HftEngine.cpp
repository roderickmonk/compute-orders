#include <vector>
#include "HftEngine.h"

unsigned int iteration = 0;

NextOrders ComputeOrders(
	double &feeRate,
 	double &quantityLimit,
    double &updateThreshold,
    double &placeThreshold,
	Tuning &tuning1,
	Tuning &tuning2,
	OrderBook &orderBook,
	Order &incumbentBuyOrder,
	Order &incumbentSellOrder)
{
	// cout << "updateThreshold: " << updateThreshold << endl;
	// cout << "placeThreshold: " << placeThreshold << endl;

	return make_pair( 0.11000001, 0.15999999);
}
