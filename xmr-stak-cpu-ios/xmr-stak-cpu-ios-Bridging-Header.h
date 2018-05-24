//
//  xmr-stak-cpu-ios-Bridging-Header.h
//  xmr-stak-cpu-ios
//
//  Created by Michael G. Kazakov on 10/22/17.
//  Copyright © 2017 Michael G. Kazakov. All rights reserved.
//

#ifndef xmr_stak_cpu_ios_Bridging_Header_h
#define xmr_stak_cpu_ios_Bridging_Header_h

void run_main_miner(const char *_config, const char *_pools, const char *_cpu);
void invoke_print_hash();
void invoke_print_results();
void invoke_print_connection();

#endif /* xmr_stak_cpu_ios_Bridging_Header_h */
