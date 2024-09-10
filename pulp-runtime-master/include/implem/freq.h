/*
 * Copyright (C) 2019 ETH Zurich, University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __POS_IMPLEM_FREQ_H__
#define __POS_IMPLEM_FREQ_H__

unsigned int pos_fll_set_freq(int fll, unsigned int frequency);

unsigned int pos_fll_init(int fll);

void pos_fll_constructor();

static inline uint32_t pi_freq_get(pi_freq_domain_e domain)
{
    return pos_freq_domains[pos_freq_get_fll(domain)];
}

#endif