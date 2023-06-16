/* #undef COMPAT___VMALLOC_HAS_2_PARAMS */
/* #undef COMPAT_ADD_DISK_RETURNS_INT */
#define COMPAT_BEFORE_4_13_KERNEL_READ
/* #undef COMPAT_BIO_ALLOC_HAS_4_PARAMS */
#define COMPAT_BLKDEV_ISSUE_DISCARD_TAKES_FLAGS
#define COMPAT_BLKDEV_ISSUE_ZEROOUT_DISCARD
#define COMPAT_CAN_INCLUDE_VERMAGIC_H
/* #undef COMPAT_DAX_DIRECT_ACCESS_TAKES_MODE */
/* #undef COMPAT_FS_DAX_GET_BY_BDEV_TAKES_START_OFF */
/* #undef COMPAT_FS_DAX_GET_BY_BDEV_TAKES_START_OFF_AND_HOLDER */
#define COMPAT_GENL_POLICY_IN_OPS
/* #undef COMPAT_HAVE_BIO_MAX_VECS */
/* #undef COMPAT_HAVE_CRYPTO_TFM_NEED_KEY */
/* #undef COMPAT_HAVE_GENHD_FL_NO_PART */
#define COMPAT_HAVE_SHASH_DESC_ON_STACK
#define COMPAT_HAVE_WB_CONGESTED_ENUM
/* #undef COMPAT_HAVE_ALLOW_KERNEL_SIGNAL */
/* #undef COMPAT_HAVE_BDEV_DISCARD_GRANULARITY */
/* #undef COMPAT_HAVE_BDEV_MAX_DISCARD_SECTORS */
/* #undef COMPAT_HAVE_BDEV_NR_SECTORS */
/* #undef COMPAT_HAVE_BDEVNAME */
#define COMPAT_HAVE_BDGRAB
#define COMPAT_HAVE_BDI_CONGESTED
#define COMPAT_HAVE_BDI_CONGESTED_FN
/* #undef COMPAT_HAVE_BIO_ALLOC_CLONE */
#define COMPAT_HAVE_BIO_BI_BDEV
#define COMPAT_HAVE_BIO_BI_ERROR
/* #undef COMPAT_HAVE_BIO_BI_OPF */
/* #undef COMPAT_HAVE_BIO_BI_STATUS */
#define COMPAT_HAVE_BIO_CLONE_FAST
/* #undef COMPAT_HAVE_BIO_OP_SHIFT */
/* #undef COMPAT_HAVE_BIO_SET_DEV */
/* #undef COMPAT_HAVE_BIO_SET_OP_ATTRS */
/* #undef COMPAT_HAVE_BIO_SPLIT_TO_LIMITS */
/* #undef COMPAT_HAVE_BIO_START_IO_ACCT */
/* #undef COMPAT_HAVE_BIOSET_INIT */
/* #undef COMPAT_HAVE_BIOSET_NEED_BVECS */
/* #undef COMPAT_HAVE_BLK_ALLOC_DISK */
/* #undef COMPAT_HAVE_BLK_ALLOC_QUEUE_RH */
#define COMPAT_HAVE_BLK_CHECK_PLUGGED
/* #undef COMPAT_HAVE_BLK_CLEANUP_DISK */
/* #undef COMPAT_HAVE_BLK_OPF_T */
#define COMPAT_HAVE_BLK_QC_T_MAKE_REQUEST
/* #undef COMPAT_HAVE_BLK_QC_T_SUBMIT_BIO */
/* #undef COMPAT_HAVE_BLK_QUEUE_FLAG_SET */
#define COMPAT_HAVE_BLK_QUEUE_MAKE_REQUEST
#define COMPAT_HAVE_BLK_QUEUE_MAX_WRITE_SAME_SECTORS
/* #undef COMPAT_HAVE_BLK_QUEUE_MERGE_BVEC */
/* #undef COMPAT_HAVE_BLK_QUEUE_SPLIT_BIO */
/* #undef COMPAT_HAVE_BLK_QUEUE_SPLIT_Q_BIO */
#define COMPAT_HAVE_BLK_QUEUE_SPLIT_Q_BIO_BIOSET
/* #undef COMPAT_HAVE_BLK_QUEUE_UPDATE_READAHEAD */
#define COMPAT_HAVE_BLK_QUEUE_WRITE_CACHE
/* #undef COMPAT_HAVE_BVEC_KMAP_LOCAL */
#define COMPAT_HAVE_D_INODE
/* #undef COMPAT_HAVE_DISK_UPDATE_READAHEAD */
/* #undef COMPAT_HAVE_ENUM_REQ_OP */
/* #undef COMPAT_HAVE_FALLTHROUGH */
/* #undef COMPAT_HAVE_FS_DAX_GET_BY_BDEV */
/* #undef COMPAT_HAVE_GENERIC_START_IO_ACCT_Q_RW_SECT_PART */
#define COMPAT_HAVE_GENERIC_START_IO_ACCT_RW_SECT_PART
/* #undef COMPAT_HAVE_GET_RANDOM_U32 */
/* #undef COMPAT_HAVE_GET_RANDOM_U32_BELOW */
#define COMPAT_HAVE_HD_STRUCT
#define COMPAT_HAVE_IB_CQ_INIT_ATTR
#define COMPAT_HAVE_IB_GET_DMA_MR
#define COMPAT_HAVE_IDR_IS_EMPTY
#define COMPAT_HAVE_INODE_LOCK
/* #undef COMPAT_HAVE_KTIME_TO_TIMESPEC64 */
#define COMPAT_HAVE_KVFREE
/* #undef COMPAT_HAVE_KVFREE_RCU */
/* #undef COMPAT_HAVE_KVFREE_RCU_MIGHTSLEEP */
/* #undef COMPAT_HAVE_LIST_IS_FIRST */
#define COMPAT_HAVE_LIST_NEXT_ENTRY
/* #undef COMPAT_HAVE_MAX_SEND_RECV_SGE */
/* #undef COMPAT_HAVE_NLA_NEST_START_NOFLAG */
/* #undef COMPAT_HAVE_NLA_PARSE_DEPRECATED */
/* #undef COMPAT_HAVE_NLA_PUT_64BIT */
/* #undef COMPAT_HAVE_NLA_STRSCPY */
/* #undef COMPAT_HAVE_PART_STAT_H */
/* #undef COMPAT_HAVE_PART_STAT_READ_ACCUM */
/* #undef COMPAT_HAVE_POINTER_BACKING_DEV_INFO */
/* #undef COMPAT_HAVE_PROC_CREATE_SINGLE */
#define COMPAT_HAVE_QUEUE_FLAG_DISCARD
/* #undef COMPAT_HAVE_QUEUE_FLAG_STABLE_WRITES */
/* #undef COMPAT_HAVE_RB_DECLARE_CALLBACKS_MAX */
/* #undef COMPAT_HAVE_REFCOUNT_INC */
/* #undef COMPAT_HAVE_REQ_HARDBARRIER */
#define COMPAT_HAVE_REQ_NOIDLE
/* #undef COMPAT_HAVE_REQ_NOUNMAP */
/* #undef COMPAT_HAVE_REQ_OP_WRITE */
/* #undef COMPAT_HAVE_REQ_OP_WRITE_ZEROES */
#define COMPAT_HAVE_REQ_WRITE
/* #undef COMPAT_HAVE_REVALIDATE_DISK_SIZE */
/* #undef COMPAT_HAVE_SCHED_SET_FIFO */
/* #undef COMPAT_HAVE_SCHED_SIGNAL_H */
/* #undef COMPAT_HAVE_SECURITY_NETLINK_RECV */
/* #undef COMPAT_HAVE_SENDPAGE_OK */
/* #undef COMPAT_HAVE_SET_CAPACITY_AND_NOTIFY */
#define COMPAT_HAVE_SHASH_DESC_ZERO
#define COMPAT_HAVE_SIMPLE_POSITIVE
/* #undef COMPAT_HAVE_SK_USE_TASK_FRAG */
/* #undef COMPAT_HAVE_SOCK_SET_KEEPALIVE */
#define COMPAT_HAVE_STRSCPY
#define COMPAT_HAVE_STRUCT_BVEC_ITER
/* #undef COMPAT_HAVE_STRUCT_SIZE */
/* #undef COMPAT_HAVE_SUBMIT_BIO_NOACCT */
/* #undef COMPAT_HAVE_TCP_SOCK_SET_CORK */
/* #undef COMPAT_HAVE_TCP_SOCK_SET_KEEPCNT */
/* #undef COMPAT_HAVE_TCP_SOCK_SET_KEEPIDLE */
/* #undef COMPAT_HAVE_TCP_SOCK_SET_NODELAY */
/* #undef COMPAT_HAVE_TCP_SOCK_SET_QUICKACK */
/* #undef COMPAT_HAVE_TIME64_TO_TM */
/* #undef COMPAT_HAVE_TIMER_SETUP */
/* #undef COMPAT_HAVE_TIMER_SHUTDOWN */
/* #undef COMPAT_HAVE_VOID_MAKE_REQUEST */
/* #undef COMPAT_HAVE_VOID_SUBMIT_BIO */
/* #undef COMPAT_IB_ALLOC_PD_HAS_2_PARAMS */
/* #undef COMPAT_IB_DEVICE_HAS_OPS */
/* #undef COMPAT_IB_POST_SEND_CONST_PARAMS */
#define COMPAT_IB_QUERY_DEVICE_HAS_3_PARAMS
#define COMPAT_NEED_DRBD_WRAPPERS
#define COMPAT_NEED_MAKE_REQUEST_RECURSION
/* #undef COMPAT_NEED_SKB_ABORT_SEQ_READ */
/* #undef COMPAT_PART_STAT_READ_TAKES_BLOCK_DEVICE */
#define COMPAT_QUEUE_LIMITS_HAS_DISCARD_ZEROES_DATA
#define COMPAT_RDMA_CREATE_ID_HAS_NET_NS
/* #undef COMPAT_RDMA_REJECT_HAS_REASON_ARG */
#define COMPAT_SK_DATA_READY_HAS_1_PARAM
#define COMPAT_SOCK_CREATE_KERN_HAS_NETNS_PARAMETER
/* #undef COMPAT_SOCK_OPS_RETURNS_ADDR_LEN */
/* #undef COMPAT_STRUCT_GENDISK_HAS_BACKING_DEV_INFO */
