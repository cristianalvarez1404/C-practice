#include "hash_table.h"

typedef struct entry {
  char *key;
  void *object;
  struct entry *next;
} entry;

typedef struct _hash_table {
  uint32_t size;
  hashfunction *hash;
  entry **elements;
} hash_table;

static size_t hash_table_index(hash_table *ht,const char *key){
  size_t result = (ht->hash(key, strlen(key)) % ht->size);
  return result;
}

hash_table *hash_table_create(uint32_t size, hashfunction *hf){
  hash_table *ht = malloc(sizeof(*ht));
  ht->size = size;
  ht->hash = hf;
  // note that calloc zeros out the memory
  ht->elements = calloc(sizeof(entry*), ht->size);
  return ht;
}

void hash_table_destroy(hash_table *ht){
  //what to do about individual elements
  free(ht->elements);
  free(ht);
}

void hash_table_print(hash_table *ht){
  printf("Start Table\n");
  for(uint32_t i = 0; i < ht->size; i++) {
    if(ht->elements[i] == NULL) {
      //do we want to print out null entries?
      printf("\t%i\t---\n",i);
    } else {
      printf("\t%i\t\n",i);
      entry *tmp = ht->elements[i];
      while(tmp != NULL) {
        printf("\"%s\"(%p) - ",tmp->key, tmp->object);
        tmp = tmp->next;
      }
      printf("\n");
    }
  }
  printf("End Table\n");
}

bool hash_table_insert(hash_table *ht, const char *key, void *obj){
  if(key == NULL || obj == NULL) return false;
  size_t index = hash_table_index(ht, key);

  if(hash_table_lookup(ht, key) != NULL) return false;

  //create a new entry
  entry *e = malloc(sizeof(*e));
  e->object = obj;
  e->key = malloc(strlen(key)+1);
  strcpy(e->key, key);

  //insert entry
  e->next = ht->elements[index];
  ht->elements[index] = e;
  return true;
}

void *hash_table_lookup(hash_table *ht, const char *key){

}

void *hash_table_delete(hash_table *ht, const char *key){

}
