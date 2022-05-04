#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *sum(void *args);
int x;
int sum_matrix = 0;

int main(){
        int matrix[99][99];
        scanf("%d", &x);
        pthread_t threads[x];
	for(int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
        for(int temp = 0; temp < x; temp++){
                pthread_create(&threads[temp], NULL, sum, matrix[temp]);
        }
        for(int temp = 0; temp < x; temp++){
                pthread_join(threads[temp], NULL);
        }
        printf("%d\n", sum_matrix/x);
        return 0;
}
void *sum(void *args){
        pthread_mutex_lock(&mutex);
	int *p = (int*)args;
	for(int i = 0; i < x; i++){
		for (int j = 0; j < x; j++){
		        sum_matrix += p[i];
	        }
        }
        pthread_mutex_unlock(&mutex);
	pthread_exit(0);
        return args;
}