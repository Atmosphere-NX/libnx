/**
 * @file ectx.h
 * @brief Error Context services IPC wrapper.
 * @author SciresM
 * @copyright libnx Authors
 */
#pragma once
#include "../types.h"
#include "../kernel/event.h"
#include "../sf/service.h"

/// Initialize ectx:r.
Result ectxrInitialize(void);

/// Exit ectx:r.
void ectxrExit(void);

/// Gets the Service object for the actual ectx:r service session.
Service* ectxrGetServiceSession(void);

/**
 * @brief Retrieves the error context associated with an error descriptor and result.
 * @return Result code.
 */
Result ectxrPullContext(s32 *out0, u32 *out_total_size, u32 *out_size, void *dst, size_t dst_size, u32 descriptor, Result result);
