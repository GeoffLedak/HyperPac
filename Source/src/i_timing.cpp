#include "i_timing.h"


bool StateDuration(short time) {

	if (timerRemaining == false && MASTER_CLOCK <= 0)
		timerRemaining = true;

	if (timerRemaining == true)
		MASTER_CLOCK++;

	if (MASTER_CLOCK > time) {
		MASTER_CLOCK = 0;
		timerRemaining = false;
	}

	if (timerRemaining == false)
		return true;
	else
		return false;
}
