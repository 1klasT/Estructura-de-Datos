void repeticiones(int arr[], int n) {

    int contador[10] = {0};

    for(int i = 0; i < n; i++){
        contador[arr[i]]++;
    }

    for(int i = 0; i < 10; i++){
        if(contador[i] > 0) {
            printf("El número %d aparece %d veces\n", i, contador[i]);
        }
    }
}