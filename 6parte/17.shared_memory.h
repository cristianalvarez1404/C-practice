
char * attach_memory_block(char *filename, int size);
bool detach_memory_block(char *block);
bool destroy_memory_block(char *filename);

//all of the programs will share these values
#define BLOCK_SIZE 4096
#define FILENAME "writeshmem.c"
#define IPC_RESULT_ERROR (-1)

//filenames for two semaphores
#define SEM_PRODUCER_FNAME "/myproducer"
#define SEM_CONSUMER_FNAME "/myconsumer"

#endif