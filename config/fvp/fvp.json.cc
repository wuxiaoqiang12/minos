#include "fvp_config.h"
{
	"version": "0.0.1",
	"platform": "armv8-fvp",

	"vmtags": [
#if 1
	{
			"vmid": 0,
			"name": "linux-01",
			"type": "linux",
			"nr_vcpu": 4,
			"entry": "0x80080000",
			"vcpu0_affinity": 0,
			"vcpu1_affinity": 1,
			"vcpu2_affinity": 2,
			"vcpu3_affinity": 3,
			"setup_data": "0x9fe00000",
			"mmu_on": 1
		}
#else
		{
			"vmid": 0,
			"name": "os1",
			"type": "other",
			"nr_vcpu": 1,
			"entry": "0x90000000",
			"vcpu0_affinity": 0,
			"vcpu1_affinity": 1,
			"vcpu2_affinity": 2,
			"vcpu3_affinity": 3,
			"setup_data": "0xd0000000",
			"mmu_on": 1
		}
#endif
	],
	#include "fvp_virq.json.cc"
	#include "fvp_mem.json.cc"

	"others" : {
		"comments": "minos virtualization config json data"
	}
}