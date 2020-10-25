int TinhP(int a,int b, int c){
//	printf("Nhap a: ");scanf("%d",&a);
//	printf("Nhap b: ");scanf("%d",&b);
//	printf("Nhap c: ");scanf("%d",&c);
	int p=a+b+c;
	return p;
}
int TinhS(int a,int b,int c){
	int s,p,p1;
//	printf("Nhap a: ");scanf("%d",&a);
//	printf("Nhap b: ");scanf("%d",&b);
//	printf("Nhap c: ");scanf("%d",&c);
	if(a+b>c&&b+c>a&&c+a>b){
   	p=a+b+c;
	p1=p/2;
	s=sqrt((p1*(p1-a)*(p1-c)*(p1-b)));
    }
	return s;
}
void UCBC(int a, int b){
	int i;
//	printf("Nhap a: ");scanf("%d",&a);
//	printf("Nhap b: ");scanf("%d",&b);
	for(int i=a;i>0;i--){
		if(a%i==0&&b%i==0){
			printf("\nUCLN %d",i);
			break;
		}
	}
	for(int i=a;true;i++){
		if(i%a==0&&i%b==0){
			printf("\nBCNN %d",i);
			break;
		}
	}
}
void TongChuSo(int sl){
	char str1[200],str2[200];
	 
	printf("Nhap chuoi s1:");
	scanf("%s",str1);// gets(str); hello
	char str3[200];
	strcpy(str3,str1);//<==> str3= str1;
	printf("S3: %s",str3);
    sl = strlen(str3);
	printf("Do dai cua chuoi s3: %d\n",sl);
}
bool KiemTraSNT(int n){
	if(n<2) return false;
	// neu den duoc day thi n>=2
	if(n<=3) return true;
	// neu den duoc day thi n > 3
	// kiem tra xem co uoc nao khac 1 va n ko?
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	// neu song sot het vong lap thi la so nguyen to
	return true;
}
int TimSNTTiepTheo(int n){
	for(int i=n+1;true;i++){
		if(KiemTraSNT(i)){
			return i;
		}
	}
}
