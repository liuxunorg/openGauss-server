/*
 * Copyright (c) 2020 Huawei Technologies Co.,Ltd.
 *
 * openGauss is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 * -------------------------------------------------------------------------
 *
 * sctp_thread.h
 *
 * IDENTIFICATION
 *    src/gausskernel/cbb/communication/sctp_utils/sctp_thread.h
 *
 * -------------------------------------------------------------------------
 */
#ifndef _UTILS_THREAD_H_
#define _UTILS_THREAD_H_

#include <pthread.h>

typedef void(mc_thread_routine)(void*);

struct mc_thread {
    mc_thread_routine* routine;
    void* arg;
    pthread_t handle;
};

int mc_thread_init(struct mc_thread* self, mc_thread_routine* routine, void* arg);

void mc_thread_block_signal();

#endif  //_UTILS_THREAD_H_
