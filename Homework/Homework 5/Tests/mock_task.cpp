#include "mock_task.h"

unsigned int MockTask::latest_begin_value_from_any_instance_ = 0;
unsigned int MockTask::latest_end_value_from_any_instance_ = 0;
unsigned int MockTask::latest_reduce_input_value_from_any_instance_ = UINT_MAX;