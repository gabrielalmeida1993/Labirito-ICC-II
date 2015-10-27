//Labirinto - ICC II
//
//Gabriel Almeida Gonçalves - 9292761
//
//

#include <stdio.h>
#include <stdlib.h>

int dx[4]={1,-1,0,0}; 
int dy[4]={0,0,1,-1};
//
//Para testar o outro caso, tire a matriz do modo comentario!
//int t[11][11]={1,1,1,1,0,0,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1,0,0,1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1,0,1,1,1,0,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,1,0,0,1,0,0,0,1,1,1,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,1,1};
int t[11][11]={1,1,1,1,0,0,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1,0,0,1,1,0,0,1,0,1,1,0,0,1,1,0,1,0,0,1,1,0,1,1,1,0,0,0,0,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,0,0,1,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,1,1,0,0,1,0,0,0,1,1,1,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
main() {
	int foi=0,j,m,n,k;
	int x=-1;
	int y=0;
	
	printf("Quantidade de linhas do labirinto ? "); scanf("%d",&n);
	printf("Quantidade de colunas do labirinto ? "); scanf("%d",&m);

	foi=labirinto(x,y,n,m);

	if (foi!=0) {
 	for(k = 0; k < n; k++) {
 		for (j = 0; j < m; j++) {
 			printf("%2d ", t[k][j]);
 }
 	printf("\n");
 }
}
if(foi==0)
 printf("Sem solucao \n");
}



int labirinto (int x, int y,int n,int m)
{
	
	int k,u,v,q=0; 
	
	if ((x==m-1) && (y==n-1)) return (1); 
	else{
	for (k=0;k<4;k++)
	{ 
		u=x+dx[k];
		v=y+dy[k];
	
		if ((u>=0 && u<m) && (v>=0 && v<n) && (t[u][v]==1))
		{
			t[u][v]=2;
			q=labirinto(u,v,n,m); 
			if (q==0)
				t[u][v]=1;
			else
			return (1);
		}
	}
}
return 0;	
}

