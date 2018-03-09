# BPU

Balanced Parity Update Algorithm with Queueing Length Awareness for RAID Arrays

Paper reference
--
Chen Y, Xu Y, Li Y, et al. Balanced Parity Update Algorithm with Queueing Length Awareness for RAID Arrays[C]//Parallel and Distributed Systems (ICPADS), 2016 IEEE 22nd International Conference on. IEEE, 2016: 818-825.

Abstract
--
In parity-based RAID arrays, to update a data
chunk, the corresponding parity chunk(s) must be updated
accordingly so as to keep data consistency and availability. To
achieve this, either read-modify-write (RMW) or read-constructwrite
(RCW) could be used. Traditional parity update algorithm
always selects the one requiring fewer pre-reads so as to reduce
the total number of I/Os, but it may aggravate the skewness of
I/O queues on disks, and thus degrades the system performance.
In this paper, we propose a balanced parity update algorithm
with queueing length awareness, BPU, which takes the number
of pre-reads, the skewness of I/O queues on disks, and realtime
workload into consideration when selecting RCW or RMW
to update parity chunks. We implement a prototype system with
BPU to evaluate its performance. Experimental results show that
the length of I/O queues on disks in a RAID array may be highly
skewed when using traditional parity update algorithm, and thus
severely degrades the system performance. With BPU, we can
reduce the average response time by up to 10%. We also study
the performance of BPU under different system configurations,
and provide multiple insights for adjusting the parameters of
BPU so as to optimize its performance.

Implementation
--
Prototype is based on Linux kernel(drivers/md/raid) which should recompile kernel with BPU module.
