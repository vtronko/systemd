/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include <linux/capability.h>

/* 3a101b8de0d39403b2c7e5c23fd0b005668acf48 (3.16) */
#ifndef CAP_AUDIT_READ
#define CAP_AUDIT_READ 37

#undef  CAP_LAST_CAP
#define CAP_LAST_CAP   CAP_AUDIT_READ
#endif

/* 980737282232b752bb14dab96d77665c15889c36 (5.8) */
#ifndef CAP_PERFMON
#define CAP_PERFMON 38

#undef  CAP_LAST_CAP
#define CAP_LAST_CAP   CAP_PERFMON
#endif

/* a17b53c4a4b55ec322c132b6670743612229ee9c (5.8) */
#ifndef CAP_BPF
#define CAP_BPF 39

#undef  CAP_LAST_CAP
#define CAP_LAST_CAP   CAP_BPF
#endif
